// ============================================================
// SetupPortalPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupPortalPopup.h"

SetupPortalPopup::~SetupPortalPopup() {
    // 0x969ab0
    this->cleanup();
}

SetupPortalPopup::~SetupPortalPopup() {
    // 0x969a08
    this->cleanup();
}

SetupPortalPopup::~SetupPortalPopup() {
    // 0x969a08
    this->cleanup();
}

void SetupPortalPopup::onUnboundMode(cocos2d::CCObject*) {
    // 0x969d3c
    // TODO: Implement
}

void SetupPortalPopup::sliderChanged(cocos2d::CCObject*) {
    // 0x96aabc
    // TODO: Implement
}

void SetupPortalPopup::keyBackClicked() {
    // 0x969b34
    // TODO: Implement
}

void SetupPortalPopup::updateCameraEasing() {
    // 0x969dfc
    // TODO: Implement
}

void SetupPortalPopup::updateCameraPadding() {
    // 0x96a9d0
    // TODO: Implement
}

void SetupPortalPopup::determineStartValues() {
    // 0x969b44
    // TODO: Implement
}

void SetupPortalPopup::onEditCameraSettings(cocos2d::CCObject*) {
    // 0x96aa38
    // TODO: Implement
}

void SetupPortalPopup::updateItemVisibility() {
    // 0x969cb0
    // TODO: Implement
}

void SetupPortalPopup::updateCameraEasingLabel() {
    // 0x969db4
    // TODO: Implement
}

void SetupPortalPopup::updateCameraPaddingLabel() {
    // 0x969e6c
    // TODO: Implement
}

void SetupPortalPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x969eb8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupPortalPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x96a87c
    SetupPortalPopup* ret = new SetupPortalPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupPortalPopup::onClose(cocos2d::CCObject*) {
    // 0x969adc
    // TODO: Implement
}

