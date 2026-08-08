// ============================================================
// CCControlSlider.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCControlSlider.h"

namespace cocos2d {
namespace extension {

CCControlSlider::CCControlSlider() {
    : m_enabled(false)
    // 0xa9e880
}

CCControlSlider::CCControlSlider() {
    : m_enabled(false)
    // 0xa9e880
}

CCControlSlider::~CCControlSlider() {
    // 0xa9e318
    this->cleanup();
}

CCControlSlider::~CCControlSlider() {
    // 0xa9e28c
    this->cleanup();
}

CCControlSlider::~CCControlSlider() {
    // 0xa9e28c
    this->cleanup();
}

void CCControlSlider::setEnabled(bool) {
    // 0xa9eeec
    // TODO: Set m_enabled
}

void CCControlSlider::needsLayout() {
    // 0xa9e42c
    // TODO: Implement
}

void CCControlSlider::sliderBegan(cocos2d::CCPoint) {
    // 0xa9eb3c
    // TODO: Implement
}

void CCControlSlider::sliderEnded(cocos2d::CCPoint) {
    // 0xa9eda8
    // TODO: Implement
}

void CCControlSlider::sliderMoved(cocos2d::CCPoint) {
    // 0xa9ecc0
    // TODO: Implement
}

void CCControlSlider::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xa9ebe0
    // TODO: Implement
}

void CCControlSlider::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xa9ee7c
    // TODO: Implement
}

void CCControlSlider::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xa9ed30
    // TODO: Implement
}

void CCControlSlider::isTouchInside(cocos2d::CCTouch*) {
    // 0xa9e344
    // TODO: Implement
}

void CCControlSlider::initWithSprites(cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*) {
    // 0xa9e568
    // TODO: Implement
}

void CCControlSlider::setMaximumValue(float) {
    // 0xa9e24c
    // TODO: Implement
}

void CCControlSlider::setMinimumValue(float) {
    // 0xa9e20c
    // TODO: Implement
}

void CCControlSlider::valueForLocation(cocos2d::CCPoint) {
    // 0xa9eaa8
    // TODO: Implement
}

void CCControlSlider::locationFromTouch(cocos2d::CCTouch*) {
    // 0xa9e9cc
    // TODO: Implement
}

void CCControlSlider::create(char const*, char const*, char const*) {
    // 0xa9e97c
    CCControlSlider* ret = new CCControlSlider();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCControlSlider::create(cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*) {
    // 0xa9e904
    CCControlSlider* ret = new CCControlSlider();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCControlSlider::setValue(float) {
    // 0xa9e1a8
    // TODO: Implement
}

} // namespace extension
} // namespace cocos2d
