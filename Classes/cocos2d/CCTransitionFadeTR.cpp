// ============================================================
// CCTransitionFadeTR.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionFadeTR.h"

namespace cocos2d {

CCTransitionFadeTR::CCTransitionFadeTR() {
    // 0xaeecc8
}

CCTransitionFadeTR::CCTransitionFadeTR() {
    // 0xaeecc8
}

CCTransitionFadeTR::~CCTransitionFadeTR() {
    // 0xaed13c
    this->cleanup();
}

CCTransitionFadeTR::~CCTransitionFadeTR() {
    // 0xaecd6c
    this->cleanup();
}

CCTransitionFadeTR::~CCTransitionFadeTR() {
    // 0xaecd6c
    this->cleanup();
}

void CCTransitionFadeTR::sceneOrder() {
    // 0xaecae8
    // TODO: Implement
}

void CCTransitionFadeTR::actionWithSize(cocos2d::CCSize const&) {
    // 0xaedb60
    // TODO: Implement
}

void CCTransitionFadeTR::easeActionWithAction(cocos2d::CCActionInterval*) {
    // 0xaecaf0
    // TODO: Implement
}

void CCTransitionFadeTR::create(float, cocos2d::CCScene*) {
    // 0xaeed00
    CCTransitionFadeTR* ret = new CCTransitionFadeTR();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionFadeTR::onEnter() {
    // 0xaf066c
    // TODO: Implement
}

} // namespace cocos2d
