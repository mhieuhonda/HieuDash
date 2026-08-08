// ============================================================
// CCAnimate.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCAnimate.h"

namespace cocos2d {

CCAnimate::CCAnimate() {
    // 0xac47dc
}

CCAnimate::CCAnimate() {
    // 0xac47dc
}

CCAnimate::~CCAnimate() {
    // 0xabfb14
    this->cleanup();
}

CCAnimate::~CCAnimate() {
    // 0xabfa9c
    this->cleanup();
}

CCAnimate::~CCAnimate() {
    // 0xabfa9c
    this->cleanup();
}

void CCAnimate::copyWithZone(cocos2d::CCZone*) {
    // 0xac4948
    // TODO: Implement
}

void CCAnimate::startWithTarget(cocos2d::CCNode*) {
    // 0xabf194
    // TODO: Implement
}

void CCAnimate::initWithAnimation(cocos2d::CCAnimation*) {
    // 0xac4568
    // TODO: Implement
}

void CCAnimate::stop() {
    // 0xabfc64
    // TODO: Implement
}

void CCAnimate::create(cocos2d::CCAnimation*) {
    // 0xac4844
    CCAnimate* ret = new CCAnimate();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCAnimate::update(float) {
    // 0xac081c
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCAnimate::reverse() {
    // 0xac4888
    // TODO: Implement
}

} // namespace cocos2d
