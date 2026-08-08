// ============================================================
// ButtonSprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ButtonSprite.h"

ButtonSprite::~ButtonSprite() {
    // 0x56ef28
    this->cleanup();
}

ButtonSprite::~ButtonSprite() {
    // 0x56ee60
    this->cleanup();
}

ButtonSprite::~ButtonSprite() {
    // 0x56ee60
    this->cleanup();
}

void ButtonSprite::updateBGImage(char const*) {
    // 0x56fcc0
    // TODO: Implement
}

void ButtonSprite::updateSpriteBGSize() {
    // 0x56eff8
    // TODO: Implement
}

void ButtonSprite::updateSpriteOffset(cocos2d::CCPoint) {
    // 0x56f884
    // TODO: Implement
}

void ButtonSprite::init(char const*, int, int, float, bool, char const*, char const*, float) {
    // 0x56fdf4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ButtonSprite::init(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool) {
    // 0x56f448
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ButtonSprite::create(char const*) {
    // 0x5702fc
    ButtonSprite* ret = new ButtonSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ButtonSprite::create(char const*, float) {
    // 0x570310
    ButtonSprite* ret = new ButtonSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ButtonSprite::create(char const*, int, int, float, bool) {
    // 0x5702e4
    ButtonSprite* ret = new ButtonSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ButtonSprite::create(char const*, int, int, float, bool, char const*, char const*) {
    // 0x570320
    ButtonSprite* ret = new ButtonSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ButtonSprite::create(char const*, int, int, float, bool, char const*, char const*, float) {
    // 0x57017c
    ButtonSprite* ret = new ButtonSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ButtonSprite::create(cocos2d::CCSprite*) {
    // 0x56f86c
    ButtonSprite* ret = new ButtonSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ButtonSprite::create(cocos2d::CCSprite*, int, int, float, float, bool) {
    // 0x56f85c
    ButtonSprite* ret = new ButtonSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ButtonSprite::create(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool) {
    // 0x56f6f4
    ButtonSprite* ret = new ButtonSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ButtonSprite::setColor(cocos2d::_ccColor3B) {
    // 0x570328
    // TODO: Set m_color
}

void ButtonSprite::setString(char const*) {
    // 0x56f8ac
    // TODO: Set m_string
}

