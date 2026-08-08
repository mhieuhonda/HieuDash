// ============================================================
// CCLiquid.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCLiquid.h"

namespace cocos2d {

CCLiquid::~CCLiquid() {
    // 0xabb7cc
    this->cleanup();
}

CCLiquid::~CCLiquid() {
    // 0xabb7b8
    this->cleanup();
}

CCLiquid::~CCLiquid() {
    // 0xabb7b8
    this->cleanup();
}

void CCLiquid::copyWithZone(cocos2d::CCZone*) {
    // 0xabc810
    // TODO: Implement
}

void CCLiquid::initWithDuration(float, cocos2d::CCSize const&, unsigned int, float) {
    // 0xabc6f8
    // TODO: Implement
}

void CCLiquid::create(float, cocos2d::CCSize const&, unsigned int, float) {
    // 0xabc740
    CCLiquid* ret = new CCLiquid();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLiquid::update(float) {
    // 0xaba81c
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
