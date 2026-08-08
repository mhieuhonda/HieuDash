// ============================================================
// CCFlipY.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCFlipY.h"

namespace cocos2d {

CCFlipY::~CCFlipY() {
    // 0xabd23c
    this->cleanup();
}

CCFlipY::~CCFlipY() {
    // 0xabd228
    this->cleanup();
}

CCFlipY::~CCFlipY() {
    // 0xabd228
    this->cleanup();
}

void CCFlipY::copyWithZone(cocos2d::CCZone*) {
    // 0xabe1c0
    // TODO: Implement
}

void CCFlipY::initWithFlipY(bool) {
    // 0xabe128
    // TODO: Implement
}

void CCFlipY::create(bool) {
    // 0xabe134
    CCFlipY* ret = new CCFlipY();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCFlipY::update(float) {
    // 0xabd06c
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCFlipY::reverse() {
    // 0xabe1b4
    // TODO: Implement
}

} // namespace cocos2d
