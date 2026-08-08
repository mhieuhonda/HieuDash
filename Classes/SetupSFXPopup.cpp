// ============================================================
// SetupSFXPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupSFXPopup.h"

SetupSFXPopup::~SetupSFXPopup() {
    // 0xa3d7b8
    this->cleanup();
}

SetupSFXPopup::~SetupSFXPopup() {
    // 0xa3d638
    this->cleanup();
}

SetupSFXPopup::~SetupSFXPopup() {
    // 0xa3d638
    this->cleanup();
}

void SetupSFXPopup::onBrowseSFX(cocos2d::CCObject*) {
    // 0xa3dab8
    // TODO: Implement
}

void SetupSFXPopup::pageChanged() {
    // 0xa3d89c
    // TODO: Implement
}

void SetupSFXPopup::onPlusButton(cocos2d::CCObject*) {
    // 0xa42ac8
    // TODO: Implement
}

void SetupSFXPopup::updateLength() {
    // 0xa3fd80
    // TODO: Implement
}

void SetupSFXPopup::getActiveSFXID() {
    // 0xa3d594
    // TODO: Implement
}

void SetupSFXPopup::valueDidChange(int, float) {
    // 0xa40158
    // TODO: Implement
}

void SetupSFXPopup::createSFXWidget() {
    // 0xa3fdd4
    // TODO: Implement
}

void SetupSFXPopup::overridePlaySFX(SFXInfoObject*) {
    // 0xa3da34
    // TODO: Implement
}

void SetupSFXPopup::sfxBrowserClosed(SFXBrowser*) {
    // 0xa3d8f8
    // TODO: Implement
}

void SetupSFXPopup::sfxObjectSelected(SFXInfoObject*) {
    // 0xa3d588
    // TODO: Implement
}

void SetupSFXPopup::init(SFXTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa40234
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupSFXPopup::create(SFXTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa41798
    SetupSFXPopup* ret = new SetupSFXPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupSFXPopup::onClose(cocos2d::CCObject*) {
    // 0xa3db08
    // TODO: Implement
}

