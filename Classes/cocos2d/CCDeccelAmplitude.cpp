// ============================================================
// CCDeccelAmplitude.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCDeccelAmplitude.h"

namespace cocos2d {

CCDeccelAmplitude::~CCDeccelAmplitude() {
    // 0xab99e8
    this->cleanup();
}

CCDeccelAmplitude::~CCDeccelAmplitude() {
    // 0xab999c
    this->cleanup();
}

CCDeccelAmplitude::~CCDeccelAmplitude() {
    // 0xab999c
    this->cleanup();
}

void CCDeccelAmplitude::initWithAction(cocos2d::CCAction*, float) {
    // 0xaba274
    // TODO: Implement
}

void CCDeccelAmplitude::startWithTarget(cocos2d::CCNode*) {
    // 0xab9690
    // TODO: Implement
}

void CCDeccelAmplitude::create(cocos2d::CCAction*, float) {
    // 0xaba2c0
    CCDeccelAmplitude* ret = new CCDeccelAmplitude();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCDeccelAmplitude::update(float) {
    // 0xab9c0c
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCDeccelAmplitude::reverse() {
    // 0xaba36c
    // TODO: Implement
}

} // namespace cocos2d
