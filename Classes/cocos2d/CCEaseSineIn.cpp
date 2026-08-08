// ============================================================
// CCEaseSineIn.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseSineIn.h"

namespace cocos2d {

CCEaseSineIn::~CCEaseSineIn() {
    // 0xab6830
    this->cleanup();
}

CCEaseSineIn::~CCEaseSineIn() {
    // 0xab681c
    this->cleanup();
}

CCEaseSineIn::~CCEaseSineIn() {
    // 0xab681c
    this->cleanup();
}

void CCEaseSineIn::copyWithZone(cocos2d::CCZone*) {
    // 0xab73ac
    // TODO: Implement
}

void CCEaseSineIn::create(cocos2d::CCActionInterval*) {
    // 0xab8588
    CCEaseSineIn* ret = new CCEaseSineIn();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseSineIn::update(float) {
    // 0xab6c10
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseSineIn::reverse() {
    // 0xab86e4
    // TODO: Implement
}

} // namespace cocos2d
