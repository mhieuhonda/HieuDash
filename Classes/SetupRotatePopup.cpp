// ============================================================
// SetupRotatePopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupRotatePopup.h"

SetupRotatePopup::~SetupRotatePopup() {
    // 0x958644
    this->cleanup();
}

SetupRotatePopup::~SetupRotatePopup() {
    // 0x9585d8
    this->cleanup();
}

SetupRotatePopup::~SetupRotatePopup() {
    // 0x9585d8
    this->cleanup();
}

void SetupRotatePopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0x958500
    // TODO: Implement
}

void SetupRotatePopup::init(EnhancedGameObject*, cocos2d::CCArray*) {
    // 0x9586d0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupRotatePopup::create(EnhancedGameObject*, cocos2d::CCArray*) {
    // 0x958e00
    SetupRotatePopup* ret = new SetupRotatePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupRotatePopup::onClose(cocos2d::CCObject*) {
    // 0x95847c
    // TODO: Implement
}

