// ============================================================
// CCFollow.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCFollow.h"

namespace cocos2d {

CCFollow::~CCFollow() {
    // 0xab3cd4
    this->cleanup();
}

CCFollow::~CCFollow() {
    // 0xab3c98
    this->cleanup();
}

CCFollow::~CCFollow() {
    // 0xab3c98
    this->cleanup();
}

void CCFollow::copyWithZone(cocos2d::CCZone*) {
    // 0xab3ef0
    // TODO: Implement
}

void CCFollow::initWithTarget(cocos2d::CCNode*, cocos2d::CCRect const&) {
    // 0xab4244
    // TODO: Implement
}

void CCFollow::step(float) {
    // 0xab3cf8
    // TODO: Implement
}

void CCFollow::stop() {
    // 0xab3bb0
    // TODO: Implement
}

void CCFollow::create(cocos2d::CCNode*, cocos2d::CCRect const&) {
    // 0xab43d0
    CCFollow* ret = new CCFollow();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCFollow::isDone() {
    // 0xab3b84
    // TODO: Implement
}

} // namespace cocos2d
