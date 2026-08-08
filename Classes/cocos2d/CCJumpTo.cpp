// ============================================================
// CCJumpTo.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCJumpTo.h"

namespace cocos2d {

CCJumpTo::~CCJumpTo() {
    // 0xabf870
    this->cleanup();
}

CCJumpTo::~CCJumpTo() {
    // 0xabf85c
    this->cleanup();
}

CCJumpTo::~CCJumpTo() {
    // 0xabf85c
    this->cleanup();
}

void CCJumpTo::copyWithZone(cocos2d::CCZone*) {
    // 0xac2af0
    // TODO: Implement
}

void CCJumpTo::startWithTarget(cocos2d::CCNode*) {
    // 0xac040c
    // TODO: Implement
}

void CCJumpTo::create(float, cocos2d::CCPoint const&, float, int) {
    // 0xac2c04
    CCJumpTo* ret = new CCJumpTo();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
