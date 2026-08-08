// ============================================================
// CreateMenuItem.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CreateMenuItem.h"

CreateMenuItem::~CreateMenuItem() {
    // 0x686b50
    this->cleanup();
}

CreateMenuItem::~CreateMenuItem() {
    // 0x686a90
    this->cleanup();
}

CreateMenuItem::~CreateMenuItem() {
    // 0x686a90
    this->cleanup();
}

void CreateMenuItem::init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0x69443c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CreateMenuItem::create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0x694440
    CreateMenuItem* ret = new CreateMenuItem();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

