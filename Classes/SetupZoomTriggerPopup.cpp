// ============================================================
// SetupZoomTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupZoomTriggerPopup.h"

SetupZoomTriggerPopup::~SetupZoomTriggerPopup() {
    // 0x96bbf0
    this->cleanup();
}

SetupZoomTriggerPopup::~SetupZoomTriggerPopup() {
    // 0x96bb84
    this->cleanup();
}

SetupZoomTriggerPopup::~SetupZoomTriggerPopup() {
    // 0x96bb84
    this->cleanup();
}

void SetupZoomTriggerPopup::determineStartValues() {
    // 0x96bc1c
    // TODO: Implement
}

void SetupZoomTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x96bc24
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupZoomTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x96c1b8
    SetupZoomTriggerPopup* ret = new SetupZoomTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupZoomTriggerPopup::onClose(cocos2d::CCObject*) {
    // 0x96bc20
    // TODO: Implement
}

