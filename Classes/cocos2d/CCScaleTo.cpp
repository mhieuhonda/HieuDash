// ============================================================
// CCScaleTo.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCScaleTo.h"

namespace cocos2d {

CCScaleTo::~CCScaleTo() {
    // 0xabf708
    this->cleanup();
}

CCScaleTo::~CCScaleTo() {
    // 0xabf6f4
    this->cleanup();
}

CCScaleTo::~CCScaleTo() {
    // 0xabf6f4
    this->cleanup();
}

void CCScaleTo::copyWithZone(cocos2d::CCZone*) {
    // 0xac33c4
    // TODO: Implement
}

void CCScaleTo::startWithTarget(cocos2d::CCNode*) {
    // 0xabef98
    // TODO: Implement
}

void CCScaleTo::initWithDuration(float, float) {
    // 0xac323c
    // TODO: Implement
}

void CCScaleTo::initWithDuration(float, float, float) {
    // 0xac32f8
    // TODO: Implement
}

void CCScaleTo::create(float, float) {
    // 0xac3274
    CCScaleTo* ret = new CCScaleTo();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCScaleTo::create(float, float, float) {
    // 0xac3338
    CCScaleTo* ret = new CCScaleTo();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCScaleTo::update(float) {
    // 0xabed50
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
