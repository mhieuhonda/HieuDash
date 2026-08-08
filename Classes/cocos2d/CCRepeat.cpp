// ============================================================
// CCRepeat.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCRepeat.h"

namespace cocos2d {

CCRepeat::~CCRepeat() {
    // 0xabf300
    this->cleanup();
}

CCRepeat::~CCRepeat() {
    // 0xabf2b4
    this->cleanup();
}

CCRepeat::~CCRepeat() {
    // 0xabf2b4
    this->cleanup();
}

void CCRepeat::copyWithZone(cocos2d::CCZone*) {
    // 0xac1b4c
    // TODO: Implement
}

void CCRepeat::initWithAction(cocos2d::CCFiniteTimeAction*, unsigned int) {
    // 0xac19e0
    // TODO: Implement
}

void CCRepeat::startWithTarget(cocos2d::CCNode*) {
    // 0xabf128
    // TODO: Implement
}

void CCRepeat::stop() {
    // 0xabfb7c
    // TODO: Implement
}

void CCRepeat::create(cocos2d::CCFiniteTimeAction*, unsigned int) {
    // 0xac1a90
    CCRepeat* ret = new CCRepeat();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCRepeat::isDone() {
    // 0xabeb60
    // TODO: Implement
}

void CCRepeat::update(float) {
    // 0xac0b48
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCRepeat::reverse() {
    // 0xac1b18
    // TODO: Implement
}

} // namespace cocos2d
