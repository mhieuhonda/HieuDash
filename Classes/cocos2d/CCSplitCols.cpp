// ============================================================
// CCSplitCols.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCSplitCols.h"

namespace cocos2d {

CCSplitCols::~CCSplitCols() {
    // 0xac770c
    this->cleanup();
}

CCSplitCols::~CCSplitCols() {
    // 0xac76f8
    this->cleanup();
}

CCSplitCols::~CCSplitCols() {
    // 0xac76f8
    this->cleanup();
}

void CCSplitCols::copyWithZone(cocos2d::CCZone*) {
    // 0xac6fa4
    // TODO: Implement
}

void CCSplitCols::startWithTarget(cocos2d::CCNode*) {
    // 0xac82d0
    // TODO: Implement
}

void CCSplitCols::initWithDuration(float, unsigned int) {
    // 0xac7a44
    // TODO: Implement
}

void CCSplitCols::create(float, unsigned int) {
    // 0xac9aa8
    CCSplitCols* ret = new CCSplitCols();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCSplitCols::update(float) {
    // 0xac74c8
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
