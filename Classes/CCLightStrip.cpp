// ============================================================
// CCLightStrip.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCLightStrip.h"

CCLightStrip::~CCLightStrip() {
    // 0x5a6fc8
    this->cleanup();
}

CCLightStrip::~CCLightStrip() {
    // 0x5a6fb4
    this->cleanup();
}

CCLightStrip::~CCLightStrip() {
    // 0x5a6fb4
    this->cleanup();
}

void CCLightStrip::updateTweenAction(float, char const*) {
    // 0x5a71d0
    // TODO: Implement
}

void CCLightStrip::draw() {
    // 0x5a6ffc
    // Render/draw logic
    // TODO: Implement rendering
}

void CCLightStrip::init(float, float, float, float, float) {
    // 0x5a7a04
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCLightStrip::create(float, float, float, float, float) {
    // 0x5a7b20
    CCLightStrip* ret = new CCLightStrip();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

