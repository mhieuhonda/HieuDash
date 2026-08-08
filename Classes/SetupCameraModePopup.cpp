// ============================================================
// SetupCameraModePopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupCameraModePopup.h"

SetupCameraModePopup::~SetupCameraModePopup() {
    // 0xa16084
    this->cleanup();
}

SetupCameraModePopup::~SetupCameraModePopup() {
    // 0xa15fe4
    this->cleanup();
}

SetupCameraModePopup::~SetupCameraModePopup() {
    // 0xa15fe4
    this->cleanup();
}

void SetupCameraModePopup::onUnboundMode(cocos2d::CCObject*) {
    // 0xa162c0
    // TODO: Implement
}

void SetupCameraModePopup::sliderChanged(cocos2d::CCObject*) {
    // 0xa17118
    // TODO: Implement
}

void SetupCameraModePopup::updateCameraEasing() {
    // 0xa16380
    // TODO: Implement
}

void SetupCameraModePopup::updateCameraPadding() {
    // 0xa1702c
    // TODO: Implement
}

void SetupCameraModePopup::determineStartValues() {
    // 0xa160b0
    // TODO: Implement
}

void SetupCameraModePopup::onEditCameraSettings(cocos2d::CCObject*) {
    // 0xa17094
    // TODO: Implement
}

void SetupCameraModePopup::updateItemVisibility() {
    // 0xa16234
    // TODO: Implement
}

void SetupCameraModePopup::updateCameraEasingLabel() {
    // 0xa16338
    // TODO: Implement
}

void SetupCameraModePopup::updateCameraPaddingLabel() {
    // 0xa163f0
    // TODO: Implement
}

void SetupCameraModePopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa1643c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupCameraModePopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa16e34
    SetupCameraModePopup* ret = new SetupCameraModePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupCameraModePopup::onClose(cocos2d::CCObject*) {
    // 0xa16230
    // TODO: Implement
}

