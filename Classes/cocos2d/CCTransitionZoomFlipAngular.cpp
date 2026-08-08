// ============================================================
// CCTransitionZoomFlipAngular.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionZoomFlipAngular.h"

namespace cocos2d {

CCTransitionZoomFlipAngular::CCTransitionZoomFlipAngular() {
    // 0xaee8d0
}

CCTransitionZoomFlipAngular::CCTransitionZoomFlipAngular() {
    // 0xaee8d0
}

CCTransitionZoomFlipAngular::~CCTransitionZoomFlipAngular() {
    // 0xaed064
    this->cleanup();
}

CCTransitionZoomFlipAngular::~CCTransitionZoomFlipAngular() {
    // 0xaecbb8
    this->cleanup();
}

CCTransitionZoomFlipAngular::~CCTransitionZoomFlipAngular() {
    // 0xaecbb8
    this->cleanup();
}

void CCTransitionZoomFlipAngular::create(float, cocos2d::CCScene*) {
    // 0xaee960
    CCTransitionZoomFlipAngular* ret = new CCTransitionZoomFlipAngular();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionZoomFlipAngular::create(float, cocos2d::CCScene*, cocos2d::tOrientation) {
    // 0xaee900
    CCTransitionZoomFlipAngular* ret = new CCTransitionZoomFlipAngular();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionZoomFlipAngular::onEnter() {
    // 0xaefe54
    // TODO: Implement
}

} // namespace cocos2d
