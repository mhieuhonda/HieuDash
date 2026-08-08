// ============================================================
// CCHide.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCHide.h"

namespace cocos2d {

CCHide::~CCHide() {
    // 0xabd35c
    this->cleanup();
}

CCHide::~CCHide() {
    // 0xabd348
    this->cleanup();
}

CCHide::~CCHide() {
    // 0xabd348
    this->cleanup();
}

void CCHide::copyWithZone(cocos2d::CCZone*) {
    // 0xabd9e4
    // TODO: Implement
}

void CCHide::create() {
    // 0xabde38
    CCHide* ret = new CCHide();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCHide::update(float) {
    // 0xabcecc
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCHide::reverse() {
    // 0xabde34
    // TODO: Implement
}

} // namespace cocos2d
