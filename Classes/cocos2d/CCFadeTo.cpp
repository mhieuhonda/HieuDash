// ============================================================
// CCFadeTo.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCFadeTo.h"

namespace cocos2d {

CCFadeTo::~CCFadeTo() {
    // 0xabf5e8
    this->cleanup();
}

CCFadeTo::~CCFadeTo() {
    // 0xabf5d4
    this->cleanup();
}

CCFadeTo::~CCFadeTo() {
    // 0xabf5d4
    this->cleanup();
}

void CCFadeTo::copyWithZone(cocos2d::CCZone*) {
    // 0xac39f8
    // TODO: Implement
}

void CCFadeTo::startWithTarget(cocos2d::CCNode*) {
    // 0xabfd68
    // TODO: Implement
}

void CCFadeTo::initWithDuration(float, unsigned char) {
    // 0xac394c
    // TODO: Implement
}

void CCFadeTo::create(float, unsigned char) {
    // 0xac397c
    CCFadeTo* ret = new CCFadeTo();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCFadeTo::update(float) {
    // 0xabfdc0
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
