// ============================================================
// CCLightFlash.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCLightFlash.h"

CCLightFlash::~CCLightFlash() {
    // 0x5a6f90
    this->cleanup();
}

CCLightFlash::~CCLightFlash() {
    // 0x5a6f54
    this->cleanup();
}

CCLightFlash::~CCLightFlash() {
    // 0x5a6f54
    this->cleanup();
}

void CCLightFlash::playEffect(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float) {
    // 0x5a7c18
    // TODO: Implement
}

void CCLightFlash::cleanupFlash() {
    // 0x5a6eb8
    // TODO: Implement
}

void CCLightFlash::removeLights() {
    // 0x5a6f00
    // TODO: Implement
}

void CCLightFlash::fadeAndRemove() {
    // 0x5a7734
    // TODO: Implement
}

void CCLightFlash::init() {
    // 0x5a6eb0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCLightFlash::create() {
    // 0x5a7694
    CCLightFlash* ret = new CCLightFlash();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLightFlash::showFlash() {
    // 0x5a78a8
    // TODO: Implement
}

