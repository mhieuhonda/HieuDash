// ============================================================
// CCMoveTo.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCMoveTo.h"

namespace cocos2d {

CCMoveTo::~CCMoveTo() {
    // 0xabf990
    this->cleanup();
}

CCMoveTo::~CCMoveTo() {
    // 0xabf97c
    this->cleanup();
}

CCMoveTo::~CCMoveTo() {
    // 0xabf97c
    this->cleanup();
}

void CCMoveTo::copyWithZone(cocos2d::CCZone*) {
    // 0xac24e8
    // TODO: Implement
}

void CCMoveTo::startWithTarget(cocos2d::CCNode*) {
    // 0xac048c
    // TODO: Implement
}

void CCMoveTo::initWithDuration(float, cocos2d::CCPoint const&) {
    // 0xac23f4
    // TODO: Implement
}

void CCMoveTo::create(float, cocos2d::CCPoint const&) {
    // 0xac2434
    CCMoveTo* ret = new CCMoveTo();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
