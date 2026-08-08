#!/usr/bin/env bash
# ===========================================================================
# build_android.sh — Rebuild the GeometryDash Android APK from the
# apktool-decompiled tree (smali/ + assets/ + res/ + lib/ + AndroidManifest).
#
# Usage:
#   bash scripts/build_android.sh
#
# Requires: apktool, Android SDK build-tools (zipalign + apksigner), JDK 17+.
# ===========================================================================

set -euo pipefail

# ---- Configuration --------------------------------------------------------
PROJECT_ROOT="$(cd "$(dirname "$0")/.." && pwd)"
OUTPUT_NAME="${OUTPUT_NAME:-GeometryDash.apk}"
KEYSTORE="${KEYSTORE:-${HOME}/.android/debug.keystore}"
KEYSTORE_PASS="${KEYSTORE_PASS:-android}"
KEY_ALIAS="${KEY_ALIAS:-androiddebugkey}"
KEY_PASS="${KEY_PASS:-android}"

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

command -v apktool >/dev/null 2>&1 || fail "apktool not found — install it and try again."

if [ -z "${ANDROID_SDK_ROOT:-}${ANDROID_HOME:-}" ]; then
    fail "ANDROID_SDK_ROOT or ANDROID_HOME must be set (pointing to Android SDK)."
fi
SDK="${ANDROID_SDK_ROOT:-${ANDROID_HOME}}"

# Pick the newest available build-tools
BT_DIR="$(ls -d "${SDK}/build-tools"/* 2>/dev/null | sort -V | tail -1 || true)"
[ -n "${BT_DIR}" ] || fail "No Android build-tools found under ${SDK}/build-tools"
ZIPALIGN="${BT_DIR}/zipalign"
APKSIGNER="${BT_DIR}/apksigner"
info "Build-tools  : ${BT_DIR}"

# ---- Step 1: apktool build ------------------------------------------------
info "Step 1/4 — Rebuild APK with apktool"
cd "${PROJECT_ROOT}"
apktool b . -o "${OUTPUT_NAME}" --use-aapt2
ok "APK built: ${OUTPUT_NAME}"

# ---- Step 2: Generate debug keystore (if needed) --------------------------
info "Step 2/4 — Ensure debug keystore exists"
if [ ! -f "${KEYSTORE}" ]; then
    mkdir -p "$(dirname "${KEYSTORE}")"
    keytool -genkey -v -keystore "${KEYSTORE}" \
        -storepass "${KEYSTORE_PASS}" \
        -alias "${KEY_ALIAS}" -keypass "${KEY_PASS}" \
        -keyalg RSA -keysize 2048 -validity 10000 \
        -dname "CN=Android Debug,O=Android,C=US"
fi
ok "Keystore: ${KEYSTORE}"

# ---- Step 3: zipalign -----------------------------------------------------
info "Step 3/4 — Zipalign APK"
ALIGNED="${OUTPUT_NAME%.apk}-aligned.apk"
"${ZIPALIGN}" -p -f 4 "${OUTPUT_NAME}" "${ALIGNED}"
mv "${ALIGNED}" "${OUTPUT_NAME}"
ok "Aligned"

# ---- Step 4: Sign ---------------------------------------------------------
info "Step 4/4 — Sign APK"
SIGNED="${OUTPUT_NAME%.apk}-signed.apk"
"${APKSIGNER}" sign \
    --ks "${KEYSTORE}" \
    --ks-pass "pass:${KEYSTORE_PASS}" \
    --key-pass "pass:${KEY_PASS}" \
    --v1-signing-scheme on \
    --v2-signing-scheme on \
    --out "${SIGNED}" "${OUTPUT_NAME}"
mv "${SIGNED}" "${OUTPUT_NAME}"
"${APKSIGNER}" verify --print-certs "${OUTPUT_NAME}" | head -5
ok "Signed"

echo ""
ok "Build finished successfully: ${PROJECT_ROOT}/${OUTPUT_NAME}"
