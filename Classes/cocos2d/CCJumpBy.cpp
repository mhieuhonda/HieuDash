// ============================================================
// CCJumpBy.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCJumpBy.h"

namespace cocos2d {

CCJumpBy::~CCJumpBy() {
    // 0xabf828
    this->cleanup();
}

CCJumpBy::~CCJumpBy() {
    // 0xabf814
    this->cleanup();
}

CCJumpBy::~CCJumpBy() {
    // 0xabf814
    this->cleanup();
}

void CCJumpBy::copyWithZone(cocos2d::CCZone*) {
    // 0xac29ec
    // TODO: Implement
}

void CCJumpBy::startWithTarget(cocos2d::CCNode*) {
    // 0xac037c
    // TODO: Implement
}

void CCJumpBy::initWithDuration(float, cocos2d::CCPoint const&, float, unsigned int) {
    // 0xac2858
    // TODO: Implement
}

void CCJumpBy::create(float, cocos2d::CCPoint const&, float, unsigned int) {
    // 0xac28b8
    CCJumpBy* ret = new CCJumpBy();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCJumpBy::update(float) {
    // 0xac06bc
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCJumpBy::reverse() {
    // 0xac2968
    // TODO: Implement
}

} // namespace cocos2d
