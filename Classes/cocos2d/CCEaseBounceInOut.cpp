// ============================================================
// CCEaseBounceInOut.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseBounceInOut.h"

namespace cocos2d {

CCEaseBounceInOut::~CCEaseBounceInOut() {
    // 0xab65a8
    this->cleanup();
}

CCEaseBounceInOut::~CCEaseBounceInOut() {
    // 0xab6594
    this->cleanup();
}

CCEaseBounceInOut::~CCEaseBounceInOut() {
    // 0xab6594
    this->cleanup();
}

void CCEaseBounceInOut::copyWithZone(cocos2d::CCZone*) {
    // 0xab78bc
    // TODO: Implement
}

void CCEaseBounceInOut::create(cocos2d::CCActionInterval*) {
    // 0xab92d0
    CCEaseBounceInOut* ret = new CCEaseBounceInOut();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseBounceInOut::update(float) {
    // 0xab90dc
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseBounceInOut::reverse() {
    // 0xab936c
    // TODO: Implement
}

} // namespace cocos2d
