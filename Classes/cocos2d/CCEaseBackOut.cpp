// ============================================================
// CCEaseBackOut.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseBackOut.h"

namespace cocos2d {

CCEaseBackOut::~CCEaseBackOut() {
    // 0xab64d0
    this->cleanup();
}

CCEaseBackOut::~CCEaseBackOut() {
    // 0xab64bc
    this->cleanup();
}

CCEaseBackOut::~CCEaseBackOut() {
    // 0xab64bc
    this->cleanup();
}

void CCEaseBackOut::copyWithZone(cocos2d::CCZone*) {
    // 0xab7a6c
    // TODO: Implement
}

void CCEaseBackOut::create(cocos2d::CCActionInterval*) {
    // 0xab9450
    CCEaseBackOut* ret = new CCEaseBackOut();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseBackOut::update(float) {
    // 0xab6214
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseBackOut::reverse() {
    // 0xab942c
    // TODO: Implement
}

} // namespace cocos2d
