// ============================================================
// SetupAnimSettingsPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupAnimSettingsPopup.h"

SetupAnimSettingsPopup::~SetupAnimSettingsPopup() {
    // 0x94e638
    this->cleanup();
}

SetupAnimSettingsPopup::~SetupAnimSettingsPopup() {
    // 0x94e5cc
    this->cleanup();
}

SetupAnimSettingsPopup::~SetupAnimSettingsPopup() {
    // 0x94e5cc
    this->cleanup();
}

void SetupAnimSettingsPopup::updateAnimSettings() {
    // 0x94f370
    // TODO: Implement
}

void SetupAnimSettingsPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x94e6c4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAnimSettingsPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x94f17c
    SetupAnimSettingsPopup* ret = new SetupAnimSettingsPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupAnimSettingsPopup::onClose(cocos2d::CCObject*) {
    // 0x94f3d0
    // TODO: Implement
}

