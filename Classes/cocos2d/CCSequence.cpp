// ============================================================
// CCSequence.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCSequence.h"

namespace cocos2d {

CCSequence::~CCSequence() {
    // 0xabf290
    this->cleanup();
}

CCSequence::~CCSequence() {
    // 0xabf238
    this->cleanup();
}

CCSequence::~CCSequence() {
    // 0xabf238
    this->cleanup();
}

void CCSequence::copyWithZone(cocos2d::CCZone*) {
    // 0xac18cc
    // TODO: Implement
}

void CCSequence::startWithTarget(cocos2d::CCNode*) {
    // 0xabf0ec
    // TODO: Implement
}

void CCSequence::initWithTwoActions(cocos2d::CCFiniteTimeAction*, cocos2d::CCFiniteTimeAction*) {
    // 0xac1568
    // TODO: Implement
}

void CCSequence::createWithTwoActions(cocos2d::CCFiniteTimeAction*, cocos2d::CCFiniteTimeAction*) {
    // 0xac15c0
    // TODO: Implement
}

void CCSequence::createWithVariableList(cocos2d::CCFiniteTimeAction*, std::__va_list) {
    // 0xac1644
    // TODO: Implement
}

void CCSequence::stop() {
    // 0xabfb38
    // TODO: Implement
}

void CCSequence::create(cocos2d::CCFiniteTimeAction*, ...) {
    // 0xac1718
    CCSequence* ret = new CCSequence();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCSequence::create(cocos2d::CCArray*) {
    // 0xac17d0
    CCSequence* ret = new CCSequence();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCSequence::update(float) {
    // 0xabe9cc
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCSequence::reverse() {
    // 0xac187c
    // TODO: Implement
}

} // namespace cocos2d
