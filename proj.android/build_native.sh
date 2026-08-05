#!/bin/bash
# build_native.sh - Compile the C++ side of the project with the Android NDK.
# Reconstructed to match the cocos2d-x 2.2.3 convention.

# Set these to point to your local installations:
NDK_ROOT=${NDK_ROOT:-$HOME/android-ndk-r9d}
ANDROID_SDK_ROOT=${ANDROID_SDK_ROOT:-$HOME/android-sdk}
COCOS2DX_ROOT=${COCOS2DX_ROOT:-$(cd "$(dirname "$0")/../cocos2d" && pwd)}

set -e

if [ ! -d "$COCOS2DX_ROOT" ]; then
    echo "ERROR: cocos2d-x 2.2.3 not found at $COCOS2DX_ROOT"
    echo "Download from: https://github.com/niclas/cocos2d-x/archive/refs/tags/cocos2d-x-2.2.3.zip"
    echo "and extract the inner 'cocos2d-x-2.2.3' folder to ./cocos2d at the project root."
    exit 1
fi

if [ ! -d "$NDK_ROOT" ]; then
    echo "ERROR: Android NDK not found at $NDK_ROOT"
    exit 1
fi

echo "==> Running NDK build..."
NDK_MODULE_PATH="$COCOS2DX_ROOT:$COCOS2DX_ROOT/cocos2dx/platform/third_party/android/source" \
    "$NDK_ROOT/ndk-build" -C "$(dirname "$0")" "$@"

echo "==> Done."
