// ============================================================
// CCTransitionProgressRadialCCW.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionProgressRadialCCW.h"

namespace cocos2d {

CCTransitionProgressRadialCCW::~CCTransitionProgressRadialCCW() {
    // 0xaf114c
    this->cleanup();
}

CCTransitionProgressRadialCCW::~CCTransitionProgressRadialCCW() {
    // 0xaf1138
    this->cleanup();
}

CCTransitionProgressRadialCCW::~CCTransitionProgressRadialCCW() {
    // 0xaf1138
    this->cleanup();
}

void CCTransitionProgressRadialCCW::progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) {
    // 0xaf08c8
    // TODO: Implement
}

void CCTransitionProgressRadialCCW::create(float, cocos2d::CCScene*) {
    // 0xaf123c
    CCTransitionProgressRadialCCW* ret = new CCTransitionProgressRadialCCW();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
