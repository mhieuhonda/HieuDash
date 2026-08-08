// ============================================================
// CCScaleBy.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCScaleBy.h"

namespace cocos2d {

CCScaleBy::~CCScaleBy() {
    // 0xabf750
    this->cleanup();
}

CCScaleBy::~CCScaleBy() {
    // 0xabf73c
    this->cleanup();
}

CCScaleBy::~CCScaleBy() {
    // 0xabf73c
    this->cleanup();
}

void CCScaleBy::copyWithZone(cocos2d::CCZone*) {
    // 0xac34a8
    // TODO: Implement
}

void CCScaleBy::startWithTarget(cocos2d::CCNode*) {
    // 0xabf000
    // TODO: Implement
}

void CCScaleBy::create(float, float) {
    // 0xac358c
    CCScaleBy* ret = new CCScaleBy();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCScaleBy::create(float, float, float) {
    // 0xac3610
    CCScaleBy* ret = new CCScaleBy();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCScaleBy::reverse() {
    // 0xac369c
    // TODO: Implement
}

} // namespace cocos2d
