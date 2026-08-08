// ============================================================
// CCReuseGrid.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCReuseGrid.h"

namespace cocos2d {

CCReuseGrid::~CCReuseGrid() {
    // 0xab9af8
    this->cleanup();
}

CCReuseGrid::~CCReuseGrid() {
    // 0xab9ae4
    this->cleanup();
}

CCReuseGrid::~CCReuseGrid() {
    // 0xab9ae4
    this->cleanup();
}

void CCReuseGrid::initWithTimes(int) {
    // 0xaba3fc
    // TODO: Implement
}

void CCReuseGrid::startWithTarget(cocos2d::CCNode*) {
    // 0xab9cbc
    // TODO: Implement
}

void CCReuseGrid::create(int) {
    // 0xaba408
    CCReuseGrid* ret = new CCReuseGrid();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
