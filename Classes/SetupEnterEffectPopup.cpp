
#include "SetupEnterEffectPopup.h"

SetupEnterEffectPopup::~SetupEnterEffectPopup() {
    this->cleanup();
}

SetupEnterEffectPopup::~SetupEnterEffectPopup() {
    this->cleanup();
}

SetupEnterEffectPopup::~SetupEnterEffectPopup() {
    this->cleanup();
}

void SetupEnterEffectPopup::onEnterType(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupEnterEffectPopup::hsvPopupClosed(HSVWidgetPopup*, cocos2d::_ccHSVValue) {
    // TODO: Implement
}

void SetupEnterEffectPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupEnterEffectPopup::updateHSVButton() {
    // TODO: Implement
}

void SetupEnterEffectPopup::updateInputNode(int, float) {
    // TODO: Implement
}

void SetupEnterEffectPopup::updateInputValue(int, float&) {
    // TODO: Implement
}

void SetupEnterEffectPopup::determineStartValues() {
    // TODO: Implement
}

void SetupEnterEffectPopup::onNextFreeEnterChannel(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupEnterEffectPopup::onNextFreeEnterEffectID(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupEnterEffectPopup::triggerSliderValueFromValue(int, float) {
    // TODO: Implement
}

void SetupEnterEffectPopup::triggerValueFromSliderValue(int, float) {
    // TODO: Implement
}

void SetupEnterEffectPopup::init(EnterEffectObject*, cocos2d::CCArray*, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupEnterEffectPopup::onHSV(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupEnterEffectPopup::create(EnterEffectObject*, cocos2d::CCArray*, int) {
    SetupEnterEffectPopup* ret = new SetupEnterEffectPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupEnterEffectPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

