
#include "SetupPortalPopup.h"

SetupPortalPopup::~SetupPortalPopup() {
    this->cleanup();
}

SetupPortalPopup::~SetupPortalPopup() {
    this->cleanup();
}

SetupPortalPopup::~SetupPortalPopup() {
    this->cleanup();
}

void SetupPortalPopup::onUnboundMode(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupPortalPopup::sliderChanged(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupPortalPopup::keyBackClicked() {
    // TODO: Implement
}

void SetupPortalPopup::updateCameraEasing() {
    // TODO: Implement
}

void SetupPortalPopup::updateCameraPadding() {
    // TODO: Implement
}

void SetupPortalPopup::determineStartValues() {
    // TODO: Implement
}

void SetupPortalPopup::onEditCameraSettings(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupPortalPopup::updateItemVisibility() {
    // TODO: Implement
}

void SetupPortalPopup::updateCameraEasingLabel() {
    // TODO: Implement
}

void SetupPortalPopup::updateCameraPaddingLabel() {
    // TODO: Implement
}

void SetupPortalPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupPortalPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupPortalPopup* ret = new SetupPortalPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupPortalPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

