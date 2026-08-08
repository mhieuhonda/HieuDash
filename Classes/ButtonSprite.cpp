
#include "ButtonSprite.h"

ButtonSprite::~ButtonSprite() {
    this->cleanup();
}

void ButtonSprite::updateBGImage(char const*) {
    // Update/refresh operation - stub
}

void ButtonSprite::updateSpriteBGSize() {
    // Update/refresh operation - stub
}

void ButtonSprite::updateSpriteOffset(cocos2d::CCPoint) {
    // Update/refresh operation - stub
}

void ButtonSprite::init(char const*, int, int, float, bool, char const*, char const*, float) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void ButtonSprite::init(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void ButtonSprite::create(char const*) {
    ButtonSprite* ret = new ButtonSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ButtonSprite::create(char const*, float) {
    ButtonSprite* ret = new ButtonSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ButtonSprite::create(char const*, int, int, float, bool) {
    ButtonSprite* ret = new ButtonSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ButtonSprite::create(char const*, int, int, float, bool, char const*, char const*) {
    ButtonSprite* ret = new ButtonSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ButtonSprite::create(char const*, int, int, float, bool, char const*, char const*, float) {
    ButtonSprite* ret = new ButtonSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ButtonSprite::create(cocos2d::CCSprite*) {
    ButtonSprite* ret = new ButtonSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ButtonSprite::create(cocos2d::CCSprite*, int, int, float, float, bool) {
    ButtonSprite* ret = new ButtonSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ButtonSprite::create(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool) {
    ButtonSprite* ret = new ButtonSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ButtonSprite::setColor(cocos2d::_ccColor3B) {
    // Setter operation - stub
}

void ButtonSprite::setString(char const*) {
    // Setter operation - stub
}

