// ============================================================
// UIObjectSettingsPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "UIObjectSettingsPopup.h"

UIObjectSettingsPopup::~UIObjectSettingsPopup() {
    // 0xa43cc4
    this->cleanup();
}

UIObjectSettingsPopup::~UIObjectSettingsPopup() {
    // 0xa4341c
    this->cleanup();
}

UIObjectSettingsPopup::~UIObjectSettingsPopup() {
    // 0xa4341c
    this->cleanup();
}

void UIObjectSettingsPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0xa43d50
    // TODO: Implement
}

void UIObjectSettingsPopup::init(UISettingsGameObject*, cocos2d::CCArray*) {
    // 0xa47468
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UIObjectSettingsPopup::create(UISettingsGameObject*, cocos2d::CCArray*) {
    // 0xa48374
    UIObjectSettingsPopup* ret = new UIObjectSettingsPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

