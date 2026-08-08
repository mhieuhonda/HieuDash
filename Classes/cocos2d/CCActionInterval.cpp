// ============================================================
// CCActionInterval.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCActionInterval.h"

namespace cocos2d {

CCActionInterval::~CCActionInterval() {
    // 0xabf204
    this->cleanup();
}

CCActionInterval::~CCActionInterval() {
    // 0xabf1f0
    this->cleanup();
}

CCActionInterval::~CCActionInterval() {
    // 0xabf1f0
    this->cleanup();
}

void CCActionInterval::copyWithZone(cocos2d::CCZone*) {
    // 0xac10b0
    // TODO: Implement
}

void CCActionInterval::startWithTarget(cocos2d::CCNode*) {
    // 0xabee8c
    // TODO: Implement
}

void CCActionInterval::getAmplitudeRate() {
    // 0xac1560
    // TODO: Implement
}

void CCActionInterval::initWithDuration(float) {
    // 0xac0ff0
    // TODO: Implement
}

void CCActionInterval::setAmplitudeRate(float) {
    // 0xac155c
    // TODO: Set m_amplitudeRate
}

void CCActionInterval::step(float) {
    // 0xabe868
    // TODO: Implement
}

void CCActionInterval::create(float) {
    // 0xac103c
    CCActionInterval* ret = new CCActionInterval();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCActionInterval::isDone() {
    // 0xabe854
    // TODO: Implement
}

void CCActionInterval::reverse() {
    // 0xabe9c4
    // TODO: Implement
}

} // namespace cocos2d
