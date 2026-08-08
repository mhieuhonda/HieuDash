// ============================================================
// CCAccelDeccelAmplitude.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCAccelDeccelAmplitude.h"

namespace cocos2d {

CCAccelDeccelAmplitude::~CCAccelDeccelAmplitude() {
    // 0xab98fc
    this->cleanup();
}

CCAccelDeccelAmplitude::~CCAccelDeccelAmplitude() {
    // 0xab98b0
    this->cleanup();
}

CCAccelDeccelAmplitude::~CCAccelDeccelAmplitude() {
    // 0xab98b0
    this->cleanup();
}

void CCAccelDeccelAmplitude::initWithAction(cocos2d::CCAction*, float) {
    // 0xaba01c
    // TODO: Implement
}

void CCAccelDeccelAmplitude::startWithTarget(cocos2d::CCNode*) {
    // 0xab9618
    // TODO: Implement
}

void CCAccelDeccelAmplitude::create(cocos2d::CCAction*, float) {
    // 0xaba068
    CCAccelDeccelAmplitude* ret = new CCAccelDeccelAmplitude();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCAccelDeccelAmplitude::update(float) {
    // 0xab9b74
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCAccelDeccelAmplitude::reverse() {
    // 0xaba114
    // TODO: Implement
}

} // namespace cocos2d
