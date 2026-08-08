// ============================================================
// CCEaseRateAction.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseRateAction.h"

namespace cocos2d {

CCEaseRateAction::~CCEaseRateAction() {
    // 0xab6378
    this->cleanup();
}

CCEaseRateAction::~CCEaseRateAction() {
    // 0xab6364
    this->cleanup();
}

CCEaseRateAction::~CCEaseRateAction() {
    // 0xab6364
    this->cleanup();
}

void CCEaseRateAction::copyWithZone(cocos2d::CCZone*) {
    // 0xab7d30
    // TODO: Implement
}

void CCEaseRateAction::initWithAction(cocos2d::CCActionInterval*, float) {
    // 0xab7c1c
    // TODO: Implement
}

void CCEaseRateAction::create(cocos2d::CCActionInterval*, float) {
    // 0xab7c50
    CCEaseRateAction* ret = new CCEaseRateAction();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseRateAction::reverse() {
    // 0xab7cf4
    // TODO: Implement
}

} // namespace cocos2d
