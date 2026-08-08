
#include "SetupSFXPopup.h"

SetupSFXPopup::~SetupSFXPopup() {
    this->cleanup();
}

SetupSFXPopup::~SetupSFXPopup() {
    this->cleanup();
}

SetupSFXPopup::~SetupSFXPopup() {
    this->cleanup();
}

void SetupSFXPopup::onBrowseSFX(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupSFXPopup::pageChanged() {
    // TODO: Implement
}

void SetupSFXPopup::onPlusButton(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupSFXPopup::updateLength() {
    // TODO: Implement
}

void SetupSFXPopup::getActiveSFXID() {
    // TODO: Implement
}

void SetupSFXPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupSFXPopup::createSFXWidget() {
    // TODO: Implement
}

void SetupSFXPopup::overridePlaySFX(SFXInfoObject*) {
    // TODO: Implement
}

void SetupSFXPopup::sfxBrowserClosed(SFXBrowser*) {
    // TODO: Implement
}

void SetupSFXPopup::sfxObjectSelected(SFXInfoObject*) {
    // TODO: Implement
}

void SetupSFXPopup::init(SFXTriggerGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupSFXPopup::create(SFXTriggerGameObject*, cocos2d::CCArray*) {
    SetupSFXPopup* ret = new SetupSFXPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupSFXPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

