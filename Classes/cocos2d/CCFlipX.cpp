// ============================================================
// CCFlipX.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCFlipX.h"

namespace cocos2d {

CCFlipX::~CCFlipX() {
    // 0xabd284
    this->cleanup();
}

CCFlipX::~CCFlipX() {
    // 0xabd270
    this->cleanup();
}

CCFlipX::~CCFlipX() {
    // 0xabd270
    this->cleanup();
}

void CCFlipX::copyWithZone(cocos2d::CCZone*) {
    // 0xabe078
    // TODO: Implement
}

void CCFlipX::initWithFlipX(bool) {
    // 0xabdfe0
    // TODO: Implement
}

void CCFlipX::create(bool) {
    // 0xabdfec
    CCFlipX* ret = new CCFlipX();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCFlipX::update(float) {
    // 0xabd05c
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCFlipX::reverse() {
    // 0xabe06c
    // TODO: Implement
}

} // namespace cocos2d
