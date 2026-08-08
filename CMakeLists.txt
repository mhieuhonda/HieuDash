# =============================================================================
# GeometryDash — CMake build system
# Decompiled from APK · Cocos2d-x 2.2.3 · C++11
# =============================================================================

cmake_minimum_required(VERSION 3.10)

project(GeometryDash LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ---------------------------------------------------------------------------
# Configuration options
# ---------------------------------------------------------------------------
option(USE_FMOD      "Link FMOD audio library"         ON)
option(USE_CURL      "Link libcurl for HTTP requests"  ON)
option(USE_OPENSSL   "Link OpenSSL for crypto"         ON)
option(BUILD_EDITOR  "Build the built-in level editor" OFF)

# ---------------------------------------------------------------------------
# Cocos2d-x 2.2.3  (expected at ${COCOS2DX_ROOT})
# ---------------------------------------------------------------------------
if(NOT COCOS2DX_ROOT)
    if(DEFINED ENV{COCOS2DX_ROOT})
        set(COCOS2DX_ROOT $ENV{COCOS2DX_ROOT})
    else()
        set(COCOS2DX_ROOT "${CMAKE_SOURCE_DIR}/cocos2d")
    endif()
endif()

if(NOT EXISTS "${COCOS2DX_ROOT}/cocos2dx")
    message(WARNING "Cocos2d-x not found at ${COCOS2DX_ROOT} — "
                    "set COCOS2DX_ROOT or place cocos2d/ alongside this project.")
endif()

# ---------------------------------------------------------------------------
# Collect game sources
# ---------------------------------------------------------------------------
file(GLOB_RECURSE GAME_SOURCES
    "${CMAKE_SOURCE_DIR}/Classes/*.cpp"
)

file(GLOB_RECURSE GAME_HEADERS
    "${CMAKE_SOURCE_DIR}/Classes/*.h"
)

# Exclude platform-specific files that don't belong to the current build
if(NOT ANDROID)
    list(FILTER GAME_SOURCES EXCLUDE REGEX ".*android.*")
endif()
if(NOT IOS)
    list(FILTER GAME_SOURCES EXCLUDE REGEX ".*ios.*")
endif()
if(NOT WIN32)
    list(FILTER GAME_SOURCES EXCLUDE REGEX ".*win32.*")
endif()
if(NOT UNIX OR APPLE)
    list(FILTER GAME_SOURCES EXCLUDE REGEX ".*linux.*")
endif()

# ---------------------------------------------------------------------------
# Main executable / shared library
# ---------------------------------------------------------------------------
if(ANDROID)
    add_library(GeometryDash SHARED ${GAME_SOURCES})
else()
    add_executable(GeometryDash ${GAME_SOURCES})
endif()

target_include_directories(GeometryDash PRIVATE
    ${CMAKE_SOURCE_DIR}/Classes
    ${COCOS2DX_ROOT}
    ${COCOS2DX_ROOT}/cocos2dx/include
    ${COCOS2DX_ROOT}/cocos2dx/platform
    ${COCOS2DX_ROOT}/cocos2dx/kazmath/include
    ${COCOS2DX_ROOT}/extensions
    ${COCOS2DX_ROOT}/CocosDenshion/include
)

# ---------------------------------------------------------------------------
# Platform-specific include dirs
# ---------------------------------------------------------------------------
if(WIN32)
    target_include_directories(GeometryDash PRIVATE
        ${COCOS2DX_ROOT}/cocos2dx/platform/win32
        ${COCOS2DX_ROOT}/cocos2dx/platform/third_party/win32
    )
elseif(APPLE AND NOT IOS)
    target_include_directories(GeometryDash PRIVATE
        ${COCOS2DX_ROOT}/cocos2dx/platform/mac
    )
elseif(IOS)
    target_include_directories(GeometryDash PRIVATE
        ${COCOS2DX_ROOT}/cocos2dx/platform/ios
    )
elseif(ANDROID)
    target_include_directories(GeometryDash PRIVATE
        ${COCOS2DX_ROOT}/cocos2dx/platform/android
        ${COCOS2DX_ROOT}/cocos2dx/platform/third_party/android
    )
elseif(UNIX)
    target_include_directories(GeometryDash PRIVATE
        ${COCOS2DX_ROOT}/cocos2dx/platform/linux
    )
endif()

# ---------------------------------------------------------------------------
# Cocos2d-x libraries
# ---------------------------------------------------------------------------
set(COCOS2DX_LIBS
    cocos2dx
    CocosDenshion
    cocos_extension
    kazmath
)

if(WIN32)
    list(APPEND COCOS2DX_LIBS opengl32 glu32 winmm ws2_32 user32 gdi32)
elseif(APPLE AND NOT IOS)
    find_library(COCOA_FRAMEWORK Cocoa)
    find_library(OPENGL_FRAMEWORK OpenGL)
    find_library(APPKIT_FRAMEWORK AppKit)
    find_library(IOKIT_FRAMEWORK IOKit)
    find_library(CARBON_FRAMEWORK Carbon)
    list(APPEND COCOS2DX_LIBS
        ${COCOA_FRAMEWORK}
        ${OPENGL_FRAMEWORK}
        ${APPKIT_FRAMEWORK}
        ${IOKIT_FRAMEWORK}
        ${CARBON_FRAMEWORK}
    )
elseif(IOS)
    find_library(OPENGLES_FRAMEWORK OpenGLES)
    find_library(QUARTZCORE_FRAMEWORK QuartzCore)
    find_library(UIKIT_FRAMEWORK UIKit)
    find_library(FOUNDATION_FRAMEWORK Foundation)
    list(APPEND COCOS2DX_LIBS
        ${OPENGLES_FRAMEWORK}
        ${QUARTZCORE_FRAMEWORK}
        ${UIKIT_FRAMEWORK}
        ${FOUNDATION_FRAMEWORK}
    )
elseif(ANDROID)
    list(APPEND COCOS2DX_LIBS log GLESv1_CM EGL z m dl)
elseif(UNIX)
    list(APPEND COCOS2DX_LIBS GL GLU X11 pthread m dl)
endif()

# ---------------------------------------------------------------------------
# Third-party libraries
# ---------------------------------------------------------------------------

# --- FMOD ---
if(USE_FMOD)
    set(FMOD_ROOT "${CMAKE_SOURCE_DIR}/thirdparty/fmod" CACHE PATH "FMOD SDK root")
    if(EXISTS "${FMOD_ROOT}/include")
        target_include_directories(GeometryDash PRIVATE ${FMOD_ROOT}/include)
        if(WIN32)
            target_link_libraries(GeometryDash PRIVATE ${FMOD_ROOT}/lib/fmodex_vc.lib)
        elseif(ANDROID)
            target_link_libraries(GeometryDash PRIVATE ${FMOD_ROOT}/lib/android/arm64-v8a/libfmodex.so)
        elseif(UNIX AND NOT APPLE)
            target_link_libraries(GeometryDash PRIVATE ${FMOD_ROOT}/lib/linux64/libfmodex.so)
        elseif(APPLE)
            target_link_libraries(GeometryDash PRIVATE ${FMOD_ROOT}/lib/mac/libfmodex.dylib)
        endif()
    else()
        target_link_libraries(GeometryDash PRIVATE fmodex)
    endif()
    target_compile_definitions(GeometryDash PRIVATE USE_FMOD=1)
endif()

# --- OpenSSL ---
if(USE_OPENSSL)
    find_package(OpenSSL QUIET)
    if(OpenSSL_FOUND)
        target_link_libraries(GeometryDash PRIVATE OpenSSL::SSL OpenSSL::Crypto)
    else()
        set(OPENSSL_ROOT "${CMAKE_SOURCE_DIR}/thirdparty/openssl" CACHE PATH "OpenSSL root")
        target_include_directories(GeometryDash PRIVATE ${OPENSSL_ROOT}/include)
        target_link_libraries(GeometryDash PRIVATE ssl crypto)
    endif()
    target_compile_definitions(GeometryDash PRIVATE USE_OPENSSL=1)
endif()

# --- libcurl ---
if(USE_CURL)
    find_package(CURL QUIET)
    if(CURL_FOUND)
        target_include_directories(GeometryDash PRIVATE ${CURL_INCLUDE_DIRS})
        target_link_libraries(GeometryDash PRIVATE ${CURL_LIBRARIES})
    else()
        set(CURL_ROOT "${CMAKE_SOURCE_DIR}/thirdparty/curl" CACHE PATH "libcurl root")
        target_include_directories(GeometryDash PRIVATE ${CURL_ROOT}/include)
        target_link_libraries(GeometryDash PRIVATE curl)
    endif()
    target_compile_definitions(GeometryDash PRIVATE USE_CURL=1)
endif()

# ---------------------------------------------------------------------------
# Link everything together
# ---------------------------------------------------------------------------
target_link_libraries(GeometryDash PRIVATE ${COCOS2DX_LIBS})

# ---------------------------------------------------------------------------
# Compiler definitions
# ---------------------------------------------------------------------------
target_compile_definitions(GeometryDash PRIVATE
    COCOS2DX_VERSION=0x00020300
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
)

if(BUILD_EDITOR)
    target_compile_definitions(GeometryDash PRIVATE GD_EDITOR=1)
endif()

# ---------------------------------------------------------------------------
# Copy Resources on build completion
# ---------------------------------------------------------------------------
add_custom_command(TARGET GeometryDash POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "${CMAKE_SOURCE_DIR}/Resources"
        "$<TARGET_FILE_DIR:GeometryDash>/Resources"
    COMMENT "Copying game resources to output directory"
)

# ---------------------------------------------------------------------------
# Install rules
# ---------------------------------------------------------------------------
install(TARGETS GeometryDash
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
)

install(DIRECTORY "${CMAKE_SOURCE_DIR}/Resources/"
    DESTINATION share/GeometryDash/Resources
)

# ---------------------------------------------------------------------------
# Android-specific settings (used by gradle / ndk-build)
# ---------------------------------------------------------------------------
if(ANDROID)
    set(ANDROID_PACKAGE_NAME "com.robtopx.geometryjump")
    set(ANDROID_ABI "arm64-v8a" CACHE STRING "Target Android ABI")
    set_property(TARGET GeometryDash PROPERTY ANDROID_ABI ${ANDROID_ABI})
endif()
