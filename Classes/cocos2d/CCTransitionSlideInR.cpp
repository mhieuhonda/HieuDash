// ============================================================
// CCTransitionSlideInR.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionSlideInR.h"

namespace cocos2d {

CCTransitionSlideInR::CCTransitionSlideInR() {
    // 0xaee308
}

CCTransitionSlideInR::CCTransitionSlideInR() {
    // 0xaee308
}

CCTransitionSlideInR::~CCTransitionSlideInR() {
    // 0xaecf20
    this->cleanup();
}

CCTransitionSlideInR::~CCTransitionSlideInR() {
    // 0xaecc80
    this->cleanup();
}

CCTransitionSlideInR::~CCTransitionSlideInR() {
    // 0xaecc80
    this->cleanup();
}

void CCTransitionSlideInR::initScenes() {
    // 0xaed6b4
    // TODO: Implement
}

void CCTransitionSlideInR::sceneOrder() {
    // 0xaeca84
    // TODO: Implement
}

void CCTransitionSlideInR::action() {
    // 0xaed95c
    // TODO: Implement
}

void CCTransitionSlideInR::create(float, cocos2d::CCScene*) {
    // 0xaee340
    CCTransitionSlideInR* ret = new CCTransitionSlideInR();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
