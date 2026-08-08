// ============================================================
// CCTransitionFadeDown.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionFadeDown.h"

namespace cocos2d {

CCTransitionFadeDown::CCTransitionFadeDown() {
    // 0xaeeee4
}

CCTransitionFadeDown::CCTransitionFadeDown() {
    // 0xaeeee4
}

CCTransitionFadeDown::~CCTransitionFadeDown() {
    // 0xaed1a8
    this->cleanup();
}

CCTransitionFadeDown::~CCTransitionFadeDown() {
    // 0xaecdc0
    this->cleanup();
}

CCTransitionFadeDown::~CCTransitionFadeDown() {
    // 0xaecdc0
    this->cleanup();
}

void CCTransitionFadeDown::actionWithSize(cocos2d::CCSize const&) {
    // 0xaedb84
    // TODO: Implement
}

void CCTransitionFadeDown::create(float, cocos2d::CCScene*) {
    // 0xaeef1c
    CCTransitionFadeDown* ret = new CCTransitionFadeDown();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
