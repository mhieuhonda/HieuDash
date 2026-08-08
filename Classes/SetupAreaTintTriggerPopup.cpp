// ============================================================
// SetupAreaTintTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupAreaTintTriggerPopup.h"

SetupAreaTintTriggerPopup::~SetupAreaTintTriggerPopup() {
    // 0xa08d9c
    this->cleanup();
}

SetupAreaTintTriggerPopup::~SetupAreaTintTriggerPopup() {
    // 0xa08b98
    this->cleanup();
}

SetupAreaTintTriggerPopup::~SetupAreaTintTriggerPopup() {
    // 0xa08b98
    this->cleanup();
}

void SetupAreaTintTriggerPopup::hsvPopupClosed(HSVWidgetPopup*, cocos2d::_ccHSVValue) {
    // 0xa0eb1c
    // TODO: Implement
}

void SetupAreaTintTriggerPopup::valueDidChange(int, float) {
    // 0xa09100
    // TODO: Implement
}

void SetupAreaTintTriggerPopup::updateHSVButton() {
    // 0xa0ea68
    // TODO: Implement
}

void SetupAreaTintTriggerPopup::determineStartValues() {
    // 0xa08e20
    // TODO: Implement
}

void SetupAreaTintTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*) {
    // 0xa0eb38
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAreaTintTriggerPopup::onHSV(cocos2d::CCObject*) {
    // 0xa091d8
    // TODO: Implement
}

void SetupAreaTintTriggerPopup::create(EnterEffectObject*, cocos2d::CCArray*) {
    // 0xa0f7b8
    SetupAreaTintTriggerPopup* ret = new SetupAreaTintTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupAreaTintTriggerPopup::onClose(cocos2d::CCObject*) {
    // 0xa08f98
    // TODO: Implement
}

