// ============================================================
// CCReverseTime.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCReverseTime.h"

namespace cocos2d {

CCReverseTime::CCReverseTime() {
    // 0xac4434
}

CCReverseTime::CCReverseTime() {
    // 0xac4434
}

CCReverseTime::~CCReverseTime() {
    // 0xabf45c
    this->cleanup();
}

CCReverseTime::~CCReverseTime() {
    // 0xabf410
    this->cleanup();
}

CCReverseTime::~CCReverseTime() {
    // 0xabf410
    this->cleanup();
}

void CCReverseTime::copyWithZone(cocos2d::CCZone*) {
    // 0xac44b4
    // TODO: Implement
}

void CCReverseTime::initWithAction(cocos2d::CCFiniteTimeAction*) {
    // 0xac43dc
    // TODO: Implement
}

void CCReverseTime::startWithTarget(cocos2d::CCNode*) {
    // 0xabf078
    // TODO: Implement
}

void CCReverseTime::stop() {
    // 0xabfc30
    // TODO: Implement
}

void CCReverseTime::create(cocos2d::CCFiniteTimeAction*) {
    // 0xac4470
    CCReverseTime* ret = new CCReverseTime();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCReverseTime::update(float) {
    // 0xabedbc
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCReverseTime::reverse() {
    // 0xabf17c
    // TODO: Implement
}

} // namespace cocos2d
