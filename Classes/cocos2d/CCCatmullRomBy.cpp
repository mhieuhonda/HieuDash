// ============================================================
// CCCatmullRomBy.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCCatmullRomBy.h"

namespace cocos2d {

CCCatmullRomBy::~CCCatmullRomBy() {
    // 0xab4d08
    this->cleanup();
}

CCCatmullRomBy::~CCCatmullRomBy() {
    // 0xab4cf4
    this->cleanup();
}

CCCatmullRomBy::~CCCatmullRomBy() {
    // 0xab4cf4
    this->cleanup();
}

void CCCatmullRomBy::initWithDuration(float, cocos2d::CCPointArray*) {
    // 0xab57c0
    // TODO: Implement
}

void CCCatmullRomBy::create(float, cocos2d::CCPointArray*) {
    // 0xab57c8
    CCCatmullRomBy* ret = new CCCatmullRomBy();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
