// ============================================================
// SetupCameraRotatePopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupCameraRotatePopup.h"

SetupCameraRotatePopup::~SetupCameraRotatePopup() {
    // 0x9ab8a4
    this->cleanup();
}

SetupCameraRotatePopup::~SetupCameraRotatePopup() {
    // 0x9ab7cc
    this->cleanup();
}

SetupCameraRotatePopup::~SetupCameraRotatePopup() {
    // 0x9ab7cc
    this->cleanup();
}

void SetupCameraRotatePopup::textChanged(CCTextInputNode*) {
    // 0x9ad9f8
    // TODO: Implement
}

void SetupCameraRotatePopup::onEasingRate(cocos2d::CCObject*) {
    // 0x9abba0
    // TODO: Implement
}

void SetupCameraRotatePopup::sliderChanged(cocos2d::CCObject*) {
    // 0x9ad9b8
    // TODO: Implement
}

void SetupCameraRotatePopup::updateDurLabel(bool) {
    // 0x9ac11c
    // TODO: Implement
}

void SetupCameraRotatePopup::updateDuration() {
    // 0x9ad950
    // TODO: Implement
}

void SetupCameraRotatePopup::valuePopupClosed(ConfigureValuePopup*, float) {
    // 0x9ad810
    // TODO: Implement
}

void SetupCameraRotatePopup::updateEasingLabel() {
    // 0x9abf48
    // TODO: Implement
}

void SetupCameraRotatePopup::updateDegreesLabel() {
    // 0x9ac288
    // TODO: Implement
}

void SetupCameraRotatePopup::determineStartValues() {
    // 0x9ab95c
    // TODO: Implement
}

void SetupCameraRotatePopup::sliderDegreesChanged(cocos2d::CCObject*) {
    // 0x9ad900
    // TODO: Implement
}

void SetupCameraRotatePopup::updateCommandDegrees() {
    // 0x9ad898
    // TODO: Implement
}

void SetupCameraRotatePopup::updateEasingRateLabel() {
    // 0x9abd6c
    // TODO: Implement
}

void SetupCameraRotatePopup::updateMoveCommandEasing() {
    // 0x9ad6d0
    // TODO: Implement
}

void SetupCameraRotatePopup::toggleEasingRateVisibility() {
    // 0x9abeb0
    // TODO: Implement
}

void SetupCameraRotatePopup::updateMoveCommandEasingRate() {
    // 0x9ad7a8
    // TODO: Implement
}

void SetupCameraRotatePopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x9ac3c0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupCameraRotatePopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x9ad4d4
    SetupCameraRotatePopup* ret = new SetupCameraRotatePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupCameraRotatePopup::onClose(cocos2d::CCObject*) {
    // 0x9abb38
    // TODO: Implement
}

void SetupCameraRotatePopup::onEasing(cocos2d::CCObject*) {
    // 0x9ad738
    // TODO: Implement
}

