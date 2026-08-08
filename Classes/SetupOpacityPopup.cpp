
#include "SetupOpacityPopup.h"

SetupOpacityPopup::~SetupOpacityPopup() {
    this->cleanup();
}

SetupOpacityPopup::~SetupOpacityPopup() {
    this->cleanup();
}

SetupOpacityPopup::~SetupOpacityPopup() {
    this->cleanup();
}

void SetupOpacityPopup::textChanged(CCTextInputNode*) {
    // TODO: Implement
}

void SetupOpacityPopup::sliderChanged(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupOpacityPopup::updateOpacity() {
    // TODO: Implement
}

void SetupOpacityPopup::updateDurLabel(bool) {
    // TODO: Implement
}

void SetupOpacityPopup::updateDuration() {
    // TODO: Implement
}

void SetupOpacityPopup::updateTargetID() {
    // TODO: Implement
}

void SetupOpacityPopup::onTargetIDArrow(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupOpacityPopup::textInputClosed(CCTextInputNode*) {
    // TODO: Implement
}

void SetupOpacityPopup::updateOpacityLabel() {
    // TODO: Implement
}

void SetupOpacityPopup::determineStartValues() {
    // TODO: Implement
}

void SetupOpacityPopup::updateTextInputLabel() {
    // TODO: Implement
}

void SetupOpacityPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupOpacityPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupOpacityPopup* ret = new SetupOpacityPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupOpacityPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

