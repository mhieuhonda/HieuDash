// ============================================================
// CCFadeIn.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCFadeIn.h"

namespace cocos2d {

CCFadeIn::~CCFadeIn() {
    // 0xabf678
    this->cleanup();
}

CCFadeIn::~CCFadeIn() {
    // 0xabf664
    this->cleanup();
}

CCFadeIn::~CCFadeIn() {
    // 0xabf664
    this->cleanup();
}

void CCFadeIn::copyWithZone(cocos2d::CCZone*) {
    // 0xac1270
    // TODO: Implement
}

void CCFadeIn::create(float) {
    // 0xac3854
    CCFadeIn* ret = new CCFadeIn();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCFadeIn::update(float) {
    // 0xabfca8
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCFadeIn::reverse() {
    // 0xac3944
    // TODO: Implement
}

} // namespace cocos2d
