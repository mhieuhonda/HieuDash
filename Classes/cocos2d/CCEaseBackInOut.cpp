// ============================================================
// CCEaseBackInOut.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseBackInOut.h"

namespace cocos2d {

CCEaseBackInOut::~CCEaseBackInOut() {
    // 0xab6488
    this->cleanup();
}

CCEaseBackInOut::~CCEaseBackInOut() {
    // 0xab6474
    this->cleanup();
}

CCEaseBackInOut::~CCEaseBackInOut() {
    // 0xab6474
    this->cleanup();
}

void CCEaseBackInOut::copyWithZone(cocos2d::CCZone*) {
    // 0xab7b44
    // TODO: Implement
}

void CCEaseBackInOut::create(cocos2d::CCActionInterval*) {
    // 0xab9510
    CCEaseBackInOut* ret = new CCEaseBackInOut();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseBackInOut::update(float) {
    // 0xab625c
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseBackInOut::reverse() {
    // 0xab95ac
    // TODO: Implement
}

} // namespace cocos2d
