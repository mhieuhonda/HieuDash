// ============================================================
// HSVWidgetPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "HSVWidgetPopup.h"

HSVWidgetPopup::~HSVWidgetPopup() {
    // 0x8e0794
    this->cleanup();
}

HSVWidgetPopup::~HSVWidgetPopup() {
    // 0x8e0740
    this->cleanup();
}

HSVWidgetPopup::~HSVWidgetPopup() {
    // 0x8e0740
    this->cleanup();
}

void HSVWidgetPopup::keyBackClicked() {
    // 0x8e0bfc
    // TODO: Implement
}

void HSVWidgetPopup::init(cocos2d::_ccHSVValue, HSVWidgetDelegate*, std::string) {
    // 0x8e228c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void HSVWidgetPopup::create(cocos2d::_ccHSVValue, HSVWidgetDelegate*, std::string) {
    // 0x8e258c
    HSVWidgetPopup* ret = new HSVWidgetPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void HSVWidgetPopup::onClose(cocos2d::CCObject*) {
    // 0x8e0b5c
    // TODO: Implement
}

