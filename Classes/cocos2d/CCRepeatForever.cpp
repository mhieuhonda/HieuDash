// ============================================================
// CCRepeatForever.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCRepeatForever.h"

namespace cocos2d {

CCRepeatForever::~CCRepeatForever() {
    // 0xabf370
    this->cleanup();
}

CCRepeatForever::~CCRepeatForever() {
    // 0xabf324
    this->cleanup();
}

CCRepeatForever::~CCRepeatForever() {
    // 0xabf324
    this->cleanup();
}

void CCRepeatForever::copyWithZone(cocos2d::CCZone*) {
    // 0xac1d20
    // TODO: Implement
}

void CCRepeatForever::initWithAction(cocos2d::CCActionInterval*) {
    // 0xac1c40
    // TODO: Implement
}

void CCRepeatForever::startWithTarget(cocos2d::CCNode*) {
    // 0xabeebc
    // TODO: Implement
}

void CCRepeatForever::step(float) {
    // 0xac0cec
    // TODO: Implement
}

void CCRepeatForever::create(cocos2d::CCActionInterval*) {
    // 0xac1c74
    CCRepeatForever* ret = new CCRepeatForever();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCRepeatForever::isDone() {
    // 0xabeb74
    // TODO: Implement
}

void CCRepeatForever::reverse() {
    // 0xac1cfc
    // TODO: Implement
}

} // namespace cocos2d
