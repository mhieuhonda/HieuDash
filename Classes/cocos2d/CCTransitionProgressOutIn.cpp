// ============================================================
// CCTransitionProgressOutIn.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionProgressOutIn.h"

namespace cocos2d {

CCTransitionProgressOutIn::~CCTransitionProgressOutIn() {
    // 0xaf0fe4
    this->cleanup();
}

CCTransitionProgressOutIn::~CCTransitionProgressOutIn() {
    // 0xaf0fd0
    this->cleanup();
}

CCTransitionProgressOutIn::~CCTransitionProgressOutIn() {
    // 0xaf0fd0
    this->cleanup();
}

void CCTransitionProgressOutIn::progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) {
    // 0xaf0e54
    // TODO: Implement
}

void CCTransitionProgressOutIn::create(float, cocos2d::CCScene*) {
    // 0xaf1520
    CCTransitionProgressOutIn* ret = new CCTransitionProgressOutIn();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
