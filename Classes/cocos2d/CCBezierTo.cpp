// ============================================================
// CCBezierTo.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCBezierTo.h"

namespace cocos2d {

CCBezierTo::~CCBezierTo() {
    // 0xabf7e0
    this->cleanup();
}

CCBezierTo::~CCBezierTo() {
    // 0xabf7cc
    this->cleanup();
}

CCBezierTo::~CCBezierTo() {
    // 0xabf7cc
    this->cleanup();
}

void CCBezierTo::copyWithZone(cocos2d::CCZone*) {
    // 0xac2fd8
    // TODO: Implement
}

void CCBezierTo::startWithTarget(cocos2d::CCNode*) {
    // 0xac050c
    // TODO: Implement
}

void CCBezierTo::initWithDuration(float, cocos2d::_ccBezierConfig const&) {
    // 0xac310c
    // TODO: Implement
}

void CCBezierTo::create(float, cocos2d::_ccBezierConfig const&) {
    // 0xac3160
    CCBezierTo* ret = new CCBezierTo();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
