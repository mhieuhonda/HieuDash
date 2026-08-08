#!/usr/bin/env bash
# ===========================================================================
# build_android.sh — Build GeometryDash Android APK
# Uses CMake (for native C++) + Gradle (for Java/DEX/APK packaging).
# ===========================================================================

set -euo pipefail

# ---- Configuration --------------------------------------------------------
PROJECT_ROOT="$(cd "$(dirname "$0")/.." && pwd)"
BUILD_DIR="${PROJECT_ROOT}/proj.android/app/.externalNativeBuild/cmake"
GRADLE_DIR="${PROJECT_ROOT}/proj.android"
NDK_BUILD_DIR="${PROJECT_ROOT}/proj.android/app/src/main/jniLibs"

ANDROID_ABI="${ANDROID_ABI:-arm64-v8a}"
ANDROID_API_MIN="${ANDROID_API_MIN:-21}"
ANDROID_API_TARGET="${ANDROID_API_TARGET:-28}"
BUILD_TYPE="${BUILD_TYPE:-Release}"

# ---- Colors ---------------------------------------------------------------
RED='\033[0;31m'
GRN='\033[0;32m'
YLW='\033[0;33m'
CYN='\033[0;36m'
RST='\033[0m'

info()  { echo -e "${CYN}[INFO]${RST}  $*"; }
warn()  { echo -e "${YLW}[WARN]${RST}  $*"; }
ok()    { echo -e "${GRN}[ OK ]${RST}  $*"; }
fail()  { echo -e "${RED}[FAIL]${RST}  $*"; exit 1; }

# ---- Pre-flight checks ----------------------------------------------------
info "GeometryDash Android build starting..."
info "Project root : ${PROJECT_ROOT}"
info "ABI          : ${ANDROID_ABI}"
info "Build type   : ${BUILD_TYPE}"

command -v cmake  >/dev/null 2>&1 || fail "cmake not found — install it and try again."
command -v gradle >/dev/null 2>&1 || fail "gradle not found — install it or set GRADLE_HOME."

if [ -z "${ANDROID_NDK_HOME:-}" ]; then
    if [ -d "${ANDROID_HOME}/ndk-bundle" ]; then
        export ANDROID_NDK_HOME="${ANDROID_HOME}/ndk-bundle"
    else
        fail "ANDROID_NDK_HOME not set and no ndk-bundle found under ANDROID_HOME."
    fi
fi

info "NDK          : ${ANDROID_NDK_HOME}"

# ---- Step 1: CMake configure & build (native C++) -------------------------
info "Step 1/3 — CMake configure"

mkdir -p "${BUILD_DIR}/${ANDROID_ABI}"

cmake -S "${PROJECT_ROOT}" \
      -B "${BUILD_DIR}/${ANDROID_ABI}" \
      -DCMAKE_TOOLCHAIN_FILE="${ANDROID_NDK_HOME}/build/cmake/android.toolchain.cmake" \
      -DANDROID_ABI="${ANDROID_ABI}" \
      -DANDROID_PLATFORM=android-${ANDROID_API_MIN} \
      -DCMAKE_BUILD_TYPE="${BUILD_TYPE}" \
      -DCOCOS2DX_ROOT="${PROJECT_ROOT}/cocos2d" \
      -DANDROID=1

ok "CMake configured"

info "Step 2/3 — CMake build (${ANDROID_ABI})"

cmake --build "${BUILD_DIR}/${ANDROID_ABI}" \
      --config "${BUILD_TYPE}" \
      -- -j"$(nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 4)"

ok "Native library built"

# Copy the .so into jniLibs so Gradle can package it
mkdir -p "${NDK_BUILD_DIR}/${ANDROID_ABI}"
cp -v "${BUILD_DIR}/${ANDROID_ABI}/libGeometryDash.so" \
      "${NDK_BUILD_DIR}/${ANDROID_ABI}/libGeometryDash.so"

ok "libGeometryDash.so copied to jniLibs/${ANDROID_ABI}"

# ---- Step 3: Gradle assemble APK ------------------------------------------
info "Step 3/3 — Gradle APK packaging"

cd "${GRADLE_DIR}"

if [ -f "./gradlew" ]; then
    ./gradlew "assemble${BUILD_TYPE}" --parallel --info
else
    gradle "assemble${BUILD_TYPE}" --parallel --info
fi

ok "Gradle build complete"

# ---- Locate the output APK ------------------------------------------------
APK_PATH="$(find "${GRADLE_DIR}/app/build/outputs/apk" \
    -name "*.apk" -path "*${BUILD_TYPE,,}*" 2>/dev/null | head -1)"

if [ -n "${APK_PATH}" ]; then
    ok "APK generated: ${APK_PATH}"
else
    warn "Could not auto-locate the output APK — check ${GRADLE_DIR}/app/build/outputs/apk/"
fi

echo ""
ok "Build finished successfully."
