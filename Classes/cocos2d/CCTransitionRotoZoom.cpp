// ============================================================
// CCTransitionRotoZoom.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionRotoZoom.h"

namespace cocos2d {

CCTransitionRotoZoom::CCTransitionRotoZoom() {
    // 0xaede2c
}

CCTransitionRotoZoom::CCTransitionRotoZoom() {
    // 0xaede2c
}

CCTransitionRotoZoom::~CCTransitionRotoZoom() {
    // 0xaece24
    this->cleanup();
}

CCTransitionRotoZoom::~CCTransitionRotoZoom() {
    // 0xaecbcc
    this->cleanup();
}

CCTransitionRotoZoom::~CCTransitionRotoZoom() {
    // 0xaecbcc
    this->cleanup();
}

void CCTransitionRotoZoom::create(float, cocos2d::CCScene*) {
    // 0xaede5c
    CCTransitionRotoZoom* ret = new CCTransitionRotoZoom();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionRotoZoom::onEnter() {
    // 0xaef07c
    // TODO: Implement
}

} // namespace cocos2d
