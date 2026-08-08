// ============================================================
// CCBlink.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCBlink.h"

namespace cocos2d {

CCBlink::~CCBlink() {
    // 0xabf6c0
    this->cleanup();
}

CCBlink::~CCBlink() {
    // 0xabf6ac
    this->cleanup();
}

CCBlink::~CCBlink() {
    // 0xabf6ac
    this->cleanup();
}

void CCBlink::copyWithZone(cocos2d::CCZone*) {
    // 0xac377c
    // TODO: Implement
}

void CCBlink::startWithTarget(cocos2d::CCNode*) {
    // 0xabf040
    // TODO: Implement
}

void CCBlink::initWithDuration(float, unsigned int) {
    // 0xac36b8
    // TODO: Implement
}

void CCBlink::stop() {
    // 0xabfbf8
    // TODO: Implement
}

void CCBlink::create(float, unsigned int) {
    // 0xac36ec
    CCBlink* ret = new CCBlink();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCBlink::update(float) {
    // 0xac0ac4
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCBlink::reverse() {
    // 0xac3770
    // TODO: Implement
}

} // namespace cocos2d
