// ============================================================
// CCDelayTime.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCDelayTime.h"

namespace cocos2d {

CCDelayTime::~CCDelayTime() {
    // 0xabf510
    this->cleanup();
}

CCDelayTime::~CCDelayTime() {
    // 0xabf4fc
    this->cleanup();
}

CCDelayTime::~CCDelayTime() {
    // 0xabf4fc
    this->cleanup();
}

void CCDelayTime::copyWithZone(cocos2d::CCZone*) {
    // 0xac13d8
    // TODO: Implement
}

void CCDelayTime::create(float) {
    // 0xac3e74
    CCDelayTime* ret = new CCDelayTime();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCDelayTime::update(float) {
    // 0xabedb8
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCDelayTime::reverse() {
    // 0xac43d4
    // TODO: Implement
}

} // namespace cocos2d
