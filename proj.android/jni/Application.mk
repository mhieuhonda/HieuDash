# Application.mk for Hieu Dash (Cocos2d-x 2.2.3)
# Updated for modern NDK compatibility.

APP_STL := c++_static
APP_CPPFLAGS := -fexceptions -frtti -DCOCOS2D_DEBUG=1 -std=c++11
APP_ABI := armeabi-v7a arm64-v8a
APP_PLATFORM := android-21

# Updated from original: gnustl_static -> c++_static (gnustl removed in NDK r18+)
# Added armeabi-v7a and arm64-v8a for modern Android compatibility
# Minimum platform raised to android-21 for 64-bit support
