// ============================================================
// CCBezierBy.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCBezierBy.h"

namespace cocos2d {

CCBezierBy::~CCBezierBy() {
    // 0xabf798
    this->cleanup();
}

CCBezierBy::~CCBezierBy() {
    // 0xabf784
    this->cleanup();
}

CCBezierBy::~CCBezierBy() {
    // 0xabf784
    this->cleanup();
}

void CCBezierBy::copyWithZone(cocos2d::CCZone*) {
    // 0xac2ed0
    // TODO: Implement
}

void CCBezierBy::startWithTarget(cocos2d::CCNode*) {
    // 0xac03c4
    // TODO: Implement
}

void CCBezierBy::initWithDuration(float, cocos2d::_ccBezierConfig const&) {
    // 0xac2cc4
    // TODO: Implement
}

void CCBezierBy::create(float, cocos2d::_ccBezierConfig const&) {
    // 0xac2d24
    CCBezierBy* ret = new CCBezierBy();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCBezierBy::update(float) {
    // 0xac0d94
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCBezierBy::reverse() {
    // 0xac2dd4
    // TODO: Implement
}

} // namespace cocos2d
