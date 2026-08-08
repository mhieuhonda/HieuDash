// ============================================================
// CCTransitionFadeUp.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionFadeUp.h"

namespace cocos2d {

CCTransitionFadeUp::CCTransitionFadeUp() {
    // 0xaeee30
}

CCTransitionFadeUp::CCTransitionFadeUp() {
    // 0xaeee30
}

CCTransitionFadeUp::~CCTransitionFadeUp() {
    // 0xaed184
    this->cleanup();
}

CCTransitionFadeUp::~CCTransitionFadeUp() {
    // 0xaecda4
    this->cleanup();
}

CCTransitionFadeUp::~CCTransitionFadeUp() {
    // 0xaecda4
    this->cleanup();
}

void CCTransitionFadeUp::actionWithSize(cocos2d::CCSize const&) {
    // 0xaedb78
    // TODO: Implement
}

void CCTransitionFadeUp::create(float, cocos2d::CCScene*) {
    // 0xaeee68
    CCTransitionFadeUp* ret = new CCTransitionFadeUp();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
