
#include "CreateMenuItem.h"

CreateMenuItem::~CreateMenuItem() {
    this->cleanup();
}

CreateMenuItem::~CreateMenuItem() {
    this->cleanup();
}

CreateMenuItem::~CreateMenuItem() {
    this->cleanup();
}

void CreateMenuItem::init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CreateMenuItem::create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    CreateMenuItem* ret = new CreateMenuItem();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

