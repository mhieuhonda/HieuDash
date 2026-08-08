// ============================================================
// CCCatmullRomTo.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCCatmullRomTo.h"

namespace cocos2d {

CCCatmullRomTo::~CCCatmullRomTo() {
    // 0xab4c78
    this->cleanup();
}

CCCatmullRomTo::~CCCatmullRomTo() {
    // 0xab4c64
    this->cleanup();
}

CCCatmullRomTo::~CCCatmullRomTo() {
    // 0xab4c64
    this->cleanup();
}

void CCCatmullRomTo::initWithDuration(float, cocos2d::CCPointArray*) {
    // 0xab5718
    // TODO: Implement
}

void CCCatmullRomTo::create(float, cocos2d::CCPointArray*) {
    // 0xab5720
    CCCatmullRomTo* ret = new CCCatmullRomTo();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
