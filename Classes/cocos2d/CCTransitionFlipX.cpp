// ============================================================
// CCTransitionFlipX.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionFlipX.h"

namespace cocos2d {

CCTransitionFlipX::CCTransitionFlipX() {
    // 0xaee5d8
}

CCTransitionFlipX::CCTransitionFlipX() {
    // 0xaee5d8
}

CCTransitionFlipX::~CCTransitionFlipX() {
    // 0xaecfb0
    this->cleanup();
}

CCTransitionFlipX::~CCTransitionFlipX() {
    // 0xaecb54
    this->cleanup();
}

CCTransitionFlipX::~CCTransitionFlipX() {
    // 0xaecb54
    this->cleanup();
}

void CCTransitionFlipX::create(float, cocos2d::CCScene*) {
    // 0xaee668
    CCTransitionFlipX* ret = new CCTransitionFlipX();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionFlipX::create(float, cocos2d::CCScene*, cocos2d::tOrientation) {
    // 0xaee608
    CCTransitionFlipX* ret = new CCTransitionFlipX();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionFlipX::onEnter() {
    // 0xaef6d8
    // TODO: Implement
}

} // namespace cocos2d
