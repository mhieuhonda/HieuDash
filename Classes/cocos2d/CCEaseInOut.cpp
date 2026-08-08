// ============================================================
// CCEaseInOut.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseInOut.h"

namespace cocos2d {

CCEaseInOut::~CCEaseInOut() {
    // 0xab63b0
    this->cleanup();
}

CCEaseInOut::~CCEaseInOut() {
    // 0xab639c
    this->cleanup();
}

CCEaseInOut::~CCEaseInOut() {
    // 0xab639c
    this->cleanup();
}

void CCEaseInOut::copyWithZone(cocos2d::CCZone*) {
    // 0xab7fd0
    // TODO: Implement
}

void CCEaseInOut::create(cocos2d::CCActionInterval*, float) {
    // 0xab8270
    CCEaseInOut* ret = new CCEaseInOut();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseInOut::update(float) {
    // 0xab6a20
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseInOut::reverse() {
    // 0xab8314
    // TODO: Implement
}

} // namespace cocos2d
