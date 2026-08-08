// ============================================================
// CCEaseBounceOut.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseBounceOut.h"

namespace cocos2d {

CCEaseBounceOut::~CCEaseBounceOut() {
    // 0xab65f0
    this->cleanup();
}

CCEaseBounceOut::~CCEaseBounceOut() {
    // 0xab65dc
    this->cleanup();
}

CCEaseBounceOut::~CCEaseBounceOut() {
    // 0xab65dc
    this->cleanup();
}

void CCEaseBounceOut::copyWithZone(cocos2d::CCZone*) {
    // 0xab77e4
    // TODO: Implement
}

void CCEaseBounceOut::create(cocos2d::CCActionInterval*) {
    // 0xab9210
    CCEaseBounceOut* ret = new CCEaseBounceOut();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseBounceOut::update(float) {
    // 0xab90a8
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseBounceOut::reverse() {
    // 0xab91ec
    // TODO: Implement
}

} // namespace cocos2d
