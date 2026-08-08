// ============================================================
// CCAction.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCAction.h"

namespace cocos2d {

CCAction::CCAction() {
    : m_tag(0)
    // 0xab3e24
}

CCAction::CCAction() {
    : m_tag(0)
    // 0xab3e24
}

CCAction::~CCAction() {
    // 0xab3be0
    this->cleanup();
}

CCAction::~CCAction() {
    // 0xab3bb8
    this->cleanup();
}

CCAction::~CCAction() {
    // 0xab3bb8
    this->cleanup();
}

void CCAction::description() {
    // 0xab3ff8
    // TODO: Implement
}

void CCAction::copyWithZone(cocos2d::CCZone*) {
    // 0xab3e6c
    // TODO: Implement
}

void CCAction::startWithTarget(cocos2d::CCNode*) {
    // 0xab3a98
    // TODO: Implement
}

void CCAction::step(float) {
    // 0xab3ab4
    // TODO: Implement
}

void CCAction::stop() {
    // 0xab3aa4
    // TODO: Implement
}

void CCAction::create() {
    // 0xab3fc4
    CCAction* ret = new CCAction();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCAction::isDone() {
    // 0xab3aac
    // TODO: Implement
}

void CCAction::setTag(int) {
    // 0xab3a90
    // TODO: Set m_tag
}

void CCAction::update(float) {
    // 0xab3ab8
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
