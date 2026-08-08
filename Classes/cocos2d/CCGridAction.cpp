// ============================================================
// CCGridAction.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCGridAction.h"

namespace cocos2d {

CCGridAction::~CCGridAction() {
    // 0xab9a20
    this->cleanup();
}

CCGridAction::~CCGridAction() {
    // 0xab9a0c
    this->cleanup();
}

CCGridAction::~CCGridAction() {
    // 0xab9a0c
    this->cleanup();
}

void CCGridAction::copyWithZone(cocos2d::CCZone*) {
    // 0xab97b0
    // TODO: Implement
}

void CCGridAction::startWithTarget(cocos2d::CCNode*) {
    // 0xab96cc
    // TODO: Implement
}

void CCGridAction::initWithDuration(float, cocos2d::CCSize const&) {
    // 0xab95d8
    // TODO: Implement
}

void CCGridAction::create(float, cocos2d::CCSize const&) {
    // 0xab9d4c
    CCGridAction* ret = new CCGridAction();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCGridAction::getGrid() {
    // 0xab95d0
    // TODO: Implement
}

void CCGridAction::reverse() {
    // 0xab97ac
    // TODO: Implement
}

} // namespace cocos2d
