// ============================================================
// CCEaseExponentialIn.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseExponentialIn.h"

namespace cocos2d {

CCEaseExponentialIn::~CCEaseExponentialIn() {
    // 0xab6908
    this->cleanup();
}

CCEaseExponentialIn::~CCEaseExponentialIn() {
    // 0xab68f4
    this->cleanup();
}

CCEaseExponentialIn::~CCEaseExponentialIn() {
    // 0xab68f4
    this->cleanup();
}

void CCEaseExponentialIn::copyWithZone(cocos2d::CCZone*) {
    // 0xab7124
    // TODO: Implement
}

void CCEaseExponentialIn::create(cocos2d::CCActionInterval*) {
    // 0xab8348
    CCEaseExponentialIn* ret = new CCEaseExponentialIn();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseExponentialIn::update(float) {
    // 0xab6aa8
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseExponentialIn::reverse() {
    // 0xab84a4
    // TODO: Implement
}

} // namespace cocos2d
