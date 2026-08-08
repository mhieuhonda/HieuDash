// ============================================================
// CCTransitionSlideInT.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionSlideInT.h"

namespace cocos2d {

CCTransitionSlideInT::CCTransitionSlideInT() {
    // 0xaee3bc
}

CCTransitionSlideInT::CCTransitionSlideInT() {
    // 0xaee3bc
}

CCTransitionSlideInT::~CCTransitionSlideInT() {
    // 0xaecf44
    this->cleanup();
}

CCTransitionSlideInT::~CCTransitionSlideInT() {
    // 0xaecc9c
    this->cleanup();
}

CCTransitionSlideInT::~CCTransitionSlideInT() {
    // 0xaecc9c
    this->cleanup();
}

void CCTransitionSlideInT::initScenes() {
    // 0xaed740
    // TODO: Implement
}

void CCTransitionSlideInT::sceneOrder() {
    // 0xaeca90
    // TODO: Implement
}

void CCTransitionSlideInT::action() {
    // 0xaed9e8
    // TODO: Implement
}

void CCTransitionSlideInT::create(float, cocos2d::CCScene*) {
    // 0xaee3f4
    CCTransitionSlideInT* ret = new CCTransitionSlideInT();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
