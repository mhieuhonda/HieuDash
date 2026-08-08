// ============================================================
// CCTransitionZoomFlipY.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionZoomFlipY.h"

namespace cocos2d {

CCTransitionZoomFlipY::CCTransitionZoomFlipY() {
    // 0xaee838
}

CCTransitionZoomFlipY::CCTransitionZoomFlipY() {
    // 0xaee838
}

CCTransitionZoomFlipY::~CCTransitionZoomFlipY() {
    // 0xaed040
    this->cleanup();
}

CCTransitionZoomFlipY::~CCTransitionZoomFlipY() {
    // 0xaecba4
    this->cleanup();
}

CCTransitionZoomFlipY::~CCTransitionZoomFlipY() {
    // 0xaecba4
    this->cleanup();
}

void CCTransitionZoomFlipY::create(float, cocos2d::CCScene*) {
    // 0xaee8c8
    CCTransitionZoomFlipY* ret = new CCTransitionZoomFlipY();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionZoomFlipY::create(float, cocos2d::CCScene*, cocos2d::tOrientation) {
    // 0xaee868
    CCTransitionZoomFlipY* ret = new CCTransitionZoomFlipY();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionZoomFlipY::onEnter() {
    // 0xaefc98
    // TODO: Implement
}

} // namespace cocos2d
