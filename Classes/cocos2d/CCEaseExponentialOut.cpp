// ============================================================
// CCEaseExponentialOut.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseExponentialOut.h"

namespace cocos2d {

CCEaseExponentialOut::~CCEaseExponentialOut() {
    // 0xab68c0
    this->cleanup();
}

CCEaseExponentialOut::~CCEaseExponentialOut() {
    // 0xab68ac
    this->cleanup();
}

CCEaseExponentialOut::~CCEaseExponentialOut() {
    // 0xab68ac
    this->cleanup();
}

void CCEaseExponentialOut::copyWithZone(cocos2d::CCZone*) {
    // 0xab71fc
    // TODO: Implement
}

void CCEaseExponentialOut::create(cocos2d::CCActionInterval*) {
    // 0xab8408
    CCEaseExponentialOut* ret = new CCEaseExponentialOut();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseExponentialOut::update(float) {
    // 0xab6b0c
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseExponentialOut::reverse() {
    // 0xab83e4
    // TODO: Implement
}

} // namespace cocos2d
