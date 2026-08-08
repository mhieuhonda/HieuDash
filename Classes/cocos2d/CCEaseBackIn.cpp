// ============================================================
// CCEaseBackIn.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseBackIn.h"

namespace cocos2d {

CCEaseBackIn::~CCEaseBackIn() {
    // 0xab6518
    this->cleanup();
}

CCEaseBackIn::~CCEaseBackIn() {
    // 0xab6504
    this->cleanup();
}

CCEaseBackIn::~CCEaseBackIn() {
    // 0xab6504
    this->cleanup();
}

void CCEaseBackIn::copyWithZone(cocos2d::CCZone*) {
    // 0xab7994
    // TODO: Implement
}

void CCEaseBackIn::create(cocos2d::CCActionInterval*) {
    // 0xab9390
    CCEaseBackIn* ret = new CCEaseBackIn();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseBackIn::update(float) {
    // 0xab61d4
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseBackIn::reverse() {
    // 0xab94ec
    // TODO: Implement
}

} // namespace cocos2d
