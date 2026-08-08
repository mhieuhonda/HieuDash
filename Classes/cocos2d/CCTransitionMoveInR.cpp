// ============================================================
// CCTransitionMoveInR.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionMoveInR.h"

namespace cocos2d {

CCTransitionMoveInR::CCTransitionMoveInR() {
    // 0xaee038
}

CCTransitionMoveInR::CCTransitionMoveInR() {
    // 0xaee038
}

CCTransitionMoveInR::~CCTransitionMoveInR() {
    // 0xaece90
    this->cleanup();
}

CCTransitionMoveInR::~CCTransitionMoveInR() {
    // 0xaecc10
    this->cleanup();
}

CCTransitionMoveInR::~CCTransitionMoveInR() {
    // 0xaecc10
    this->cleanup();
}

void CCTransitionMoveInR::initScenes() {
    // 0xaed494
    // TODO: Implement
}

void CCTransitionMoveInR::create(float, cocos2d::CCScene*) {
    // 0xaee070
    CCTransitionMoveInR* ret = new CCTransitionMoveInR();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
