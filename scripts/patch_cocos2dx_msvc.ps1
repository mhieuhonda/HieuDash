# =============================================================================
#  patch_cocos2dx_msvc.ps1
#
#  Applies source-tree patches to cocos2d-x 2.2.3 so it compiles cleanly
#  with modern MSVC v143 (Visual Studio 2022) on Windows.
# =============================================================================
[CmdletBinding()]
param(
    [string]$CocosRoot = "cocos2d"
)

$ErrorActionPreference = "Stop"

function Patch-File {
    param([string]$File, [string]$Find, [string]$Replace)
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
        Write-Host "  already patched / pattern not found: $File"
    }
}

Write-Host "=== patch_cocos2dx_msvc.ps1: patching $CocosRoot ==="

# -----------------------------------------------------------------------------
# 1. CCPlatformDefine.h (win32): make CC_DLL empty for static builds.
# -----------------------------------------------------------------------------
$f = "$CocosRoot/cocos2dx/platform/win32/CCPlatformDefine.h"
Patch-File -File $f `
    -Find "#if defined(_USRDLL)`r`n    #define CC_DLL     __declspec(dllexport)`r`n#else         /* use a DLL library */`r`n    #define CC_DLL     __declspec(dllimport)`r`n#endif" `
    -Replace "#if defined(CC_STATIC)`r`n    #define CC_DLL`r`n#elif defined(_USRDLL)`r`n    #define CC_DLL     __declspec(dllexport)`r`n#else         /* use a DLL library */`r`n    #define CC_DLL     __declspec(dllimport)`r`n#endif"
Patch-File -File $f `
    -Find "#if defined(_USRDLL)`n    #define CC_DLL     __declspec(dllexport)`n#else         /* use a DLL library */`n    #define CC_DLL     __declspec(dllimport)`n#endif" `
    -Replace "#if defined(CC_STATIC)`n    #define CC_DLL`n#elif defined(_USRDLL)`n    #define CC_DLL     __declspec(dllexport)`n#else         /* use a DLL library */`n    #define CC_DLL     __declspec(dllimport)`n#endif"

# -----------------------------------------------------------------------------
# 2. CCStdC.h (win32): drop snprintf macro, redefine MAX/MIN as proper macros.
# -----------------------------------------------------------------------------
$f = "$CocosRoot/cocos2dx/platform/win32/CCStdC.h"
Patch-File -File $f `
    -Find "#ifndef snprintf`r`n#define snprintf _snprintf`r`n#endif" `
    -Replace "// v0.7: snprintf macro removed - modern UCRT provides it`r`n// #ifndef snprintf`r`n// #define snprintf _snprintf`r`n// #endif"
Patch-File -File $f `
    -Find "#ifndef snprintf`n#define snprintf _snprintf`n#endif" `
    -Replace "// v0.7: snprintf macro removed - modern UCRT provides it`n// #ifndef snprintf`r`n// #define snprintf _snprintf`r`n// #endif"
Patch-File -File $f `
    -Find "#define MIN     min`r`n#define MAX     max" `
    -Replace "#ifndef MIN`r`n#define MIN(x,y) (((x) > (y)) ? (y) : (x))`r`n#endif`r`n#ifndef MAX`r`n#define MAX(x,y) (((x) < (y)) ? (y) : (x))`r`n#endif"
Patch-File -File $f `
    -Find "#define MIN     min`n#define MAX     max" `
    -Replace "#ifndef MIN`n#define MIN(x,y) (((x) > (y)) ? (y) : (x))`r`n#endif`n#ifndef MAX`n#define MAX(x,y) (((x) < (y)) ? (y) : (x))`r`n#endif"

# -----------------------------------------------------------------------------
# 3. CCTextureCache.cpp: pthread.h include - use 3-way branch so Win32
#    gets a typedef shim instead of including the missing CCPThreadWinRT.h.
#    WinRT/WP8 still get their original include.
# -----------------------------------------------------------------------------
$f = "$CocosRoot/cocos2dx/textures/CCTextureCache.cpp"
$oldIncludeCRLF = "#if (CC_TARGET_PLATFORM != CC_PLATFORM_WINRT) && (CC_TARGET_PLATFORM != CC_PLATFORM_WP8)`r`n#include <pthread.h>`r`n#else`r`n#include `"CCPThreadWinRT.h`"`r`n#include <ppl.h>`r`n#include <ppltasks.h>`r`nusing namespace concurrency;`r`n#endif"
$oldIncludeLF   = "#if (CC_TARGET_PLATFORM != CC_PLATFORM_WINRT) && (CC_TARGET_PLATFORM != CC_PLATFORM_WP8)`n#include <pthread.h>`n#else`n#include `"CCPThreadWinRT.h`"`n#include <ppl.h>`n#include <ppltasks.h>`nusing namespace concurrency;`n#endif"
$newInclude = "#if (CC_TARGET_PLATFORM != CC_PLATFORM_WINRT) && (CC_TARGET_PLATFORM != CC_PLATFORM_WP8) && (CC_TARGET_PLATFORM != CC_PLATFORM_WIN32)`r`n#include <pthread.h>`r`n#elif (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_WP8)`r`n#include `"CCPThreadWinRT.h`"`r`n#include <ppl.h>`r`n#include <ppltasks.h>`r`nusing namespace concurrency;`r`n#else`r`n// v0.7: pthread shim for Win32 - we never call pthread_ functions on`r`n// Windows (CCThread-win32.cpp wraps Windows threads instead), but the`r`n// type names are used in struct field declarations.`r`ntypedef void* pthread_t;`r`ntypedef void* pthread_mutex_t;`r`ntypedef int pthread_cond_t;`r`ntypedef int pthread_attr_t;`r`n#endif"
Patch-File -File $f -Find $oldIncludeCRLF -Replace $newInclude
Patch-File -File $f -Find $oldIncludeLF   -Replace $newInclude

# -----------------------------------------------------------------------------
# 4. CCImage.cpp (win32): use the W variants explicitly (with UNICODE
#    now defined, the macros also resolve to W, but be explicit so the
#    code is correct even if UNICODE is later removed).
# -----------------------------------------------------------------------------
$f = "$CocosRoot/cocos2dx/platform/win32/CCImage.cpp"
Patch-File -File $f -Find "RemoveFontResource(pwszBuffer);" -Replace "RemoveFontResourceW(pwszBuffer);"
Patch-File -File $f -Find "AddFontResource(pwszBuffer);"    -Replace "AddFontResourceW(pwszBuffer);"

# -----------------------------------------------------------------------------
# 5. CCEGLView.cpp (win32): APPBARDATA / SHAppBarMessage / ABM_GETTASKBARPOS
#    are declared in <shellapi.h>. WIN32_LEAN_AND_MEAN excludes it from
#    <windows.h>, so include it explicitly.
# -----------------------------------------------------------------------------
$f = "$CocosRoot/cocos2dx/platform/win32/CCEGLView.cpp"
if (Test-Path $f) {
    $content = Get-Content $f -Raw -Encoding UTF8
    if ($content -notmatch "#include <shellapi.h>") {
        # Insert after the first #include <windows.h> (or after WIN32_LEAN_AND_MEAN define)
        $new = $content -replace '(#include\s*<windows\.h>)', "`$1`r`n// v0.7: APPBARDATA / SHAppBarMessage / ABM_GETTASKBARPOS live here`r`n#include <shellapi.h>"
        if ($new -eq $content) {
            # No <windows.h> include found - try inserting at the top after the copyright block
            $new = $content -replace '(^//.*\r?\n)*', "`$0`r`n#include <shellapi.h>`r`n"
        }
        Set-Content $f -Value $new -NoNewline -Encoding UTF8
        Write-Host "  PATCHED (shellapi.h): $f"
    } else {
        Write-Host "  already has shellapi.h: $f"
    }
}

# -----------------------------------------------------------------------------
# 6. MciPlayer.cpp (CocosDenshion/win32) and Win32InputBox.cpp (extensions):
#    GWL_USERDATA was removed in 64-bit Windows SDKs (replaced by GWLP_USERDATA).
#    Replace the constant AND switch to the *Ptr function variants which are
#    correct on both 32-bit and 64-bit Windows.
# -----------------------------------------------------------------------------
foreach ($f in @(
    "$CocosRoot/CocosDenshion/win32/MciPlayer.cpp",
    "$CocosRoot/extensions/proj.win32/Win32InputBox.cpp"
)) {
    if (-not (Test-Path $f)) { continue }
    $c = Get-Content $f -Raw -Encoding UTF8
    $orig = $c
    $c = $c -replace 'GWL_USERDATA', 'GWLP_USERDATA'
    $c = $c -replace 'GetWindowLong\(', 'GetWindowLongPtr('
    $c = $c -replace 'SetWindowLong\(', 'SetWindowLongPtr('
    if ($c -ne $orig) {
        Set-Content $f -Value $c -NoNewline -Encoding UTF8
        Write-Host "  PATCHED (GWLP_USERDATA): $f"
    } else {
        Write-Host "  no GWL_USERDATA to patch: $f"
    }
}

# -----------------------------------------------------------------------------
# 7. CCDataReaderHelper.cpp (extensions/CocoStudio/Armature/utils):
#    includes <pthread.h> unconditionally. Guard it the same way as
#    CCTextureCache.cpp.
# -----------------------------------------------------------------------------
$f = "$CocosRoot/extensions/CocoStudio/Armature/utils/CCDataReaderHelper.cpp"
if (Test-Path $f) {
    $c = Get-Content $f -Raw -Encoding UTF8
    # Find the bare `#include <pthread.h>` line and wrap it with a platform guard
    if ($c -match '(?ms)^(\s*#include\s*<pthread\.h>\s*)$' -and $c -notmatch 'CC_PLATFORM_WIN32.*pthread') {
        $c = $c -replace '(?m)^(\s*#include\s*<pthread\.h>\s*)$', '#if (CC_TARGET_PLATFORM != CC_PLATFORM_WIN32)`r`n$1`r`n#else`r`n// v0.7: pthread shim for Win32`r`ntypedef void* pthread_t;`r`ntypedef void* pthread_mutex_t;`r`ntypedef int pthread_cond_t;`r`ntypedef int pthread_attr_t;`r`n#endif'
        # Actually that produced literal `\r\n` - re-read with proper newlines
        $c = $c -replace '\\r\\n', "`r`n"
        Set-Content $f -Value $c -NoNewline -Encoding UTF8
        Write-Host "  PATCHED (pthread guard): $f"
    } else {
        Write-Host "  no bare pthread.h include in: $f"
    }
}

Write-Host "=== patch_cocos2dx_msvc.ps1: done ==="
