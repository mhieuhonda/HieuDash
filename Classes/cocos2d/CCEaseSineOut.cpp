// ============================================================
// CCEaseSineOut.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseSineOut.h"

namespace cocos2d {

CCEaseSineOut::~CCEaseSineOut() {
    // 0xab67e8
    this->cleanup();
}

CCEaseSineOut::~CCEaseSineOut() {
    // 0xab67d4
    this->cleanup();
}

CCEaseSineOut::~CCEaseSineOut() {
    // 0xab67d4
    this->cleanup();
}

void CCEaseSineOut::copyWithZone(cocos2d::CCZone*) {
    // 0xab7484
    // TODO: Implement
}

void CCEaseSineOut::create(cocos2d::CCActionInterval*) {
    // 0xab8648
    CCEaseSineOut* ret = new CCEaseSineOut();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseSineOut::update(float) {
    // 0xab6c98
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseSineOut::reverse() {
    // 0xab8624
    // TODO: Implement
}

} // namespace cocos2d
