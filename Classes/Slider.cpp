
#include "Slider.h"

Slider::~Slider() {
    this->cleanup();
}

Slider::~Slider() {
    this->cleanup();
}

Slider::~Slider() {
    this->cleanup();
}

void Slider::hideGroove(bool) {
    // TODO: Implement
}

void Slider::setRotated(bool) {
    // TODO: Implement
}

void Slider::sliderBegan() {
    // TODO: Implement
}

void Slider::sliderEnded() {
    // TODO: Implement
}

void Slider::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void Slider::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void Slider::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void Slider::disableTouch() {
    // TODO: Implement
}

void Slider::enableSlider() {
    // TODO: Implement
}

void Slider::setMaxOffset(float) {
    // TODO: Implement
}

void Slider::disableSlider() {
    // TODO: Implement
}

void Slider::getLiveDragging() {
    // TODO: Implement
}

void Slider::setLiveDragging(bool) {
    // TODO: Implement
}

void Slider::setBarVisibility(bool) {
    // TODO: Implement
}

void Slider::init(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, char const*, char const*, float) {
    bool ret = cocos2d::CCNode::init();
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void Slider::create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    Slider* ret = new Slider();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void Slider::create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, char const*, char const*, float) {
    Slider* ret = new Slider();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void Slider::create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), float) {
    Slider* ret = new Slider();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void Slider::getThumb() {
    // TODO: Implement
}

void Slider::getValue() {
    // TODO: Implement
}

void Slider::setValue(float) {
    // TODO: Implement
}

void Slider::updateBar() {
    // TODO: Implement
}

