// ============================================================
// SetupObjectTogglePopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupObjectTogglePopup.h"

SetupObjectTogglePopup::~SetupObjectTogglePopup() {
    // 0x8e91fc
    this->cleanup();
}

SetupObjectTogglePopup::~SetupObjectTogglePopup() {
    // 0x8e9190
    this->cleanup();
}

SetupObjectTogglePopup::~SetupObjectTogglePopup() {
    // 0x8e9190
    this->cleanup();
}

void SetupObjectTogglePopup::valueDidChange(int, float) {
    // 0x8e9264
    // TODO: Implement
}

void SetupObjectTogglePopup::init(EffectGameObject*, cocos2d::CCArray*, bool) {
    // 0x8e92d8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupObjectTogglePopup::create(EffectGameObject*, cocos2d::CCArray*, bool) {
    // 0x8e9f6c
    SetupObjectTogglePopup* ret = new SetupObjectTogglePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupObjectTogglePopup::onClose(cocos2d::CCObject*) {
    // 0x8e9228
    // TODO: Implement
}

