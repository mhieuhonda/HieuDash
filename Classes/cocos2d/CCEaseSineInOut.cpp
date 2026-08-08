// ============================================================
// CCEaseSineInOut.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseSineInOut.h"

namespace cocos2d {

CCEaseSineInOut::~CCEaseSineInOut() {
    // 0xab67a0
    this->cleanup();
}

CCEaseSineInOut::~CCEaseSineInOut() {
    // 0xab678c
    this->cleanup();
}

CCEaseSineInOut::~CCEaseSineInOut() {
    // 0xab678c
    this->cleanup();
}

void CCEaseSineInOut::copyWithZone(cocos2d::CCZone*) {
    // 0xab755c
    // TODO: Implement
}

void CCEaseSineInOut::create(cocos2d::CCActionInterval*) {
    // 0xab8708
    CCEaseSineInOut* ret = new CCEaseSineInOut();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseSineInOut::update(float) {
    // 0xab6c50
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseSineInOut::reverse() {
    // 0xab87a4
    // TODO: Implement
}

} // namespace cocos2d
