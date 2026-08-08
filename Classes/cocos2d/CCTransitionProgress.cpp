// ============================================================
// CCTransitionProgress.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionProgress.h"

namespace cocos2d {

CCTransitionProgress::CCTransitionProgress() {
    // 0xaf1180
}

CCTransitionProgress::CCTransitionProgress() {
    // 0xaf1180
}

CCTransitionProgress::~CCTransitionProgress() {
    // 0xaf0f9c
    this->cleanup();
}

CCTransitionProgress::~CCTransitionProgress() {
    // 0xaf0f88
    this->cleanup();
}

CCTransitionProgress::~CCTransitionProgress() {
    // 0xaf0f88
    this->cleanup();
}

void CCTransitionProgress::sceneOrder() {
    // 0xaf0870
    // TODO: Implement
}

void CCTransitionProgress::setupTransition() {
    // 0xaf0878
    // TODO: Implement
}

void CCTransitionProgress::progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) {
    // 0xaf0898
    // TODO: Implement
}

void CCTransitionProgress::create(float, cocos2d::CCScene*) {
    // 0xaf11c0
    CCTransitionProgress* ret = new CCTransitionProgress();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionProgress::onExit() {
    // 0xaf17a4
    // TODO: Implement
}

void CCTransitionProgress::onEnter() {
    // 0xaf15b4
    // TODO: Implement
}

} // namespace cocos2d
