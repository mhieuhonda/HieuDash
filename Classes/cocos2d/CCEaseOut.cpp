// ============================================================
// CCEaseOut.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseOut.h"

namespace cocos2d {

CCEaseOut::~CCEaseOut() {
    // 0xab63f8
    this->cleanup();
}

CCEaseOut::~CCEaseOut() {
    // 0xab63e4
    this->cleanup();
}

CCEaseOut::~CCEaseOut() {
    // 0xab63e4
    this->cleanup();
}

void CCEaseOut::copyWithZone(cocos2d::CCZone*) {
    // 0xab7ef0
    // TODO: Implement
}

void CCEaseOut::create(cocos2d::CCActionInterval*, float) {
    // 0xab8190
    CCEaseOut* ret = new CCEaseOut();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseOut::update(float) {
    // 0xab69e0
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseOut::reverse() {
    // 0xab8234
    // TODO: Implement
}

} // namespace cocos2d
