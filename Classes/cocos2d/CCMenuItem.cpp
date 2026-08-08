// ============================================================
// CCMenuItem.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCMenuItem.h"

namespace cocos2d {

CCMenuItem::~CCMenuItem() {
    // 0xaf5038
    this->cleanup();
}

CCMenuItem::~CCMenuItem() {
    // 0xaf3ffc
    this->cleanup();
}

CCMenuItem::~CCMenuItem() {
    // 0xaf3ffc
    this->cleanup();
}

void CCMenuItem::isSelected() {
    // 0xaf348c
    // TODO: Implement
}

void CCMenuItem::setEnabled(bool) {
    // 0xaf347c
    // TODO: Set m_enabled
}

void CCMenuItem::unselected() {
    // 0xaf3440
    // TODO: Implement
}

void CCMenuItem::initWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0xaf54c0
    // TODO: Implement
}

void CCMenuItem::registerScriptTapHandler(int) {
    // 0xaf3448
    // TODO: Implement
}

void CCMenuItem::unregisterScriptTapHandler() {
    // 0xaf3fb8
    // TODO: Implement
}

void CCMenuItem::rect() {
    // 0xaf5614
    // TODO: Implement
}

void CCMenuItem::create(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0xaf5568
    CCMenuItem* ret = new CCMenuItem();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenuItem::create() {
    // 0xaf55f4
    CCMenuItem* ret = new CCMenuItem();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenuItem::activate() {
    // 0xaf520c
    // TODO: Implement
}

void CCMenuItem::selected() {
    // 0xaf3434
    // TODO: Implement
}

void CCMenuItem::isEnabled() {
    // 0xaf3484
    // TODO: Implement
}

void CCMenuItem::setTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0xaf565c
    // TODO: Implement
}

} // namespace cocos2d
