// ============================================================
// SetupOpacityPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupOpacityPopup.h"

SetupOpacityPopup::~SetupOpacityPopup() {
    // 0x8e782c
    this->cleanup();
}

SetupOpacityPopup::~SetupOpacityPopup() {
    // 0x8e77c0
    this->cleanup();
}

SetupOpacityPopup::~SetupOpacityPopup() {
    // 0x8e77c0
    this->cleanup();
}

void SetupOpacityPopup::textChanged(CCTextInputNode*) {
    // 0x8e8f34
    // TODO: Implement
}

void SetupOpacityPopup::sliderChanged(cocos2d::CCObject*) {
    // 0x8e8d8c
    // TODO: Implement
}

void SetupOpacityPopup::updateOpacity() {
    // 0x8e8d18
    // TODO: Implement
}

void SetupOpacityPopup::updateDurLabel(bool) {
    // 0x8e7a1c
    // TODO: Implement
}

void SetupOpacityPopup::updateDuration() {
    // 0x8e8ca4
    // TODO: Implement
}

void SetupOpacityPopup::updateTargetID() {
    // 0x8e8eb0
    // TODO: Implement
}

void SetupOpacityPopup::onTargetIDArrow(cocos2d::CCObject*) {
    // 0x8e9134
    // TODO: Implement
}

void SetupOpacityPopup::textInputClosed(CCTextInputNode*) {
    // 0x8e779c
    // TODO: Implement
}

void SetupOpacityPopup::updateOpacityLabel() {
    // 0x8e7b88
    // TODO: Implement
}

void SetupOpacityPopup::determineStartValues() {
    // 0x8e7858
    // TODO: Implement
}

void SetupOpacityPopup::updateTextInputLabel() {
    // 0x8e7bd4
    // TODO: Implement
}

void SetupOpacityPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x8e7cec
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupOpacityPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x8e8aa4
    SetupOpacityPopup* ret = new SetupOpacityPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupOpacityPopup::onClose(cocos2d::CCObject*) {
    // 0x8e79b4
    // TODO: Implement
}

