// ============================================================
// CCTransitionFlipY.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionFlipY.h"

namespace cocos2d {

CCTransitionFlipY::CCTransitionFlipY() {
    // 0xaee670
}

CCTransitionFlipY::CCTransitionFlipY() {
    // 0xaee670
}

CCTransitionFlipY::~CCTransitionFlipY() {
    // 0xaecfd4
    this->cleanup();
}

CCTransitionFlipY::~CCTransitionFlipY() {
    // 0xaecb68
    this->cleanup();
}

CCTransitionFlipY::~CCTransitionFlipY() {
    // 0xaecb68
    this->cleanup();
}

void CCTransitionFlipY::create(float, cocos2d::CCScene*) {
    // 0xaee700
    CCTransitionFlipY* ret = new CCTransitionFlipY();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionFlipY::create(float, cocos2d::CCScene*, cocos2d::tOrientation) {
    // 0xaee6a0
    CCTransitionFlipY* ret = new CCTransitionFlipY();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionFlipY::onEnter() {
    // 0xaef82c
    // TODO: Implement
}

} // namespace cocos2d
