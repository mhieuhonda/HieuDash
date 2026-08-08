// ============================================================
// CCPlace.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCPlace.h"

namespace cocos2d {

CCPlace::~CCPlace() {
    // 0xabd1f4
    this->cleanup();
}

CCPlace::~CCPlace() {
    // 0xabd1e0
    this->cleanup();
}

CCPlace::~CCPlace() {
    // 0xabd1e0
    this->cleanup();
}

void CCPlace::copyWithZone(cocos2d::CCZone*) {
    // 0xabe310
    // TODO: Implement
}

void CCPlace::initWithPosition(cocos2d::CCPoint const&) {
    // 0xabe270
    // TODO: Implement
}

void CCPlace::create(cocos2d::CCPoint const&) {
    // 0xabe28c
    CCPlace* ret = new CCPlace();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCPlace::update(float) {
    // 0xabcf5c
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
