// ============================================================
// CCProgressTo.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCProgressTo.h"

namespace cocos2d {

CCProgressTo::~CCProgressTo() {
    // 0xac64a4
    this->cleanup();
}

CCProgressTo::~CCProgressTo() {
    // 0xac6490
    this->cleanup();
}

CCProgressTo::~CCProgressTo() {
    // 0xac6490
    this->cleanup();
}

void CCProgressTo::copyWithZone(cocos2d::CCZone*) {
    // 0xac658c
    // TODO: Implement
}

void CCProgressTo::startWithTarget(cocos2d::CCNode*) {
    // 0xac63d8
    // TODO: Implement
}

void CCProgressTo::initWithDuration(float, float) {
    // 0xac64d8
    // TODO: Implement
}

void CCProgressTo::create(float, float) {
    // 0xac650c
    CCProgressTo* ret = new CCProgressTo();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCProgressTo::update(float) {
    // 0xac6418
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
