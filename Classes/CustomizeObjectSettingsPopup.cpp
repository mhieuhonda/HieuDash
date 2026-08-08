// ============================================================
// CustomizeObjectSettingsPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CustomizeObjectSettingsPopup.h"

CustomizeObjectSettingsPopup::~CustomizeObjectSettingsPopup() {
    // 0x83fc6c
    this->cleanup();
}

CustomizeObjectSettingsPopup::~CustomizeObjectSettingsPopup() {
    // 0x83fc00
    this->cleanup();
}

CustomizeObjectSettingsPopup::~CustomizeObjectSettingsPopup() {
    // 0x83fc00
    this->cleanup();
}

void CustomizeObjectSettingsPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0x83fb80
    // TODO: Implement
}

void CustomizeObjectSettingsPopup::init(GameObject*, cocos2d::CCArray*, CustomizeObjectLayer*) {
    // 0x8441f0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CustomizeObjectSettingsPopup::create(GameObject*, cocos2d::CCArray*, CustomizeObjectLayer*) {
    // 0x8447ec
    CustomizeObjectSettingsPopup* ret = new CustomizeObjectSettingsPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CustomizeObjectSettingsPopup::onClose(cocos2d::CCObject*) {
    // 0x84416c
    // TODO: Implement
}

