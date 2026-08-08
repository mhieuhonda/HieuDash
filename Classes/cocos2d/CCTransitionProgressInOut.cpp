// ============================================================
// CCTransitionProgressInOut.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionProgressInOut.h"

namespace cocos2d {

CCTransitionProgressInOut::~CCTransitionProgressInOut() {
    // 0xaf102c
    this->cleanup();
}

CCTransitionProgressInOut::~CCTransitionProgressInOut() {
    // 0xaf1018
    this->cleanup();
}

CCTransitionProgressInOut::~CCTransitionProgressInOut() {
    // 0xaf1018
    this->cleanup();
}

void CCTransitionProgressInOut::sceneOrder() {
    // 0xaf08a0
    // TODO: Implement
}

void CCTransitionProgressInOut::setupTransition() {
    // 0xaf08a8
    // TODO: Implement
}

void CCTransitionProgressInOut::progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) {
    // 0xaf0d24
    // TODO: Implement
}

void CCTransitionProgressInOut::create(float, cocos2d::CCScene*) {
    // 0xaf148c
    CCTransitionProgressInOut* ret = new CCTransitionProgressInOut();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
