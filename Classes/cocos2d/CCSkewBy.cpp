// ============================================================
// CCSkewBy.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCSkewBy.h"

namespace cocos2d {

CCSkewBy::~CCSkewBy() {
    // 0xabf900
    this->cleanup();
}

CCSkewBy::~CCSkewBy() {
    // 0xabf8ec
    this->cleanup();
}

CCSkewBy::~CCSkewBy() {
    // 0xabf8ec
    this->cleanup();
}

void CCSkewBy::startWithTarget(cocos2d::CCNode*) {
    // 0xac02ec
    // TODO: Implement
}

void CCSkewBy::initWithDuration(float, float, float) {
    // 0xac1514
    // TODO: Implement
}

void CCSkewBy::create(float, float, float) {
    // 0xac2790
    CCSkewBy* ret = new CCSkewBy();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCSkewBy::reverse() {
    // 0xac2840
    // TODO: Implement
}

} // namespace cocos2d
