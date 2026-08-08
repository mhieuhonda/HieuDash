// ============================================================
// CCAccelAmplitude.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCAccelAmplitude.h"

namespace cocos2d {

CCAccelAmplitude::~CCAccelAmplitude() {
    // 0xab9978
    this->cleanup();
}

CCAccelAmplitude::~CCAccelAmplitude() {
    // 0xab9920
    this->cleanup();
}

CCAccelAmplitude::~CCAccelAmplitude() {
    // 0xab9920
    this->cleanup();
}

void CCAccelAmplitude::initWithAction(cocos2d::CCAction*, float) {
    // 0xaba148
    // TODO: Implement
}

void CCAccelAmplitude::startWithTarget(cocos2d::CCNode*) {
    // 0xab9654
    // TODO: Implement
}

void CCAccelAmplitude::create(cocos2d::CCAction*, float) {
    // 0xaba194
    CCAccelAmplitude* ret = new CCAccelAmplitude();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCAccelAmplitude::update(float) {
    // 0xab9bb4
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCAccelAmplitude::reverse() {
    // 0xaba240
    // TODO: Implement
}

} // namespace cocos2d
