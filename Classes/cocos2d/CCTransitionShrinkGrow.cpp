// ============================================================
// CCTransitionShrinkGrow.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionShrinkGrow.h"

namespace cocos2d {

CCTransitionShrinkGrow::CCTransitionShrinkGrow() {
    // 0xaee524
}

CCTransitionShrinkGrow::CCTransitionShrinkGrow() {
    // 0xaee524
}

CCTransitionShrinkGrow::~CCTransitionShrinkGrow() {
    // 0xaecf8c
    this->cleanup();
}

CCTransitionShrinkGrow::~CCTransitionShrinkGrow() {
    // 0xaeccd4
    this->cleanup();
}

CCTransitionShrinkGrow::~CCTransitionShrinkGrow() {
    // 0xaeccd4
    this->cleanup();
}

void CCTransitionShrinkGrow::easeActionWithAction(cocos2d::CCActionInterval*) {
    // 0xaedb10
    // TODO: Implement
}

void CCTransitionShrinkGrow::create(float, cocos2d::CCScene*) {
    // 0xaee55c
    CCTransitionShrinkGrow* ret = new CCTransitionShrinkGrow();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionShrinkGrow::onEnter() {
    // 0xaef564
    // TODO: Implement
}

} // namespace cocos2d
