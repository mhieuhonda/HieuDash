// ============================================================
// SetupEnterEffectPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupEnterEffectPopup.h"

SetupEnterEffectPopup::~SetupEnterEffectPopup() {
    // 0xa12bdc
    this->cleanup();
}

SetupEnterEffectPopup::~SetupEnterEffectPopup() {
    // 0xa12b68
    this->cleanup();
}

SetupEnterEffectPopup::~SetupEnterEffectPopup() {
    // 0xa12b68
    this->cleanup();
}

void SetupEnterEffectPopup::onEnterType(cocos2d::CCObject*) {
    // 0xa12e6c
    // TODO: Implement
}

void SetupEnterEffectPopup::hsvPopupClosed(HSVWidgetPopup*, cocos2d::_ccHSVValue) {
    // 0xa131ec
    // TODO: Implement
}

void SetupEnterEffectPopup::valueDidChange(int, float) {
    // 0xa12dac
    // TODO: Implement
}

void SetupEnterEffectPopup::updateHSVButton() {
    // 0xa13138
    // TODO: Implement
}

void SetupEnterEffectPopup::updateInputNode(int, float) {
    // 0xa15d54
    // TODO: Implement
}

void SetupEnterEffectPopup::updateInputValue(int, float&) {
    // 0xa15d9c
    // TODO: Implement
}

void SetupEnterEffectPopup::determineStartValues() {
    // 0xa12c08
    // TODO: Implement
}

void SetupEnterEffectPopup::onNextFreeEnterChannel(cocos2d::CCObject*) {
    // 0xa15dd4
    // TODO: Implement
}

void SetupEnterEffectPopup::onNextFreeEnterEffectID(cocos2d::CCObject*) {
    // 0xa15edc
    // TODO: Implement
}

void SetupEnterEffectPopup::triggerSliderValueFromValue(int, float) {
    // 0xa15cfc
    // TODO: Implement
}

void SetupEnterEffectPopup::triggerValueFromSliderValue(int, float) {
    // 0xa15cb8
    // TODO: Implement
}

void SetupEnterEffectPopup::init(EnterEffectObject*, cocos2d::CCArray*, int) {
    // 0xa13208
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupEnterEffectPopup::onHSV(cocos2d::CCObject*) {
    // 0xa13028
    // TODO: Implement
}

void SetupEnterEffectPopup::create(EnterEffectObject*, cocos2d::CCArray*, int) {
    // 0xa15a68
    SetupEnterEffectPopup* ret = new SetupEnterEffectPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupEnterEffectPopup::onClose(cocos2d::CCObject*) {
    // 0xa12f3c
    // TODO: Implement
}

