// ============================================================
// GJHttpResult.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJHttpResult.h"

GJHttpResult::~GJHttpResult() {
    // 0x6ee660
    this->cleanup();
}

GJHttpResult::~GJHttpResult() {
    // 0x6ee548
    this->cleanup();
}

GJHttpResult::~GJHttpResult() {
    // 0x6ee548
    this->cleanup();
}

void GJHttpResult::init(bool, std::string, std::string, GJHttpType) {
    // 0x718cf0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJHttpResult::create(bool, std::string, std::string, GJHttpType) {
    // 0x718d64
    GJHttpResult* ret = new GJHttpResult();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

