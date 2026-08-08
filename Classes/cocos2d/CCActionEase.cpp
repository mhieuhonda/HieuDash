// ============================================================
// CCActionEase.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCActionEase.h"

namespace cocos2d {

CCActionEase::~CCActionEase() {
    // 0xab6340
    this->cleanup();
}

CCActionEase::~CCActionEase() {
    // 0xab62f4
    this->cleanup();
}

CCActionEase::~CCActionEase() {
    // 0xab62f4
    this->cleanup();
}

void CCActionEase::copyWithZone(cocos2d::CCZone*) {
    // 0xab703c
    // TODO: Implement
}

void CCActionEase::getInnerAction() {
    // 0xab61c4
    // TODO: Implement
}

void CCActionEase::initWithAction(cocos2d::CCActionInterval*) {
    // 0xab6f34
    // TODO: Implement
}

void CCActionEase::startWithTarget(cocos2d::CCNode*) {
    // 0xab693c
    // TODO: Implement
}

void CCActionEase::stop() {
    // 0xab6974
    // TODO: Implement
}

void CCActionEase::create(cocos2d::CCActionInterval*) {
    // 0xab6f7c
    CCActionEase* ret = new CCActionEase();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCActionEase::update(float) {
    // 0xab61a0
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCActionEase::reverse() {
    // 0xab7018
    // TODO: Implement
}

} // namespace cocos2d
