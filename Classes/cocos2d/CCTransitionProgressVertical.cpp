// ============================================================
// CCTransitionProgressVertical.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionProgressVertical.h"

namespace cocos2d {

CCTransitionProgressVertical::~CCTransitionProgressVertical() {
    // 0xaf1074
    this->cleanup();
}

CCTransitionProgressVertical::~CCTransitionProgressVertical() {
    // 0xaf1060
    this->cleanup();
}

CCTransitionProgressVertical::~CCTransitionProgressVertical() {
    // 0xaf1060
    this->cleanup();
}

void CCTransitionProgressVertical::progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) {
    // 0xaf0bf0
    // TODO: Implement
}

void CCTransitionProgressVertical::create(float, cocos2d::CCScene*) {
    // 0xaf13f8
    CCTransitionProgressVertical* ret = new CCTransitionProgressVertical();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
