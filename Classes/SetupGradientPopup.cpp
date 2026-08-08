// ============================================================
// SetupGradientPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupGradientPopup.h"

SetupGradientPopup::~SetupGradientPopup() {
    // 0x9f9dfc
    this->cleanup();
}

SetupGradientPopup::~SetupGradientPopup() {
    // 0x9f9d68
    this->cleanup();
}

SetupGradientPopup::~SetupGradientPopup() {
    // 0x9f9d68
    this->cleanup();
}

void SetupGradientPopup::onBlending(cocos2d::CCObject*) {
    // 0x9fa36c
    // TODO: Implement
}

void SetupGradientPopup::onPlusButton(cocos2d::CCObject*) {
    // 0x9fb84c
    // TODO: Implement
}

void SetupGradientPopup::sliderChanged(cocos2d::CCObject*) {
    // 0x9fa228
    // TODO: Implement
}

void SetupGradientPopup::updateBlending() {
    // 0x9fa258
    // TODO: Implement
}

void SetupGradientPopup::valueDidChange(int, float) {
    // 0x9f9f44
    // TODO: Implement
}

void SetupGradientPopup::updateToggleItem(int, bool) {
    // 0x9fa0a8
    // TODO: Implement
}

void SetupGradientPopup::updateBlendingLabel() {
    // 0x9fa2c0
    // TODO: Implement
}

void SetupGradientPopup::updateZLayerButtons() {
    // 0x9fa0fc
    // TODO: Implement
}

void SetupGradientPopup::determineStartValues() {
    // 0x9f9e28
    // TODO: Implement
}

void SetupGradientPopup::updateGradientLabels(bool) {
    // 0x9f9f7c
    // TODO: Implement
}

void SetupGradientPopup::init(GradientTriggerObject*, cocos2d::CCArray*) {
    // 0x9fa3d4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupGradientPopup::create(GradientTriggerObject*, cocos2d::CCArray*) {
    // 0x9fb648
    SetupGradientPopup* ret = new SetupGradientPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupGradientPopup::onZLayer(cocos2d::CCObject*) {
    // 0x9fa1a8
    // TODO: Implement
}

