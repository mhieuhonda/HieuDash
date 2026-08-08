// ============================================================
// CCTransitionProgressRadialCW.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionProgressRadialCW.h"

namespace cocos2d {

CCTransitionProgressRadialCW::~CCTransitionProgressRadialCW() {
    // 0xaf1104
    this->cleanup();
}

CCTransitionProgressRadialCW::~CCTransitionProgressRadialCW() {
    // 0xaf10f0
    this->cleanup();
}

CCTransitionProgressRadialCW::~CCTransitionProgressRadialCW() {
    // 0xaf10f0
    this->cleanup();
}

void CCTransitionProgressRadialCW::progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) {
    // 0xaf09c0
    // TODO: Implement
}

void CCTransitionProgressRadialCW::create(float, cocos2d::CCScene*) {
    // 0xaf12d0
    CCTransitionProgressRadialCW* ret = new CCTransitionProgressRadialCW();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
