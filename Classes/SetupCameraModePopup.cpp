
#include "SetupCameraModePopup.h"

SetupCameraModePopup::~SetupCameraModePopup() {
    this->cleanup();
}

SetupCameraModePopup::~SetupCameraModePopup() {
    this->cleanup();
}

SetupCameraModePopup::~SetupCameraModePopup() {
    this->cleanup();
}

void SetupCameraModePopup::onUnboundMode(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupCameraModePopup::sliderChanged(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupCameraModePopup::updateCameraEasing() {
    // TODO: Implement
}

void SetupCameraModePopup::updateCameraPadding() {
    // TODO: Implement
}

void SetupCameraModePopup::determineStartValues() {
    // TODO: Implement
}

void SetupCameraModePopup::onEditCameraSettings(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupCameraModePopup::updateItemVisibility() {
    // TODO: Implement
}

void SetupCameraModePopup::updateCameraEasingLabel() {
    // TODO: Implement
}

void SetupCameraModePopup::updateCameraPaddingLabel() {
    // TODO: Implement
}

void SetupCameraModePopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupCameraModePopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupCameraModePopup* ret = new SetupCameraModePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupCameraModePopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

