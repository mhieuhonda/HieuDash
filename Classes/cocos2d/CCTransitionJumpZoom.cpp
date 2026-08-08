// ============================================================
// CCTransitionJumpZoom.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionJumpZoom.h"

namespace cocos2d {

CCTransitionJumpZoom::CCTransitionJumpZoom() {
    // 0xaeded8
}

CCTransitionJumpZoom::CCTransitionJumpZoom() {
    // 0xaeded8
}

CCTransitionJumpZoom::~CCTransitionJumpZoom() {
    // 0xaece48
    this->cleanup();
}

CCTransitionJumpZoom::~CCTransitionJumpZoom() {
    // 0xaecbe0
    this->cleanup();
}

CCTransitionJumpZoom::~CCTransitionJumpZoom() {
    // 0xaecbe0
    this->cleanup();
}

void CCTransitionJumpZoom::create(float, cocos2d::CCScene*) {
    // 0xaedf08
    CCTransitionJumpZoom* ret = new CCTransitionJumpZoom();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionJumpZoom::onEnter() {
    // 0xaef218
    // TODO: Implement
}

} // namespace cocos2d
