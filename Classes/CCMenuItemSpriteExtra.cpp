
#include "CCMenuItemSpriteExtra.h"

CCMenuItemSpriteExtra::~CCMenuItemSpriteExtra() {
    this->cleanup();
}

CCMenuItemSpriteExtra::~CCMenuItemSpriteExtra() {
    this->cleanup();
}

CCMenuItemSpriteExtra::~CCMenuItemSpriteExtra() {
    this->cleanup();
}

void CCMenuItemSpriteExtra::unselected() {
    // TODO: Implement
}

void CCMenuItemSpriteExtra::setSizeMult(float) {
    // TODO: Implement
}

void CCMenuItemSpriteExtra::useAnimationType(MenuAnimationType) {
    // TODO: Implement
}

void CCMenuItemSpriteExtra::init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCMenuItemSpriteExtra::create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    CCMenuItemSpriteExtra* ret = new CCMenuItemSpriteExtra();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenuItemSpriteExtra::activate() {
    // TODO: Implement
}

void CCMenuItemSpriteExtra::selected() {
    // TODO: Implement
}

