// ============================================================
// CCMenuItemSprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCMenuItemSprite.h"

namespace cocos2d {

CCMenuItemSprite::~CCMenuItemSprite() {
    // 0xaf5178
    this->cleanup();
}

CCMenuItemSprite::~CCMenuItemSprite() {
    // 0xaf515c
    this->cleanup();
}

CCMenuItemSprite::~CCMenuItemSprite() {
    // 0xaf515c
    this->cleanup();
}

void CCMenuItemSprite::setEnabled(bool) {
    // 0xaf3c74
    // TODO: Set m_enabled
}

void CCMenuItemSprite::unselected() {
    // 0xaf34d0
    // TODO: Implement
}

void CCMenuItemSprite::getNormalImage() {
    // 0xaf34b8
    // TODO: Implement
}

void CCMenuItemSprite::setNormalImage(cocos2d::CCNode*) {
    // 0xaf3784
    // TODO: Implement
}

void CCMenuItemSprite::getDisabledImage() {
    // 0xaf34c8
    // TODO: Implement
}

void CCMenuItemSprite::getSelectedImage() {
    // 0xaf34c0
    // TODO: Implement
}

void CCMenuItemSprite::setDisabledImage(cocos2d::CCNode*) {
    // 0xaf394c
    // TODO: Implement
}

void CCMenuItemSprite::setSelectedImage(cocos2d::CCNode*) {
    // 0xaf387c
    // TODO: Implement
}

void CCMenuItemSprite::initWithNormalSprite(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0xaf5e7c
    // TODO: Implement
}

void CCMenuItemSprite::updateImagesVisibility() {
    // 0xaf354c
    // TODO: Implement
}

void CCMenuItemSprite::create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0xaf602c
    CCMenuItemSprite* ret = new CCMenuItemSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenuItemSprite::create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*) {
    // 0xaf600c
    CCMenuItemSprite* ret = new CCMenuItemSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenuItemSprite::create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0xaf5f4c
    CCMenuItemSprite* ret = new CCMenuItemSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenuItemSprite::selected() {
    // 0xaf3bc4
    // TODO: Implement
}

} // namespace cocos2d
