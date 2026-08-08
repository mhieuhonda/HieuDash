// ============================================================
// CCEaseExponentialInOut.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseExponentialInOut.h"

namespace cocos2d {

CCEaseExponentialInOut::~CCEaseExponentialInOut() {
    // 0xab6878
    this->cleanup();
}

CCEaseExponentialInOut::~CCEaseExponentialInOut() {
    // 0xab6864
    this->cleanup();
}

CCEaseExponentialInOut::~CCEaseExponentialInOut() {
    // 0xab6864
    this->cleanup();
}

void CCEaseExponentialInOut::copyWithZone(cocos2d::CCZone*) {
    // 0xab72d4
    // TODO: Implement
}

void CCEaseExponentialInOut::create(cocos2d::CCActionInterval*) {
    // 0xab84c8
    CCEaseExponentialInOut* ret = new CCEaseExponentialInOut();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseExponentialInOut::update(float) {
    // 0xab6b6c
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseExponentialInOut::reverse() {
    // 0xab8564
    // TODO: Implement
}

} // namespace cocos2d
