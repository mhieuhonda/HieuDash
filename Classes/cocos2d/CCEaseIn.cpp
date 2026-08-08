// ============================================================
// CCEaseIn.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseIn.h"

namespace cocos2d {

CCEaseIn::~CCEaseIn() {
    // 0xab6440
    this->cleanup();
}

CCEaseIn::~CCEaseIn() {
    // 0xab642c
    this->cleanup();
}

CCEaseIn::~CCEaseIn() {
    // 0xab642c
    this->cleanup();
}

void CCEaseIn::copyWithZone(cocos2d::CCZone*) {
    // 0xab7e10
    // TODO: Implement
}

void CCEaseIn::create(cocos2d::CCActionInterval*, float) {
    // 0xab80b0
    CCEaseIn* ret = new CCEaseIn();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseIn::update(float) {
    // 0xab69a8
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseIn::reverse() {
    // 0xab8154
    // TODO: Implement
}

} // namespace cocos2d
