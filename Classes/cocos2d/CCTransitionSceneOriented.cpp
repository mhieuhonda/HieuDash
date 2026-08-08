// ============================================================
// CCTransitionSceneOriented.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionSceneOriented.h"

namespace cocos2d {

CCTransitionSceneOriented::CCTransitionSceneOriented() {
    // 0xaedd9c
}

CCTransitionSceneOriented::CCTransitionSceneOriented() {
    // 0xaedd9c
}

CCTransitionSceneOriented::~CCTransitionSceneOriented() {
    // 0xaece00
    this->cleanup();
}

CCTransitionSceneOriented::~CCTransitionSceneOriented() {
    // 0xaecb40
    this->cleanup();
}

CCTransitionSceneOriented::~CCTransitionSceneOriented() {
    // 0xaecb40
    this->cleanup();
}

void CCTransitionSceneOriented::initWithDuration(float, cocos2d::CCScene*, cocos2d::tOrientation) {
    // 0xaedc68
    // TODO: Implement
}

void CCTransitionSceneOriented::create(float, cocos2d::CCScene*, cocos2d::tOrientation) {
    // 0xaeddcc
    CCTransitionSceneOriented* ret = new CCTransitionSceneOriented();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
