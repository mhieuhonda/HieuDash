// ============================================================
// CCSkewTo.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCSkewTo.h"

namespace cocos2d {

CCSkewTo::CCSkewTo() {
    // 0xac25f4
}

CCSkewTo::CCSkewTo() {
    // 0xac25f4
}

CCSkewTo::~CCSkewTo() {
    // 0xabf8b8
    this->cleanup();
}

CCSkewTo::~CCSkewTo() {
    // 0xabf8a4
    this->cleanup();
}

CCSkewTo::~CCSkewTo() {
    // 0xabf8a4
    this->cleanup();
}

void CCSkewTo::copyWithZone(cocos2d::CCZone*) {
    // 0xac26d4
    // TODO: Implement
}

void CCSkewTo::startWithTarget(cocos2d::CCNode*) {
    // 0xac01d0
    // TODO: Implement
}

void CCSkewTo::initWithDuration(float, float, float) {
    // 0xac14cc
    // TODO: Implement
}

void CCSkewTo::create(float, float, float) {
    // 0xac264c
    CCSkewTo* ret = new CCSkewTo();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCSkewTo::update(float) {
    // 0xabece8
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
