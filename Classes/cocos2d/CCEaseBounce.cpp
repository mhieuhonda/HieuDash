// ============================================================
// CCEaseBounce.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseBounce.h"

namespace cocos2d {

CCEaseBounce::~CCEaseBounce() {
    // 0xab6560
    this->cleanup();
}

CCEaseBounce::~CCEaseBounce() {
    // 0xab654c
    this->cleanup();
}

CCEaseBounce::~CCEaseBounce() {
    // 0xab654c
    this->cleanup();
}

void CCEaseBounce::bounceTime(float) {
    // 0xab8f98
    // TODO: Implement
}

void CCEaseBounce::copyWithZone(cocos2d::CCZone*) {
    // 0xab7634
    // TODO: Implement
}

void CCEaseBounce::create(cocos2d::CCActionInterval*) {
    // 0xab8ed8
    CCEaseBounce* ret = new CCEaseBounce();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseBounce::reverse() {
    // 0xab8f74
    // TODO: Implement
}

} // namespace cocos2d
