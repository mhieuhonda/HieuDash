// ============================================================
// CCTransitionFadeBL.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionFadeBL.h"

namespace cocos2d {

CCTransitionFadeBL::CCTransitionFadeBL() {
    // 0xaeed7c
}

CCTransitionFadeBL::CCTransitionFadeBL() {
    // 0xaeed7c
}

CCTransitionFadeBL::~CCTransitionFadeBL() {
    // 0xaed160
    this->cleanup();
}

CCTransitionFadeBL::~CCTransitionFadeBL() {
    // 0xaecd88
    this->cleanup();
}

CCTransitionFadeBL::~CCTransitionFadeBL() {
    // 0xaecd88
    this->cleanup();
}

void CCTransitionFadeBL::actionWithSize(cocos2d::CCSize const&) {
    // 0xaedb6c
    // TODO: Implement
}

void CCTransitionFadeBL::create(float, cocos2d::CCScene*) {
    // 0xaeedb4
    CCTransitionFadeBL* ret = new CCTransitionFadeBL();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
