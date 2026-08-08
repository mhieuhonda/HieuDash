// ============================================================
// CCCircleAlert.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCCircleAlert.h"

CCCircleAlert::~CCCircleAlert() {
    // 0x5a6050
    this->cleanup();
}

CCCircleAlert::~CCCircleAlert() {
    // 0x5a5fdc
    this->cleanup();
}

CCCircleAlert::~CCCircleAlert() {
    // 0x5a5fdc
    this->cleanup();
}

void CCCircleAlert::init(float, float, float) {
    // 0x5a6a48
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCCircleAlert::create(float, float, float) {
    // 0x5a6b48
    CCCircleAlert* ret = new CCCircleAlert();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

