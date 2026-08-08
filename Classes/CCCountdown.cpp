// ============================================================
// CCCountdown.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCCountdown.h"

CCCountdown::~CCCountdown() {
    // 0x574658
    this->cleanup();
}

CCCountdown::~CCCountdown() {
    // 0x574634
    this->cleanup();
}

CCCountdown::~CCCountdown() {
    // 0x574634
    this->cleanup();
}

void CCCountdown::setOpacity(unsigned char) {
    // 0x5747c0
    // TODO: Implement
}

void CCCountdown::lapFinished() {
    // 0x5744fc
    // TODO: Implement
}

void CCCountdown::startTimerWithSeconds(float, void (cocos2d::CCObject::*)(), cocos2d::CCNode*) {
    // 0x574754
    // TODO: Implement
}

void CCCountdown::init() {
    // 0x574294
    bool ret = cocos2d::CCLabelTTF::init() if "cocos2d::CCLabelTTF" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCCountdown::create() {
    // 0x57469c
    CCCountdown* ret = new CCCountdown();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

