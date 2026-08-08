
#include "SliderThumb.h"

SliderThumb::~SliderThumb() {
    this->cleanup();
}

SliderThumb::~SliderThumb() {
    this->cleanup();
}

SliderThumb::~SliderThumb() {
    this->cleanup();
}

void SliderThumb::setRotated(bool) {
    // TODO: Implement
}

void SliderThumb::setMaxOffset(float) {
    // TODO: Implement
}

void SliderThumb::init(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SliderThumb::create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*) {
    SliderThumb* ret = new SliderThumb();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SliderThumb::getValue() {
    // TODO: Implement
}

void SliderThumb::setValue(float) {
    // TODO: Implement
}

