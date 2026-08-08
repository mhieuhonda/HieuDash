// ============================================================
// CCWaves.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCWaves.h"

namespace cocos2d {

CCWaves::~CCWaves() {
    // 0xabb784
    this->cleanup();
}

CCWaves::~CCWaves() {
    // 0xabb770
    this->cleanup();
}

CCWaves::~CCWaves() {
    // 0xabb770
    this->cleanup();
}

void CCWaves::copyWithZone(cocos2d::CCZone*) {
    // 0xabca68
    // TODO: Implement
}

void CCWaves::initWithDuration(float, cocos2d::CCSize const&, unsigned int, float, bool, bool) {
    // 0xabc910
    // TODO: Implement
}

void CCWaves::create(float, cocos2d::CCSize const&, unsigned int, float, bool, bool) {
    // 0xabc970
    CCWaves* ret = new CCWaves();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCWaves::update(float) {
    // 0xaba9a8
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
