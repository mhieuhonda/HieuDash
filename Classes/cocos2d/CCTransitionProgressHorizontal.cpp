// ============================================================
// CCTransitionProgressHorizontal.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionProgressHorizontal.h"

namespace cocos2d {

CCTransitionProgressHorizontal::~CCTransitionProgressHorizontal() {
    // 0xaf10bc
    this->cleanup();
}

CCTransitionProgressHorizontal::~CCTransitionProgressHorizontal() {
    // 0xaf10a8
    this->cleanup();
}

CCTransitionProgressHorizontal::~CCTransitionProgressHorizontal() {
    // 0xaf10a8
    this->cleanup();
}

void CCTransitionProgressHorizontal::progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) {
    // 0xaf0abc
    // TODO: Implement
}

void CCTransitionProgressHorizontal::create(float, cocos2d::CCScene*) {
    // 0xaf1364
    CCTransitionProgressHorizontal* ret = new CCTransitionProgressHorizontal();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
