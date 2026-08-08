// ============================================================
// CCMoveBy.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCMoveBy.h"

namespace cocos2d {

CCMoveBy::~CCMoveBy() {
    // 0xabf948
    this->cleanup();
}

CCMoveBy::~CCMoveBy() {
    // 0xabf934
    this->cleanup();
}

CCMoveBy::~CCMoveBy() {
    // 0xabf934
    this->cleanup();
}

void CCMoveBy::copyWithZone(cocos2d::CCZone*) {
    // 0xac2300
    // TODO: Implement
}

void CCMoveBy::startWithTarget(cocos2d::CCNode*) {
    // 0xac0334
    // TODO: Implement
}

void CCMoveBy::initWithDuration(float, cocos2d::CCPoint const&) {
    // 0xac21b0
    // TODO: Implement
}

void CCMoveBy::create(float, cocos2d::CCPoint const&) {
    // 0xac21f0
    CCMoveBy* ret = new CCMoveBy();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMoveBy::update(float) {
    // 0xac05b4
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCMoveBy::reverse() {
    // 0xac228c
    // TODO: Implement
}

} // namespace cocos2d
