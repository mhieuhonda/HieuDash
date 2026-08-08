// ============================================================
// CCTransitionZoomFlipX.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionZoomFlipX.h"

namespace cocos2d {

CCTransitionZoomFlipX::CCTransitionZoomFlipX() {
    // 0xaee7a0
}

CCTransitionZoomFlipX::CCTransitionZoomFlipX() {
    // 0xaee7a0
}

CCTransitionZoomFlipX::~CCTransitionZoomFlipX() {
    // 0xaed01c
    this->cleanup();
}

CCTransitionZoomFlipX::~CCTransitionZoomFlipX() {
    // 0xaecb90
    this->cleanup();
}

CCTransitionZoomFlipX::~CCTransitionZoomFlipX() {
    // 0xaecb90
    this->cleanup();
}

void CCTransitionZoomFlipX::create(float, cocos2d::CCScene*) {
    // 0xaee830
    CCTransitionZoomFlipX* ret = new CCTransitionZoomFlipX();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionZoomFlipX::create(float, cocos2d::CCScene*, cocos2d::tOrientation) {
    // 0xaee7d0
    CCTransitionZoomFlipX* ret = new CCTransitionZoomFlipX();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionZoomFlipX::onEnter() {
    // 0xaefae4
    // TODO: Implement
}

} // namespace cocos2d
