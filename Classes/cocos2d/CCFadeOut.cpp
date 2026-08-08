// ============================================================
// CCFadeOut.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCFadeOut.h"

namespace cocos2d {

CCFadeOut::~CCFadeOut() {
    // 0xabf630
    this->cleanup();
}

CCFadeOut::~CCFadeOut() {
    // 0xabf61c
    this->cleanup();
}

CCFadeOut::~CCFadeOut() {
    // 0xabf61c
    this->cleanup();
}

void CCFadeOut::copyWithZone(cocos2d::CCZone*) {
    // 0xac1324
    // TODO: Implement
}

void CCFadeOut::create(float) {
    // 0xac38d0
    CCFadeOut* ret = new CCFadeOut();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCFadeOut::update(float) {
    // 0xabfd04
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCFadeOut::reverse() {
    // 0xac38c8
    // TODO: Implement
}

} // namespace cocos2d
