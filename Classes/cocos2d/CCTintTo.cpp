// ============================================================
// CCTintTo.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTintTo.h"

namespace cocos2d {

CCTintTo::~CCTintTo() {
    // 0xabf5a0
    this->cleanup();
}

CCTintTo::~CCTintTo() {
    // 0xabf58c
    this->cleanup();
}

CCTintTo::~CCTintTo() {
    // 0xabf58c
    this->cleanup();
}

void CCTintTo::copyWithZone(cocos2d::CCZone*) {
    // 0xac3ba8
    // TODO: Implement
}

void CCTintTo::startWithTarget(cocos2d::CCNode*) {
    // 0xabfe38
    // TODO: Implement
}

void CCTintTo::initWithDuration(float, unsigned char, unsigned char, unsigned char) {
    // 0xac3acc
    // TODO: Implement
}

void CCTintTo::create(float, unsigned char, unsigned char, unsigned char) {
    // 0xac3b14
    CCTintTo* ret = new CCTintTo();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTintTo::update(float) {
    // 0xabfe98
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
