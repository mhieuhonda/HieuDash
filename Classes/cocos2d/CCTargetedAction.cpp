// ============================================================
// CCTargetedAction.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTargetedAction.h"

namespace cocos2d {

CCTargetedAction::CCTargetedAction() {
    // 0xac49fc
}

CCTargetedAction::CCTargetedAction() {
    // 0xac49fc
}

CCTargetedAction::~CCTargetedAction() {
    // 0xabf4d8
    this->cleanup();
}

CCTargetedAction::~CCTargetedAction() {
    // 0xabf480
    this->cleanup();
}

CCTargetedAction::~CCTargetedAction() {
    // 0xabf480
    this->cleanup();
}

void CCTargetedAction::copyWithZone(cocos2d::CCZone*) {
    // 0xac4ae8
    // TODO: Implement
}

void CCTargetedAction::initWithTarget(cocos2d::CCNode*, cocos2d::CCFiniteTimeAction*) {
    // 0xac4a3c
    // TODO: Implement
}

void CCTargetedAction::startWithTarget(cocos2d::CCNode*) {
    // 0xabf0b4
    // TODO: Implement
}

void CCTargetedAction::stop() {
    // 0xabede8
    // TODO: Implement
}

void CCTargetedAction::create(cocos2d::CCNode*, cocos2d::CCFiniteTimeAction*) {
    // 0xac4a9c
    CCTargetedAction* ret = new CCTargetedAction();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTargetedAction::update(float) {
    // 0xabee0c
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
