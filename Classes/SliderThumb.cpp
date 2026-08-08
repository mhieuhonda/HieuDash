// ============================================================
// SliderThumb.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SliderThumb.h"

SliderThumb::~SliderThumb() {
    // 0x593854
    this->cleanup();
}

SliderThumb::~SliderThumb() {
    // 0x593838
    this->cleanup();
}

SliderThumb::~SliderThumb() {
    // 0x593838
    this->cleanup();
}

void SliderThumb::setRotated(bool) {
    // 0x593d44
    // TODO: Implement
}

void SliderThumb::setMaxOffset(float) {
    // 0x593ddc
    // TODO: Implement
}

void SliderThumb::init(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*) {
    // 0x593a28
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SliderThumb::create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*) {
    // 0x593a5c
    SliderThumb* ret = new SliderThumb();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SliderThumb::getValue() {
    // 0x593b60
    // TODO: Implement
}

void SliderThumb::setValue(float) {
    // 0x593bf4
    // TODO: Implement
}

