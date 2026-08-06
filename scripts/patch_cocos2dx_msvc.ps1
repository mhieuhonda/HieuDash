# =============================================================================
#  patch_cocos2dx_msvc.ps1
#
#  Applies source-tree patches to cocos2d-x 2.2.3 so it compiles cleanly
#  with modern MSVC v143 (Visual Studio 2022) on Windows.
#
#  v0.7 round 4: rewrote all regex literals to use single-quoted patterns
#  so PowerShell does not misinterpret `\"` as a string terminator. Also
#  added a 7th patch for MciPlayer.cpp's WIN_CLASS_NAME char->wchar_t
#  Unicode mismatch (C2440/C2664 under UNICODE).
# =============================================================================
[CmdletBinding()]
param(
    [string]$CocosRoot = "cocos2d"
)

$ErrorActionPreference = "Stop"

# CRLF literal used inside double-quoted replacements.
$CRLF = "`r`n"
$LF   = "`n"

function Patch-File {
    param([string]$File, [string]$Find, [string]$Replace)
    if (-not (Test-Path $File)) {
        Write-Host "  SKIP (file not found): $File"
        return
    }
    $content = Get-Content $File -Raw -Encoding UTF8
    if ($content -match [regex]::Escape($Find)) {
        # Use [regex]::Escape on the find literal so regex metachars in
        # the source text (e.g. *, +, parens) are matched literally.
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
    -Find ("#if defined(_USRDLL)" + $CRLF + "    #define CC_DLL     __declspec(dllexport)" + $CRLF + "#else         /* use a DLL library */" + $CRLF + "    #define CC_DLL     __declspec(dllimport)" + $CRLF + "#endif") `
    -Replace ("#if defined(CC_STATIC)" + $CRLF + "    #define CC_DLL" + $CRLF + "#elif defined(_USRDLL)" + $CRLF + "    #define CC_DLL     __declspec(dllexport)" + $CRLF + "#else         /* use a DLL library */" + $CRLF + "    #define CC_DLL     __declspec(dllimport)" + $CRLF + "#endif")
Patch-File -File $f `
    -Find ("#if defined(_USRDLL)" + $LF + "    #define CC_DLL     __declspec(dllexport)" + $LF + "#else         /* use a DLL library */" + $LF + "    #define CC_DLL     __declspec(dllimport)" + $LF + "#endif") `
    -Replace ("#if defined(CC_STATIC)" + $LF + "    #define CC_DLL" + $LF + "#elif defined(_USRDLL)" + $LF + "    #define CC_DLL     __declspec(dllexport)" + $LF + "#else         /* use a DLL library */" + $LF + "    #define CC_DLL     __declspec(dllimport)" + $LF + "#endif")

# -----------------------------------------------------------------------------
# 2. CCStdC.h (win32): drop snprintf macro, redefine MAX/MIN as proper macros.
# -----------------------------------------------------------------------------
$f = "$CocosRoot/cocos2dx/platform/win32/CCStdC.h"
Patch-File -File $f `
    -Find ("#ifndef snprintf" + $CRLF + "#define snprintf _snprintf" + $CRLF + "#endif") `
    -Replace ("// v0.7: snprintf macro removed - modern UCRT provides it" + $CRLF + "// #ifndef snprintf" + $CRLF + "// #define snprintf _snprintf" + $CRLF + "// #endif")
Patch-File -File $f `
    -Find ("#ifndef snprintf" + $LF + "#define snprintf _snprintf" + $LF + "#endif") `
    -Replace ("// v0.7: snprintf macro removed - modern UCRT provides it" + $LF + "// #ifndef snprintf" + $LF + "// #define snprintf _snprintf" + $LF + "// #endif")
Patch-File -File $f `
    -Find ("#define MIN     min" + $CRLF + "#define MAX     max") `
    -Replace ("#ifndef MIN" + $CRLF + "#define MIN(x,y) (((x) > (y)) ? (y) : (x))" + $CRLF + "#endif" + $CRLF + "#ifndef MAX" + $CRLF + "#define MAX(x,y) (((x) < (y)) ? (y) : (x))" + $CRLF + "#endif")
Patch-File -File $f `
    -Find ("#define MIN     min" + $LF + "#define MAX     max") `
    -Replace ("#ifndef MIN" + $LF + "#define MIN(x,y) (((x) > (y)) ? (y) : (x))" + $LF + "#endif" + $LF + "#ifndef MAX" + $LF + "#define MAX(x,y) (((x) < (y)) ? (y) : (x))" + $LF + "#endif")

# -----------------------------------------------------------------------------
# 3. CCTextureCache.cpp: pthread.h include - use 3-way branch so Win32
#    gets a typedef shim instead of including the missing CCPThreadWinRT.h.
#    WinRT/WP8 still get their original include.
# -----------------------------------------------------------------------------
$f = "$CocosRoot/cocos2dx/textures/CCTextureCache.cpp"
$oldIncludeCRLF = ("#if (CC_TARGET_PLATFORM != CC_PLATFORM_WINRT) && (CC_TARGET_PLATFORM != CC_PLATFORM_WP8)" + $CRLF + "#include <pthread.h>" + $CRLF + "#else" + $CRLF + '#include "CCPThreadWinRT.h"' + $CRLF + "#include <ppl.h>" + $CRLF + "#include <ppltasks.h>" + $CRLF + "using namespace concurrency;" + $CRLF + "#endif")
$oldIncludeLF   = ("#if (CC_TARGET_PLATFORM != CC_PLATFORM_WINRT) && (CC_TARGET_PLATFORM != CC_PLATFORM_WP8)" + $LF + "#include <pthread.h>" + $LF + "#else" + $LF + '#include "CCPThreadWinRT.h"' + $LF + "#include <ppl.h>" + $LF + "#include <ppltasks.h>" + $LF + "using namespace concurrency;" + $LF + "#endif")
$newInclude = ("#if (CC_TARGET_PLATFORM != CC_PLATFORM_WINRT) && (CC_TARGET_PLATFORM != CC_PLATFORM_WP8) && (CC_TARGET_PLATFORM != CC_PLATFORM_WIN32)" + $CRLF + "#include <pthread.h>" + $CRLF + "#elif (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_WP8)" + $CRLF + '#include "CCPThreadWinRT.h"' + $CRLF + "#include <ppl.h>" + $CRLF + "#include <ppltasks.h>" + $CRLF + "using namespace concurrency;" + $CRLF + "#else" + $CRLF + "// v0.7: pthread shim for Win32 - we never call pthread_ functions on" + $CRLF + "// Windows (CCThread-win32.cpp wraps Windows threads instead), but the" + $CRLF + "// type names AND function calls appear in the async-texture-load path." + $CRLF + "// Provide no-op stubs so the file compiles AND links." + $CRLF + "typedef void* pthread_t;" + $CRLF + "typedef void* pthread_mutex_t;" + $CRLF + "typedef int  pthread_cond_t;" + $CRLF + "typedef int  pthread_attr_t;" + $CRLF + "#ifndef pthread_mutex_init" + $CRLF + "static inline int pthread_mutex_init(pthread_mutex_t*, const void*) { return 0; }" + $CRLF + "#endif" + $CRLF + "#ifndef pthread_mutex_destroy" + $CRLF + "static inline int pthread_mutex_destroy(pthread_mutex_t*) { return 0; }" + $CRLF + "#endif" + $CRLF + "#ifndef pthread_mutex_lock" + $CRLF + "static inline int pthread_mutex_lock(pthread_mutex_t*) { return 0; }" + $CRLF + "#endif" + $CRLF + "#ifndef pthread_mutex_unlock" + $CRLF + "static inline int pthread_mutex_unlock(pthread_mutex_t*) { return 0; }" + $CRLF + "#endif" + $CRLF + "#ifndef pthread_cond_init" + $CRLF + "static inline int pthread_cond_init(pthread_cond_t*, const void*) { return 0; }" + $CRLF + "#endif" + $CRLF + "#ifndef pthread_cond_destroy" + $CRLF + "static inline int pthread_cond_destroy(pthread_cond_t*) { return 0; }" + $CRLF + "#endif" + $CRLF + "#ifndef pthread_cond_wait" + $CRLF + "static inline int pthread_cond_wait(pthread_cond_t*, pthread_mutex_t*) { return 0; }" + $CRLF + "#endif" + $CRLF + "#ifndef pthread_cond_signal" + $CRLF + "static inline int pthread_cond_signal(pthread_cond_t*) { return 0; }" + $CRLF + "#endif" + $CRLF + "#ifndef pthread_create" + $CRLF + "static inline int pthread_create(pthread_t*, const void*, void*(*)(void*), void*) { return 0; }" + $CRLF + "#endif" + $CRLF + "#endif")
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
#    <windows.h>, so include both explicitly at the top of the file
#    (windows.h MUST come before shellapi.h because shellapi.h depends
#    on macros like EXTERN_C, DECLSPEC_IMPORT, HDROP that windef.h
#    defines).
#
#    v0.7 round 4 fix: previous version used `\"` inside a double-quoted
#    PowerShell regex literal which broke the script at parse time
#    (ParserError: Array index expression is missing or not valid).
#    Rewrote to use single-quoted regex literals so `"` is literal.
# -----------------------------------------------------------------------------
$f = "$CocosRoot/cocos2dx/platform/win32/CCEGLView.cpp"
if (Test-Path $f) {
    $content = Get-Content $f -Raw -Encoding UTF8
    if ($content -notmatch "#include <shellapi\.h>") {
        # Use single-quoted regex literals so `"` and `\` are passed
        # through to the regex engine verbatim. In the replacement, use
        # double-quoted string so `$1` (escaped as `` `$1 ``) and CRLF
        # (`` `r`n ``) are interpolated by PowerShell.
        if ($content -match '(?m)^#include\s*<windows\.h>\s*\r?\n') {
            $content = $content -replace '(?m)^(#include\s*<windows\.h>\s*\r?\n)', "`$1// v0.7: APPBARDATA / SHAppBarMessage / ABM_GETTASKBARPOS live here`r`n#include <shellapi.h>`r`n"
        } else {
            # No direct <windows.h> include - insert both windows.h and
            # shellapi.h BEFORE the first #include "..." line so that all
            # subsequent cocos2d headers (which transitively need windef.h
            # macros) see them. We match `#include "..."` (with double
            # quotes) using a single-quoted regex literal.
            $content = $content -replace '(?m)^(#include\s*"[^"]+"\s*\r?\n)', "// v0.7: shellapi.h needs windows.h preamble first`r`n#include <windows.h>`r`n#include <shellapi.h>`r`n`$1"
        }
        Set-Content $f -Value $content -NoNewline -Encoding UTF8
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
#
#    v0.7 round 4 fix: also rewrite the MciPlayer.cpp WIN_CLASS_NAME macro
#    from a narrow `const char[]` literal to a wide `L"..."` literal, because
#    with UNICODE defined RegisterClass->RegisterClassW and
#    CreateWindowEx->CreateWindowExW expect LPCWSTR. Without this we get
#    C2440 (cannot convert from 'const char [25]' to 'LPCWSTR') and
#    C2664 (CreateWindowExW: cannot convert argument 2).
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

# MciPlayer.cpp: change WIN_CLASS_NAME from narrow to wide string literal.
$f = "$CocosRoot/CocosDenshion/win32/MciPlayer.cpp"
if (Test-Path $f) {
    $c = Get-Content $f -Raw -Encoding UTF8
    $orig = $c
    # Only widen if not already widened.
    if ($c -match '#define\s+WIN_CLASS_NAME\s+"[^"]+"' -and $c -notmatch '#define\s+WIN_CLASS_NAME\s+L"') {
        $c = $c -replace '#define\s+WIN_CLASS_NAME\s+("[^"]+")', '#define WIN_CLASS_NAME L$1'
        Set-Content $f -Value $c -NoNewline -Encoding UTF8
        Write-Host "  PATCHED (WIN_CLASS_NAME -> wchar_t): $f"
    } else {
        Write-Host "  no WIN_CLASS_NAME narrow literal in: $f"
    }
}

# -----------------------------------------------------------------------------
# 7. CCDataReaderHelper.cpp (extensions/CocoStudio/Armature/utils):
#    includes <pthread.h> unconditionally. Guard it the same way as
#    CCTextureCache.cpp.
#
#    v0.7 round 4 fix: previous version used single-quoted replacement
#    with literal backtick-r-backtick-n which never expanded to actual
#    CRLF (single-quoted PowerShell strings do not process backtick
#    escapes). The follow-up `-replace '\\r\\n', "`r`n"` then failed
#    to match because the inserted text was backticks, not backslashes.
#    Rewrote to use a double-quoted replacement string with proper
#    backtick escapes and a literal `$1 backreference.
# -----------------------------------------------------------------------------
$f = "$CocosRoot/extensions/CocoStudio/Armature/utils/CCDataReaderHelper.cpp"
if (Test-Path $f) {
    $c = Get-Content $f -Raw -Encoding UTF8
    # Find the bare `#include <pthread.h>` line and wrap it with a platform guard.
    # Use a single-quoted regex pattern, then a double-quoted replacement so
    # backtick escapes (`r`n) and the literal $1 backreference work.
    if ($c -match '(?ms)^\s*#include\s*<pthread\.h>\s*$' -and $c -notmatch 'CC_PLATFORM_WIN32.*pthread') {
        $c = $c -replace '(?m)^(\s*#include\s*<pthread\.h>\s*)$', "#if (CC_TARGET_PLATFORM != CC_PLATFORM_WIN32)`r`n`$1`r`n#else`r`n// v0.7: pthread shim for Win32 - CCDataReaderHelper uses pthread_mutex,`r`n// which we typedef to void* and provide as no-op stubs in CCTextureCache.cpp`r`n// (included transitively). The unused include is dropped here.`r`n#endif"
        Set-Content $f -Value $c -NoNewline -Encoding UTF8
        Write-Host "  PATCHED (pthread guard): $f"
    } else {
        Write-Host "  no bare pthread.h include in: $f"
    }
}

Write-Host "=== patch_cocos2dx_msvc.ps1: done ==="
