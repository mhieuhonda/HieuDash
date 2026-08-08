// ============================================================
// CCControlButton.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCControlButton.h"

namespace cocos2d {
namespace extension {

CCControlButton::CCControlButton() {
    : m_enabled(false)
    // 0xa9bd9c
}

CCControlButton::CCControlButton() {
    : m_enabled(false)
    // 0xa9bd9c
}

CCControlButton::~CCControlButton() {
    // 0xa9a918
    this->cleanup();
}

CCControlButton::~CCControlButton() {
    // 0xa9a85c
    this->cleanup();
}

CCControlButton::~CCControlButton() {
    // 0xa9a85c
    this->cleanup();
}

void CCControlButton::getOpacity() {
    // 0xa9a7f0
    // TODO: Implement
}

void CCControlButton::setEnabled(bool) {
    // 0xa9c554
    // TODO: Set m_enabled
}

void CCControlButton::setMargins(int, int) {
    // 0xa9a594
    // TODO: Implement
}

void CCControlButton::setOpacity(unsigned char) {
    // 0xa9c6b0
    // TODO: Implement
}

void CCControlButton::needsLayout() {
    // 0xa9b4ac
    // TODO: Implement
}

void CCControlButton::setSelected(bool) {
    // 0xa9c584
    // TODO: Implement
}

void CCControlButton::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xa9b184
    // TODO: Implement
}

void CCControlButton::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xa9a768
    // TODO: Implement
}

void CCControlButton::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xa9a5c8
    // TODO: Implement
}

void CCControlButton::setHighlighted(bool) {
    // 0xa9c5b4
    // TODO: Implement
}

void CCControlButton::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xa9a810
    // TODO: Implement
}

void CCControlButton::getPreferredSize() {
    // 0xa9aa30
    // TODO: Implement
}

void CCControlButton::getTitleForState(unsigned int) {
    // 0xa9b9e0
    // TODO: Implement
}

void CCControlButton::setPreferredSize(cocos2d::CCSize) {
    // 0xa9aa58
    // TODO: Implement
}

void CCControlButton::setTitleForState(cocos2d::CCString*, unsigned int) {
    // 0xa9b350
    // TODO: Implement
}

void CCControlButton::getZoomOnTouchDown() {
    // 0xa9a5c0
    // TODO: Implement
}

void CCControlButton::setZoomOnTouchDown(bool) {
    // 0xa9a5b8
    // TODO: Implement
}

void CCControlButton::getLabelAnchorPoint() {
    // 0xa9ab48
    // TODO: Implement
}

void CCControlButton::getTitleTTFForState(unsigned int) {
    // 0xa9ad90
    // TODO: Implement
}

void CCControlButton::setLabelAnchorPoint(cocos2d::CCPoint) {
    // 0xa9ab70
    // TODO: Set m_labelAnchorPoint
}

void CCControlButton::setTitleTTFForState(char const*, unsigned int) {
    // 0xa9bb08
    // TODO: Implement
}

void CCControlButton::getTitleColorForState(unsigned int) {
    // 0xa9abb0
    // TODO: Implement
}

void CCControlButton::getTitleLabelForState(unsigned int) {
    // 0xa9b2d0
    // TODO: Implement
}

void CCControlButton::setTitleColorForState(cocos2d::_ccColor3B, unsigned int) {
    // 0xa9b3cc
    // TODO: Set m_titleColorForState
}

void CCControlButton::setTitleLabelForState(cocos2d::CCNode*, unsigned int) {
    // 0xa9ac2c
    // TODO: Implement
}

void CCControlButton::getTitleBMFontForState(unsigned int) {
    // 0xa9aef4
    // TODO: Implement
}

void CCControlButton::setTitleBMFontForState(char const*, unsigned int) {
    // 0xa9bc54
    // TODO: Implement
}

void CCControlButton::getTitleTTFSizeForState(unsigned int) {
    // 0xa9ae84
    // TODO: Implement
}

void CCControlButton::setTitleTTFSizeForState(float, unsigned int) {
    // 0xa9ae04
    // TODO: Implement
}

void CCControlButton::initWithBackgroundSprite(cocos2d::extension::CCScale9Sprite*) {
    // 0xa9a944
    // TODO: Implement
}

void CCControlButton::setAdjustBackgroundImage(bool) {
    // 0xa9c084
    // TODO: Implement
}

void CCControlButton::doesAdjustBackgroundImage() {
    // 0xa9c0a4
    // TODO: Implement
}

void CCControlButton::getBackgroundSpriteForState(unsigned int) {
    // 0xa9b310
    // TODO: Implement
}

void CCControlButton::setBackgroundSpriteForState(cocos2d::extension::CCScale9Sprite*, unsigned int) {
    // 0xa9af68
    // TODO: Implement
}

void CCControlButton::initWithLabelAndBackgroundSprite(cocos2d::CCNode*, cocos2d::extension::CCScale9Sprite*) {
    // 0xa9c12c
    // TODO: Implement
}

void CCControlButton::setBackgroundSpriteFrameForState(cocos2d::CCSpriteFrame*, unsigned int) {
    // 0xa9b144
    // TODO: Implement
}

void CCControlButton::initWithTitleAndFontNameAndFontSize(std::string, char const*, float) {
    // 0xa9a9e8
    // TODO: Implement
}

void CCControlButton::init() {
    // 0xa9a994
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCControlButton::create(cocos2d::extension::CCScale9Sprite*) {
    // 0xa9c024
    CCControlButton* ret = new CCControlButton();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCControlButton::create(cocos2d::CCNode*, cocos2d::extension::CCScale9Sprite*) {
    // 0xa9be6c
    CCControlButton* ret = new CCControlButton();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCControlButton::create(std::string, char const*, float) {
    // 0xa9bedc
    CCControlButton* ret = new CCControlButton();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCControlButton::create() {
    // 0xa9c0ac
    CCControlButton* ret = new CCControlButton();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCControlButton::getColor() {
    // 0xa9a800
    // TODO: Implement
}

void CCControlButton::setColor(cocos2d::_ccColor3B const&) {
    // 0xa9c71c
    // TODO: Set m_color
}

} // namespace extension
} // namespace cocos2d
