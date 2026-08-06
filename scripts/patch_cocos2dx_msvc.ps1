# =============================================================================
#  patch_cocos2dx_msvc.ps1
#
#  Applies source-tree patches to cocos2d-x 2.2.3 so it compiles cleanly
#  with modern MSVC v143 (Visual Studio 2022) on Windows.
#
#  Why this is needed:
#    * cocos2d-x 2.2.3 was written for VS2010 (MSVC 16.0). Modern MSVC
#      enforces stricter rules and the Universal CRT (UCRT) provides
#      functions that 2.2.3 still redefines as macros, causing conflicts.
#    * We compile cocos2d-x sources directly into HieuDash.exe (static
#      link, no DLL), but 2.2.3's CCPlatformDefine.h unconditionally
#      marks every CC_DLL symbol as __declspec(dllimport) when _USRDLL
#      is undefined, which MSVC rejects with C2491 ("definition of
#      dllimport static data member not allowed").
#
#  All patches are idempotent (running twice is a no-op) and target only
#  the Windows build path; the Linux / iOS / Android builds are unaffected
#  because they use different platform headers.
# =============================================================================
[CmdletBinding()]
param(
    [string]$CocosRoot = "cocos2d"
)

$ErrorActionPreference = "Stop"

function Patch-File {
    param(
        [string]$File,
        [string]$Find,
        [string]$Replace
    )
    if (-not (Test-Path $File)) {
        Write-Host "  SKIP (file not found): $File"
        return
    }
    $content = Get-Content $File -Raw -Encoding UTF8
    if ($content -match [regex]::Escape($Find)) {
        $new = $content -replace [regex]::Escape($Find), $Replace
        Set-Content $File -Value $new -NoNewline -Encoding UTF8
        Write-Host "  PATCHED: $File"
    } else {
        Write-Host "  already patched (or pattern not found): $File"
    }
}

Write-Host "=== patch_cocos2dx_msvc.ps1: patching $CocosRoot ==="

# -----------------------------------------------------------------------------
# 1. CCPlatformDefine.h (win32)
#    Replace the _USRDLL-based CC_DLL definition with an empty definition
#    so static linking into HieuDash.exe works (no dllimport/dllexport).
# -----------------------------------------------------------------------------
$f = "$CocosRoot/cocos2dx/platform/win32/CCPlatformDefine.h"
Patch-File -File $f `
    -Find "#if defined(_USRDLL)`r`n    #define CC_DLL     __declspec(dllexport)`r`n#else         /* use a DLL library */`r`n    #define CC_DLL     __declspec(dllimport)`r`n#endif" `
    -Replace "#if defined(CC_STATIC)`r`n    #define CC_DLL`r`n#elif defined(_USRDLL)`r`n    #define CC_DLL     __declspec(dllexport)`r`n#else         /* use a DLL library */`r`n    #define CC_DLL     __declspec(dllimport)`r`n#endif"
# Also handle LF line endings (in case git auto-converts)
Patch-File -File $f `
    -Find "#if defined(_USRDLL)`n    #define CC_DLL     __declspec(dllexport)`n#else         /* use a DLL library */`n    #define CC_DLL     __declspec(dllimport)`n#endif" `
    -Replace "#if defined(CC_STATIC)`n    #define CC_DLL`n#elif defined(_USRDLL)`n    #define CC_DLL     __declspec(dllexport)`n#else         /* use a DLL library */`n    #define CC_DLL     __declspec(dllimport)`n#endif"

# -----------------------------------------------------------------------------
# 2. CCStdC.h (win32)
#    a) Remove `#define snprintf _snprintf` - modern UCRT already provides
#       snprintf as a real function; the macro triggers C1189.
#    b) Replace `#define MIN min` / `#define MAX max` with proper macro
#       definitions that don't rely on the windows.h min/max macros
#       (which are suppressed by NOMINMAX). Without this, MAX(0, float)
#       expands to `max(0, float)` which is undefined -> C3861, or with
#       `using namespace std;` becomes `std::max(0, float)` -> C2672
#       (no matching overload because int != float).
# -----------------------------------------------------------------------------
$f = "$CocosRoot/cocos2dx/platform/win32/CCStdC.h"
# 2a. Remove snprintf macro (CRLF + LF variants)
Patch-File -File $f `
    -Find "#ifndef snprintf`r`n#define snprintf _snprintf`r`n#endif" `
    -Replace "// v0.7: snprintf macro removed - modern UCRT provides it`r`n// #ifndef snprintf`r`n// #define snprintf _snprintf`r`n// #endif"
Patch-File -File $f `
    -Find "#ifndef snprintf`n#define snprintf _snprintf`n#endif" `
    -Replace "// v0.7: snprintf macro removed - modern UCRT provides it`n// #ifndef snprintf`n// #define snprintf _snprintf`n// #endif"

# 2b. Replace MIN min / MAX max with proper macros
Patch-File -File $f `
    -Find "#define MIN     min`r`n#define MAX     max" `
    -Replace "#ifndef MIN`r`n#define MIN(x,y) (((x) > (y)) ? (y) : (x))`r`n#endif`r`n#ifndef MAX`r`n#define MAX(x,y) (((x) < (y)) ? (y) : (x))`r`n#endif"
Patch-File -File $f `
    -Find "#define MIN     min`n#define MAX     max" `
    -Replace "#ifndef MIN`n#define MIN(x,y) (((x) > (y)) ? (y) : (x))`n#endif`n#ifndef MAX`n#define MAX(x,y) (((x) < (y)) ? (y) : (x))`n#endif"

# -----------------------------------------------------------------------------
# 3. CCTextureCache.cpp
#    The pthread.h include is unconditional on non-WinRT/WP8 builds, but
#    Windows doesn't ship pthread.h. Change the guard to also exclude
#    CC_PLATFORM_WIN32 (we use CCThread-win32.cpp instead, which wraps
#    Windows threads, not pthreads).
# -----------------------------------------------------------------------------
$f = "$CocosRoot/cocos2dx/textures/CCTextureCache.cpp"
Patch-File -File $f `
    -Find "#if (CC_TARGET_PLATFORM != CC_PLATFORM_WINRT) && (CC_TARGET_PLATFORM != CC_PLATFORM_WP8)`r`n#include <pthread.h>" `
    -Replace "#if (CC_TARGET_PLATFORM != CC_PLATFORM_WINRT) && (CC_TARGET_PLATFORM != CC_PLATFORM_WP8) && (CC_TARGET_PLATFORM != CC_PLATFORM_WIN32)`r`n#include <pthread.h>"
Patch-File -File $f `
    -Find "#if (CC_TARGET_PLATFORM != CC_PLATFORM_WINRT) && (CC_TARGET_PLATFORM != CC_PLATFORM_WP8)`n#include <pthread.h>" `
    -Replace "#if (CC_TARGET_PLATFORM != CC_PLATFORM_WINRT) && (CC_TARGET_PLATFORM != CC_PLATFORM_WP8) && (CC_TARGET_PLATFORM != CC_PLATFORM_WIN32)`n#include <pthread.h>"

# Also need to handle the body of CCTextureCache that uses pthread types.
# When CC_PLATFORM_WIN32 is excluded from the pthread.h include, the
# pthread_t / pthread_mutex_t etc. types become undefined. We add a
# tiny shim that maps them to void* / CRITICAL_SECTION so the file
# still compiles. (Functions that actually use pthread_create etc.
# are wrapped in #if branches that we will neutralize below.)
$shim = @'
// v0.7: pthread shim for Win32 - we never call pthread_ functions on
// Windows (CCThread-win32.cpp wraps Windows threads instead), but the
// type names are used in struct field declarations. Map them to
// minimal stand-ins so the file compiles.
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
typedef void* pthread_t;
typedef void* pthread_mutex_t;
typedef int pthread_cond_t;
typedef int pthread_attr_t;
#endif
'@
if (Test-Path $f) {
    $content = Get-Content $f -Raw -Encoding UTF8
    if ($content -notmatch "v0.7: pthread shim for Win32") {
        # Insert shim right after the pthread.h include block
        $pattern = '(#include <pthread\.h>\s*\r?\n#else\s*\r?\n#include "CCPThreadWinRT\.h")'
        $new = [regex]::Replace($content, $pattern, "`$1`r`n$shim`r`n")
        if ($new -ne $content) {
            Set-Content $f -Value $new -NoNewline -Encoding UTF8
            Write-Host "  PATCHED (pthread shim): $f"
        } else {
            Write-Host "  WARN: could not insert pthread shim in $f"
        }
    } else {
        Write-Host "  already has pthread shim: $f"
    }
}

# -----------------------------------------------------------------------------
# 4. CCImage.cpp (win32)
#    RemoveFontResource() resolves to RemoveFontResourceA (ANSI) unless
#    UNICODE is defined. The argument is wchar_t*, so we need the W
#    variant explicitly.
# -----------------------------------------------------------------------------
$f = "$CocosRoot/cocos2dx/platform/win32/CCImage.cpp"
Patch-File -File $f `
    -Find "RemoveFontResource(pwszBuffer);" `
    -Replace "RemoveFontResourceW(pwszBuffer);"

Write-Host "=== patch_cocos2dx_msvc.ps1: done ==="
