# =============================================================================
#  Hieu Dash v0.6 - Top-level CMake build for Linux and Windows.
#
#  Compiles the cocos2d-x 2.2.3 engine sources directly into the HieuDash
#  executable along with the project's own Classes/*.cpp. This avoids the
#  REMOVED-binary-blob problem in the GitHub source archive of cocos2d-x
#  2.2.3 (all prebuilt .a/.lib files were stripped).
#
#  Platform support:
#    - Linux  -> gcc/g++, system libraries via apt
#    - Windows -> MSVC v143, libraries via vcpkg
#    (Android uses its own Android.mk + Ant build via proj.android/.)
#    (iOS uses xcodegen + xcodebuild via proj.ios_mac/.)
# =============================================================================
cmake_minimum_required(VERSION 3.16)

project(HieuDash CXX C)

set(COCOS2DX_ROOT "${CMAKE_SOURCE_DIR}/cocos2d" CACHE PATH "cocos2d-x 2.2.3 root")

if(NOT EXISTS "${COCOS2DX_ROOT}/cocos2dx")
    message(FATAL_ERROR
        "cocos2d-x 2.2.3 not found at '${COCOS2DX_ROOT}/cocos2dx'. "
        "Download https://github.com/cocos2d/cocos2d-x/archive/refs/tags/cocos2d-x-2.2.3.zip "
        "and extract the inner 'cocos2d-x-cocos2d-x-2.2.3' folder to ./cocos2d "
        "at the project root before configuring.")
endif()

# ---- Global compiler settings ----------------------------------------------
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED OFF)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
    # cocos2d-x 2.2.3 was written for VS2010 (MSVC 16.0). Modern MSVC (v143)
    # removed many legacy features. Restore them via compat defines.
    add_compile_options(
        /W0               # suppress warnings (the code is very noisy)
        /permissive-      # standard-conforming mode OFF (use /permissive to relax)
        /bigobj
        /utf-8
        /EHsc             # exceptions
        /GR               # RTTI
    )
    add_compile_definitions(
        _HAS_AUTO_PTR_ETC=1                  # keep std::auto_ptr
        _HAS_FUNCTION_ALLOCATOR_SUPPORT=1    # keep allocator<T>::template rebind
        _HAS_TR1_NAMESPACE=1                 # keep std::tr1
        _SILENCE_CXX17_ITERATOR_BASE_CLASS_DEPRECATION_WARNING
        _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
        _CRT_SECURE_NO_WARNINGS
        _CRT_NONSTDC_NO_WARNINGS
        _WINSOCK_DEPRECATED_NO_WARNINGS
        NOMINMAX
        WIN32_LEAN_AND_MEAN
        COCOS2DX_VERSION_MAJOR=2
        COCOS2DX_VERSION_MINOR=2
        COCOS2DX_VERSION_PATCH=3
        CC_TARGET_PLATFORM=CC_PLATFORM_WIN32
        CC_DLL
    )
else()
    add_compile_options(
        -fpermissive
        -Wno-error
        -Wno-deprecated-declarations
        -Wno-narrowing
        -Wno-delete-incomplete
        -Wno-unused-but-set-variable
        -Wno-unused-variable
        -Wno-unused-function
        -Wno-unused-parameter
        -Wno-sign-compare
        -Wno-switch
        -Wno-multichar
        -Wno-format
        -fexceptions
        -frtti
        -fPIC
    )
    add_compile_definitions(
        COCOS2DX_VERSION_MAJOR=2
        COCOS2DX_VERSION_MINOR=2
        COCOS2DX_VERSION_PATCH=3
        CC_TARGET_PLATFORM=CC_PLATFORM_LINUX
        LINUX
        _GNU_SOURCE
    )
endif()

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_definitions(COCOS2D_DEBUG=1 _DEBUG)
else()
    add_compile_definitions(NDEBUG COCOS2D_DEBUG=0)
endif()

# ---- Collect cocos2dx engine sources ----------------------------------------
# All non-platform-specific .cpp / .c files under cocos2dx/
file(GLOB COCOS2DX_CORE_SOURCES
    "${COCOS2DX_ROOT}/cocos2dx/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/actions/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/base_nodes/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/cocoa/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/draw_nodes/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/effects/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/keypad_dispatcher/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/label_nodes/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/layers_scenes_transitions_nodes/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/menu_nodes/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/misc_nodes/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/particle_nodes/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/shaders/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/sprite_nodes/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/support/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/support/component/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/support/data_support/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/support/image_support/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/support/zip_support/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/support/tinyxml2/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/support/user_default/CCUserDefault.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/text_input_node/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/textures/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/tilemap_parallax_nodes/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/touch_dispatcher/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/script_support/*.cpp"
    "${COCOS2DX_ROOT}/cocos2dx/ccFPSImages.c"
)
# kazmath (math library)
file(GLOB KAZMATH_SOURCES
    "${COCOS2DX_ROOT}/cocos2dx/kazmath/src/*.c"
    "${COCOS2DX_ROOT}/cocos2dx/kazmath/src/GL/*.c"
)

# ---- Platform-specific cocos2dx sources -------------------------------------
if(LINUX)
    file(GLOB COCOS2DX_PLATFORM_SOURCES
        "${COCOS2DX_ROOT}/cocos2dx/platform/linux/*.cpp"
    )
    file(GLOB COCOS2DX_PLATFORM_C_SOURCES
        "${COCOS2DX_ROOT}/cocos2dx/platform/linux/*.c"
    )
elseif(WIN32)
    file(GLOB COCOS2DX_PLATFORM_SOURCES
        "${COCOS2DX_ROOT}/cocos2dx/platform/win32/*.cpp"
    )
    file(GLOB COCOS2DX_PLATFORM_C_SOURCES
        "${COCOS2DX_ROOT}/cocos2dx/platform/win32/*.c"
    )
endif()

# ---- CocosDenshion audio ----------------------------------------------------
# The shared shim has no .cpp at the root; each platform ships its own
# SimpleAudioEngine implementation under <platform>/.
set(COCOS_DENSHION_SOURCES "")
if(LINUX)
    list(APPEND COCOS_DENSHION_SOURCES
        "${COCOS2DX_ROOT}/CocosDenshion/linux/SimpleAudioEngineOpenAL.cpp"
    )
elseif(WIN32)
    file(GLOB COCOS_DENSHION_WIN32_SOURCES
        "${COCOS2DX_ROOT}/CocosDenshion/win32/*.cpp"
    )
    list(APPEND COCOS_DENSHION_SOURCES ${COCOS_DENSHION_WIN32_SOURCES})
endif()

# ---- Extensions -------------------------------------------------------------
file(GLOB_RECURSE EXTENSIONS_SOURCES
    "${COCOS2DX_ROOT}/extensions/AssetsManager/*.cpp"
    "${COCOS2DX_ROOT}/extensions/CCBReader/*.cpp"
    "${COCOS2DX_ROOT}/extensions/CocoStudio/*.cpp"
    "${COCOS2DX_ROOT}/extensions/GUI/CCControlExtension/*.cpp"
    "${COCOS2DX_ROOT}/extensions/GUI/CCEditBox/*.cpp"
    "${COCOS2DX_ROOT}/extensions/GUI/CCScrollView/*.cpp"
    "${COCOS2DX_ROOT}/extensions/LocalStorage/*.cpp"
    "${COCOS2DX_ROOT}/extensions/network/*.cpp"
    "${COCOS2DX_ROOT}/extensions/physics_nodes/*.cpp"
    "${COCOS2DX_ROOT}/extensions/spine/*.cpp"
)
# Filter out platform-specific CCEditBox implementations that don't
# belong on the current platform. They use platform-only APIs (Windows::Platform::String
# for WP8, Objective-C for iOS, Java JNI for Android) and would fail to compile.
set(_EXT_EXCLUDE_PATTERNS "")
if(LINUX)
    list(APPEND _EXT_EXCLUDE_PATTERNS
        "CCEditBoxImplWp8.cpp"      "CCEditBoxImplWin.cpp"
        "CCEditBoxImplAndroid.cpp"  "CCEditBoxImplTizen.cpp"
        "CCEditBoxImplIOS.mm"
    )
elseif(WIN32)
    list(APPEND _EXT_EXCLUDE_PATTERNS
        "CCEditBoxImplWp8.cpp"      "CCEditBoxImplAndroid.cpp"
        "CCEditBoxImplTizen.cpp"    "CCEditBoxImplIOS.mm"
    )
endif()
if(_EXT_EXCLUDE_PATTERNS)
    foreach(pattern ${_EXT_EXCLUDE_PATTERNS})
        list(FILTER EXTENSIONS_SOURCES EXCLUDE REGEX "${pattern}")
    endforeach()
endif()
if(WIN32)
    file(GLOB EXTENSIONS_WIN32_SOURCES
        "${COCOS2DX_ROOT}/extensions/proj.win32/*.cpp"
    )
    list(APPEND EXTENSIONS_SOURCES ${EXTENSIONS_WIN32_SOURCES})
endif()

# ---- Hieu Dash Classes ------------------------------------------------------
file(GLOB CLASSES_SOURCES "${CMAKE_SOURCE_DIR}/Classes/*.cpp")

# ---- Platform main entry point ----------------------------------------------
if(LINUX)
    set(MAIN_SOURCE "${CMAKE_SOURCE_DIR}/proj.linux/main.cpp")
elseif(WIN32)
    set(MAIN_SOURCE "${CMAKE_SOURCE_DIR}/proj.win32/main.cpp")
endif()

# ---- Define the executable --------------------------------------------------
add_executable(HieuDash
    ${COCOS2DX_CORE_SOURCES}
    ${KAZMATH_SOURCES}
    ${COCOS2DX_PLATFORM_SOURCES}
    ${COCOS2DX_PLATFORM_C_SOURCES}
    ${COCOS_DENSHION_SOURCES}
    ${EXTENSIONS_SOURCES}
    ${CLASSES_SOURCES}
    ${MAIN_SOURCE}
)

# ---- Include paths ----------------------------------------------------------
target_include_directories(HieuDash PRIVATE
    "${COCOS2DX_ROOT}"
    "${COCOS2DX_ROOT}/cocos2dx"
    "${COCOS2DX_ROOT}/cocos2dx/include"
    "${COCOS2DX_ROOT}/cocos2dx/kazmath/include"
    "${COCOS2DX_ROOT}/cocos2dx/platform"
    "${COCOS2DX_ROOT}/CocosDenshion/include"
    "${COCOS2DX_ROOT}/extensions"
    "${COCOS2DX_ROOT}/extensions/CCBReader"
    "${COCOS2DX_ROOT}/extensions/GUI/CCControlExtension"
    "${COCOS2DX_ROOT}/extensions/GUI/CCScrollView"
    "${COCOS2DX_ROOT}/extensions/GUI/CCEditBox"
    "${COCOS2DX_ROOT}/extensions/network"
    "${COCOS2DX_ROOT}/extensions/physics_nodes"
    "${COCOS2DX_ROOT}/extensions/spine"
    "${CMAKE_SOURCE_DIR}/Classes"
)

if(LINUX)
    target_include_directories(HieuDash PRIVATE
        "${COCOS2DX_ROOT}/cocos2dx/platform/linux"
        # NOTE: do NOT add cocos2dx/platform/third_party/linux/libfreetype2
        # here. That bundled freetype header set uses the deprecated
        # FT_STATIC_BYTE_CAST macro which the modern system freetype2
        # (libfreetype-dev) does not define -> compile error. Use only
        # the system freetype2 headers via pkg-config (added below).
        "${COCOS2DX_ROOT}/cocos2dx/platform/third_party/linux/libpng"
        "${COCOS2DX_ROOT}/cocos2dx/platform/third_party/linux/libjpeg"
        "${COCOS2DX_ROOT}/cocos2dx/platform/third_party/linux/libtiff/include"
        "${COCOS2DX_ROOT}/cocos2dx/platform/third_party/linux/libwebp"
        "${COCOS2DX_ROOT}/cocos2dx/platform/third_party/linux/include64"
    )
elseif(WIN32)
    target_include_directories(HieuDash PRIVATE
        "${COCOS2DX_ROOT}/cocos2dx/platform/win32"
        "${COCOS2DX_ROOT}/cocos2dx/platform/third_party/win32/OGLES"
        "${COCOS2DX_ROOT}/cocos2dx/platform/third_party/win32/libpng"
        "${COCOS2DX_ROOT}/cocos2dx/platform/third_party/win32/libjpeg"
        "${COCOS2DX_ROOT}/cocos2dx/platform/third_party/win32/libtiff"
        "${COCOS2DX_ROOT}/cocos2dx/platform/third_party/win32/libwebp"
        "${COCOS2DX_ROOT}/cocos2dx/platform/third_party/win32/zlib"
        "${COCOS2DX_ROOT}/cocos2dx/platform/third_party/win32/curl"
        "${COCOS2DX_ROOT}/cocos2dx/platform/third_party/win32/iconv"
    )
endif()

# ---- Link libraries ---------------------------------------------------------
if(LINUX)
    find_package(PkgConfig REQUIRED)
    # alut may not ship a .pc file on all distros; we look it up via
    # find_library as a fallback.
    # NOTE: glfw3 is NOT in this list because cocos2d-x 2.2.3 uses the
    # GLFW 2.x API (glfwOpenWindow, etc.). We build GLFW 2.7.9 from
    # source and install to /usr/local, so we just need /usr/local/include
    # and /usr/local/lib in the search path (CMake finds them by default).
    pkg_check_modules(COCOS_DEPS REQUIRED
        freetype2
        libpng
        libjpeg
        libtiff-4
        libwebp
        glew
        fontconfig
        openal
        vorbis
        vorbisfile
        ogg
        x11
        gl
    )
    # Optional ALut (FreeALUT) - pkg-config first, then find_library.
    pkg_check_modules(ALUT QUIET alut)
    if(NOT ALUT_FOUND)
        find_path(ALUT_INCLUDE_DIR AL/alut.h)
        find_library(ALUT_LIBRARY NAMES alut freealut)
        if(ALUT_INCLUDE_DIR AND ALUT_LIBRARY)
            set(ALUT_INCLUDE_DIRS ${ALUT_INCLUDE_DIR})
            set(ALUT_LIBRARIES ${ALUT_LIBRARY})
        else()
            message(WARNING
              "ALut not found - audio playback on Linux will be limited. "
              "Install libalut-dev (Debian/Ubuntu) or freealut-dev.")
        endif()
    endif()

    target_include_directories(HieuDash PRIVATE
        ${COCOS_DEPS_INCLUDE_DIRS}
        ${ALUT_INCLUDE_DIRS}
        /usr/local/include
    )
    target_link_libraries(HieuDash PRIVATE
        ${COCOS_DEPS_LIBRARIES}
        ${ALUT_LIBRARIES}
        glfw
        pthread
        dl
        rt
        z
        curl
    )
    target_link_directories(HieuDash PRIVATE
        ${COCOS_DEPS_LIBRARY_DIRS}
        ${ALUT_LIBRARY_DIRS}
        /usr/local/lib
    )
elseif(WIN32)
    # On Windows we expect vcpkg to provide these. The CI workflow sets
    # CMAKE_TOOLCHAIN_FILE to the vcpkg.cmake so find_package() works.
    # CocosDenshion on Win32 uses MCI (winmm), NOT OpenAL, so we don't
    # need an OpenAL package.
    find_package(ZLIB REQUIRED)
    find_package(PNG REQUIRED)
    find_package(JPEG REQUIRED)
    find_package(TIFF REQUIRED)
    find_package(GLEW REQUIRED)
    # WebP's vcpkg config name varies; fall back to plain -lwebp if missing.
    find_package(WebP QUIET)

    target_link_libraries(HieuDash PRIVATE
        ZLIB::ZLIB
        PNG::PNG
        ${JPEG_LIBRARIES}
        TIFF::TIFF
        GLEW::GLEW
        opengl32
        gdi32
        user32
        advapi32
        winmm
        ws2_32
        wininet
        imm32
        ole32
        oleaut32
        shell32
        shlwapi
    )
    if(WebP_FOUND)
        target_link_libraries(HieuDash PRIVATE WebP::WebP)
    else()
        target_link_libraries(HieuDash PRIVATE webp)
    endif()
endif()

# ---- Output binary + resources ----------------------------------------------
set_target_properties(HieuDash PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

# Copy Resources next to the executable so the game can find them at runtime.
add_custom_command(TARGET HieuDash POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "${CMAKE_SOURCE_DIR}/Resources"
        "$<TARGET_FILE_DIR:HieuDash>/Resources"
)

message(STATUS "HieuDash build configured for ${CMAKE_SYSTEM_NAME}")
message(STATUS "cocos2d-x root: ${COCOS2DX_ROOT}")
message(STATUS "Engine sources:   ${COCOS2DX_CORE_SOURCES}")
message(STATUS "Classes sources:  ${CLASSES_SOURCES}")
