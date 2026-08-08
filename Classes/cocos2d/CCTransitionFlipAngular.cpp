// ============================================================
// CCTransitionFlipAngular.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionFlipAngular.h"

namespace cocos2d {

CCTransitionFlipAngular::CCTransitionFlipAngular() {
    // 0xaee708
}

CCTransitionFlipAngular::CCTransitionFlipAngular() {
    // 0xaee708
}

CCTransitionFlipAngular::~CCTransitionFlipAngular() {
    // 0xaecff8
    this->cleanup();
}

CCTransitionFlipAngular::~CCTransitionFlipAngular() {
    // 0xaecb7c
    this->cleanup();
}

CCTransitionFlipAngular::~CCTransitionFlipAngular() {
    // 0xaecb7c
    this->cleanup();
}

void CCTransitionFlipAngular::create(float, cocos2d::CCScene*) {
    // 0xaee798
    CCTransitionFlipAngular* ret = new CCTransitionFlipAngular();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionFlipAngular::create(float, cocos2d::CCScene*, cocos2d::tOrientation) {
    // 0xaee738
    CCTransitionFlipAngular* ret = new CCTransitionFlipAngular();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionFlipAngular::onEnter() {
    // 0xaef988
    // TODO: Implement
}

} // namespace cocos2d
