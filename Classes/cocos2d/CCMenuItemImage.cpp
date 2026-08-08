// ============================================================
// CCMenuItemImage.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCMenuItemImage.h"

namespace cocos2d {

CCMenuItemImage::~CCMenuItemImage() {
    // 0xaf51d0
    this->cleanup();
}

CCMenuItemImage::~CCMenuItemImage() {
    // 0xaf51b4
    this->cleanup();
}

CCMenuItemImage::~CCMenuItemImage() {
    // 0xaf51b4
    this->cleanup();
}

void CCMenuItemImage::initWithNormalImage(char const*, char const*, char const*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0xaf6044
    // TODO: Implement
}

void CCMenuItemImage::setNormalSpriteFrame(cocos2d::CCSpriteFrame*) {
    // 0xaf63e8
    // TODO: Implement
}

void CCMenuItemImage::setDisabledSpriteFrame(cocos2d::CCSpriteFrame*) {
    // 0xaf6458
    // TODO: Implement
}

void CCMenuItemImage::setSelectedSpriteFrame(cocos2d::CCSpriteFrame*) {
    // 0xaf6420
    // TODO: Implement
}

void CCMenuItemImage::init() {
    // 0xaf6110
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCMenuItemImage::create(char const*, char const*) {
    // 0xaf62d4
    CCMenuItemImage* ret = new CCMenuItemImage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenuItemImage::create(char const*, char const*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0xaf62f8
    CCMenuItemImage* ret = new CCMenuItemImage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenuItemImage::create(char const*, char const*, char const*) {
    // 0xaf6310
    CCMenuItemImage* ret = new CCMenuItemImage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenuItemImage::create(char const*, char const*, char const*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0xaf61e4
    CCMenuItemImage* ret = new CCMenuItemImage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenuItemImage::create() {
    // 0xaf613c
    CCMenuItemImage* ret = new CCMenuItemImage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
