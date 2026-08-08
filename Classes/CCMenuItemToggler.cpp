// ============================================================
// CCMenuItemToggler.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCMenuItemToggler.h"

CCMenuItemToggler::~CCMenuItemToggler() {
    // 0x57661c
    this->cleanup();
}

CCMenuItemToggler::~CCMenuItemToggler() {
    // 0x576600
    this->cleanup();
}

CCMenuItemToggler::~CCMenuItemToggler() {
    // 0x576600
    this->cleanup();
}

void CCMenuItemToggler::activeItem() {
    // 0x576658
    // TODO: Implement
}

void CCMenuItemToggler::setEnabled(bool) {
    // 0x5765a8
    // TODO: Set m_enabled
}

void CCMenuItemToggler::unselected() {
    // 0x5766d8
    // TODO: Implement
}

void CCMenuItemToggler::normalTouch(cocos2d::CCObject*) {
    // 0x576b5c
    // TODO: Implement
}

void CCMenuItemToggler::setSizeMult(float) {
    // 0x576b18
    // TODO: Implement
}

void CCMenuItemToggler::selectedTouch(cocos2d::CCObject*) {
    // 0x576b70
    // TODO: Implement
}

void CCMenuItemToggler::init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0x57681c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCMenuItemToggler::create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0x576a14
    CCMenuItemToggler* ret = new CCMenuItemToggler();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenuItemToggler::toggle(bool) {
    // 0x57670c
    // TODO: Implement
}

void CCMenuItemToggler::activate() {
    // 0x5766a4
    // TODO: Implement
}

void CCMenuItemToggler::selected() {
    // 0x576670
    // TODO: Implement
}

