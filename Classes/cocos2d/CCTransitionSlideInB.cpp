// ============================================================
// CCTransitionSlideInB.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionSlideInB.h"

namespace cocos2d {

CCTransitionSlideInB::CCTransitionSlideInB() {
    // 0xaee470
}

CCTransitionSlideInB::CCTransitionSlideInB() {
    // 0xaee470
}

CCTransitionSlideInB::~CCTransitionSlideInB() {
    // 0xaecf68
    this->cleanup();
}

CCTransitionSlideInB::~CCTransitionSlideInB() {
    // 0xaeccb8
    this->cleanup();
}

CCTransitionSlideInB::~CCTransitionSlideInB() {
    // 0xaeccb8
    this->cleanup();
}

void CCTransitionSlideInB::initScenes() {
    // 0xaed7cc
    // TODO: Implement
}

void CCTransitionSlideInB::sceneOrder() {
    // 0xaeca98
    // TODO: Implement
}

void CCTransitionSlideInB::action() {
    // 0xaeda74
    // TODO: Implement
}

void CCTransitionSlideInB::create(float, cocos2d::CCScene*) {
    // 0xaee4a8
    CCTransitionSlideInB* ret = new CCTransitionSlideInB();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
