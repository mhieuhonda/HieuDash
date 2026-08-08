// ============================================================
// SystemError.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SystemError.h"

namespace fmt {

void SystemError::init(int, fmt::BasicStringRef<char>, fmt::ArgList const&) {
    // 0xb70030
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

} // namespace fmt
