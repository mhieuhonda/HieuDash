// ============================================================
// CCProgressFromTo.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCProgressFromTo.h"

namespace cocos2d {

CCProgressFromTo::~CCProgressFromTo() {
    // 0xac645c
    this->cleanup();
}

CCProgressFromTo::~CCProgressFromTo() {
    // 0xac6448
    this->cleanup();
}

CCProgressFromTo::~CCProgressFromTo() {
    // 0xac6448
    this->cleanup();
}

void CCProgressFromTo::copyWithZone(cocos2d::CCZone*) {
    // 0xac673c
    // TODO: Implement
}

void CCProgressFromTo::startWithTarget(cocos2d::CCNode*) {
    // 0xac63d4
    // TODO: Implement
}

void CCProgressFromTo::initWithDuration(float, float, float) {
    // 0xac6664
    // TODO: Implement
}

void CCProgressFromTo::create(float, float, float) {
    // 0xac66a4
    CCProgressFromTo* ret = new CCProgressFromTo();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCProgressFromTo::update(float) {
    // 0xac6430
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCProgressFromTo::reverse() {
    // 0xac672c
    // TODO: Implement
}

} // namespace cocos2d
