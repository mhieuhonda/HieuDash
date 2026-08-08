// ============================================================
// CCSplitRows.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCSplitRows.h"

namespace cocos2d {

CCSplitRows::~CCSplitRows() {
    // 0xac7754
    this->cleanup();
}

CCSplitRows::~CCSplitRows() {
    // 0xac7740
    this->cleanup();
}

CCSplitRows::~CCSplitRows() {
    // 0xac7740
    this->cleanup();
}

void CCSplitRows::copyWithZone(cocos2d::CCZone*) {
    // 0xac6e9c
    // TODO: Implement
}

void CCSplitRows::startWithTarget(cocos2d::CCNode*) {
    // 0xac8264
    // TODO: Implement
}

void CCSplitRows::initWithDuration(float, unsigned int) {
    // 0xac79c8
    // TODO: Implement
}

void CCSplitRows::create(float, unsigned int) {
    // 0xac99d8
    CCSplitRows* ret = new CCSplitRows();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCSplitRows::update(float) {
    // 0xac7390
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
