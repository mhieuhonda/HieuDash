// ============================================================
// CCMenuItemSpriteExtra.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCMenuItemSpriteExtra.h"

CCMenuItemSpriteExtra::~CCMenuItemSpriteExtra() {
    // 0x575e50
    this->cleanup();
}

CCMenuItemSpriteExtra::~CCMenuItemSpriteExtra() {
    // 0x575d18
    this->cleanup();
}

CCMenuItemSpriteExtra::~CCMenuItemSpriteExtra() {
    // 0x575d18
    this->cleanup();
}

void CCMenuItemSpriteExtra::unselected() {
    // 0x575c0c
    // TODO: Implement
}

void CCMenuItemSpriteExtra::setSizeMult(float) {
    // 0x5765a0
    // TODO: Implement
}

void CCMenuItemSpriteExtra::useAnimationType(MenuAnimationType) {
    // 0x576558
    // TODO: Implement
}

void CCMenuItemSpriteExtra::init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0x576208
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCMenuItemSpriteExtra::create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0x576374
    CCMenuItemSpriteExtra* ret = new CCMenuItemSpriteExtra();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenuItemSpriteExtra::activate() {
    // 0x575e74
    // TODO: Implement
}

void CCMenuItemSpriteExtra::selected() {
    // 0x575fc0
    // TODO: Implement
}

