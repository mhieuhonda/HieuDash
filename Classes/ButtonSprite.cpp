
#include "ButtonSprite.h"

ButtonSprite::~ButtonSprite() {
    this->cleanup();
}

ButtonSprite::~ButtonSprite() {
    this->cleanup();
}

ButtonSprite::~ButtonSprite() {
    this->cleanup();
}

void ButtonSprite::updateBGImage(char const*) {
    // TODO: Implement
}

void ButtonSprite::updateSpriteBGSize() {
    // TODO: Implement
}

void ButtonSprite::updateSpriteOffset(cocos2d::CCPoint) {
    // TODO: Implement
}

void ButtonSprite::init(char const*, int, int, float, bool, char const*, char const*, float) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ButtonSprite::init(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
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
    // TODO: Set m_color
}

void ButtonSprite::setString(char const*) {
    // TODO: Set m_string
}

