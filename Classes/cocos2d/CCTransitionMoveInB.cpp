// ============================================================
// CCTransitionMoveInB.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionMoveInB.h"

namespace cocos2d {

CCTransitionMoveInB::CCTransitionMoveInB() {
    // 0xaee1a0
}

CCTransitionMoveInB::CCTransitionMoveInB() {
    // 0xaee1a0
}

CCTransitionMoveInB::~CCTransitionMoveInB() {
    // 0xaeced8
    this->cleanup();
}

CCTransitionMoveInB::~CCTransitionMoveInB() {
    // 0xaecc48
    this->cleanup();
}

CCTransitionMoveInB::~CCTransitionMoveInB() {
    // 0xaecc48
    this->cleanup();
}

void CCTransitionMoveInB::initScenes() {
    // 0xaed59c
    // TODO: Implement
}

void CCTransitionMoveInB::create(float, cocos2d::CCScene*) {
    // 0xaee1d8
    CCTransitionMoveInB* ret = new CCTransitionMoveInB();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
