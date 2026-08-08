// ============================================================
// CCActionTween.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCActionTween.h"

namespace cocos2d {

CCActionTween::~CCActionTween() {
    // 0xac9c1c
    this->cleanup();
}

CCActionTween::~CCActionTween() {
    // 0xac9cec
    this->cleanup();
}

CCActionTween::~CCActionTween() {
    // 0xac9cec
    this->cleanup();
}

void CCActionTween::startWithTarget(cocos2d::CCNode*) {
    // 0xac9b78
    // TODO: Implement
}

void CCActionTween::initWithDuration(float, char const*, float, float) {
    // 0xac9db4
    // TODO: Implement
}

void CCActionTween::updateTargetValue(float) {
    // 0xac9f34
    // TODO: Implement
}

void CCActionTween::create(float, char const*, float, float) {
    // 0xac9e20
    CCActionTween* ret = new CCActionTween();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCActionTween::create(float, int, float, float) {
    // 0xac9ef0
    CCActionTween* ret = new CCActionTween();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCActionTween::update(float) {
    // 0xac9ba8
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCActionTween::reverse() {
    // 0xac9f1c
    // TODO: Implement
}

} // namespace cocos2d
