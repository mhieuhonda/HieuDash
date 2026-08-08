// ============================================================
// CCShow.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCShow.h"

namespace cocos2d {

CCShow::~CCShow() {
    // 0xabd3a4
    this->cleanup();
}

CCShow::~CCShow() {
    // 0xabd390
    this->cleanup();
}

CCShow::~CCShow() {
    // 0xabd390
    this->cleanup();
}

void CCShow::copyWithZone(cocos2d::CCZone*) {
    // 0xabd950
    // TODO: Implement
}

void CCShow::create() {
    // 0xabddf0
    CCShow* ret = new CCShow();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCShow::update(float) {
    // 0xabcea4
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCShow::reverse() {
    // 0xabde7c
    // TODO: Implement
}

} // namespace cocos2d
