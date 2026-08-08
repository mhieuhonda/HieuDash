// ============================================================
// CCTransitionMoveInT.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionMoveInT.h"

namespace cocos2d {

CCTransitionMoveInT::CCTransitionMoveInT() {
    // 0xaee0ec
}

CCTransitionMoveInT::CCTransitionMoveInT() {
    // 0xaee0ec
}

CCTransitionMoveInT::~CCTransitionMoveInT() {
    // 0xaeceb4
    this->cleanup();
}

CCTransitionMoveInT::~CCTransitionMoveInT() {
    // 0xaecc2c
    this->cleanup();
}

CCTransitionMoveInT::~CCTransitionMoveInT() {
    // 0xaecc2c
    this->cleanup();
}

void CCTransitionMoveInT::initScenes() {
    // 0xaed518
    // TODO: Implement
}

void CCTransitionMoveInT::create(float, cocos2d::CCScene*) {
    // 0xaee124
    CCTransitionMoveInT* ret = new CCTransitionMoveInT();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
