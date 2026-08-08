// ============================================================
// Slider.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "Slider.h"

Slider::~Slider() {
    // 0x5939c4
    this->cleanup();
}

Slider::~Slider() {
    // 0x593980
    this->cleanup();
}

Slider::~Slider() {
    // 0x593980
    this->cleanup();
}

void Slider::hideGroove(bool) {
    // 0x5949b0
    // TODO: Implement
}

void Slider::setRotated(bool) {
    // 0x59495c
    // TODO: Implement
}

void Slider::sliderBegan() {
    // 0x5949dc
    // TODO: Implement
}

void Slider::sliderEnded() {
    // 0x594adc
    // TODO: Implement
}

void Slider::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x5937b4
    // TODO: Implement
}

void Slider::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x5937e0
    // TODO: Implement
}

void Slider::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x59380c
    // TODO: Implement
}

void Slider::disableTouch() {
    // 0x594580
    // TODO: Implement
}

void Slider::enableSlider() {
    // 0x5944cc
    // TODO: Implement
}

void Slider::setMaxOffset(float) {
    // 0x5949a8
    // TODO: Implement
}

void Slider::disableSlider() {
    // 0x594830
    // TODO: Implement
}

void Slider::getLiveDragging() {
    // 0x594944
    // TODO: Implement
}

void Slider::setLiveDragging(bool) {
    // 0x594950
    // TODO: Implement
}

void Slider::setBarVisibility(bool) {
    // 0x594920
    // TODO: Implement
}

void Slider::init(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, char const*, char const*, float) {
    // 0x594174
    bool ret = cocos2d::CCNode::init() if "cocos2d::CCNode" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void Slider::create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0x5944c4
    Slider* ret = new Slider();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void Slider::create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, char const*, char const*, float) {
    // 0x59435c
    Slider* ret = new Slider();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void Slider::create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), float) {
    // 0x5944a0
    Slider* ret = new Slider();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void Slider::getThumb() {
    // 0x5945a8
    // TODO: Implement
}

void Slider::getValue() {
    // 0x5945b4
    // TODO: Implement
}

void Slider::setValue(float) {
    // 0x594800
    // TODO: Implement
}

void Slider::updateBar() {
    // 0x5945c8
    // TODO: Implement
}

