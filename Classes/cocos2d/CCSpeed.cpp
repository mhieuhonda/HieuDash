// ============================================================
// CCSpeed.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCSpeed.h"

namespace cocos2d {

CCSpeed::~CCSpeed() {
    // 0xab3c74
    this->cleanup();
}

CCSpeed::~CCSpeed() {
    // 0xab3c38
    this->cleanup();
}

CCSpeed::~CCSpeed() {
    // 0xab3c38
    this->cleanup();
}

void CCSpeed::copyWithZone(cocos2d::CCZone*) {
    // 0xab411c
    // TODO: Implement
}

void CCSpeed::initWithAction(cocos2d::CCActionInterval*, float) {
    // 0xab4018
    // TODO: Implement
}

void CCSpeed::setInnerAction(cocos2d::CCActionInterval*) {
    // 0xab41f4
    // TODO: Implement
}

void CCSpeed::startWithTarget(cocos2d::CCNode*) {
    // 0xab3ac4
    // TODO: Implement
}

void CCSpeed::step(float) {
    // 0xab3b34
    // TODO: Implement
}

void CCSpeed::stop() {
    // 0xab3b00
    // TODO: Implement
}

void CCSpeed::create(cocos2d::CCActionInterval*, float) {
    // 0xab4058
    CCSpeed* ret = new CCSpeed();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCSpeed::isDone() {
    // 0xab3b60
    // TODO: Implement
}

void CCSpeed::reverse() {
    // 0xab40e8
    // TODO: Implement
}

} // namespace cocos2d
