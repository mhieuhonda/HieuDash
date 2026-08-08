// ============================================================
// CCEaseBounceIn.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseBounceIn.h"

namespace cocos2d {

CCEaseBounceIn::~CCEaseBounceIn() {
    // 0xab6638
    this->cleanup();
}

CCEaseBounceIn::~CCEaseBounceIn() {
    // 0xab6624
    this->cleanup();
}

CCEaseBounceIn::~CCEaseBounceIn() {
    // 0xab6624
    this->cleanup();
}

void CCEaseBounceIn::copyWithZone(cocos2d::CCZone*) {
    // 0xab770c
    // TODO: Implement
}

void CCEaseBounceIn::create(cocos2d::CCActionInterval*) {
    // 0xab9150
    CCEaseBounceIn* ret = new CCEaseBounceIn();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseBounceIn::update(float) {
    // 0xab9060
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseBounceIn::reverse() {
    // 0xab92ac
    // TODO: Implement
}

} // namespace cocos2d
