// ============================================================
// CCStopGrid.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCStopGrid.h"

namespace cocos2d {

CCStopGrid::~CCStopGrid() {
    // 0xab9b40
    this->cleanup();
}

CCStopGrid::~CCStopGrid() {
    // 0xab9b2c
    this->cleanup();
}

CCStopGrid::~CCStopGrid() {
    // 0xab9b2c
    this->cleanup();
}

void CCStopGrid::startWithTarget(cocos2d::CCNode*) {
    // 0xab9c6c
    // TODO: Implement
}

void CCStopGrid::create() {
    // 0xaba3a0
    CCStopGrid* ret = new CCStopGrid();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
