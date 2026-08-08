
#include "SetupAreaTintTriggerPopup.h"

SetupAreaTintTriggerPopup::~SetupAreaTintTriggerPopup() {
    this->cleanup();
}

SetupAreaTintTriggerPopup::~SetupAreaTintTriggerPopup() {
    this->cleanup();
}

SetupAreaTintTriggerPopup::~SetupAreaTintTriggerPopup() {
    this->cleanup();
}

void SetupAreaTintTriggerPopup::hsvPopupClosed(HSVWidgetPopup*, cocos2d::_ccHSVValue) {
    // TODO: Implement
}

void SetupAreaTintTriggerPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupAreaTintTriggerPopup::updateHSVButton() {
    // TODO: Implement
}

void SetupAreaTintTriggerPopup::determineStartValues() {
    // TODO: Implement
}

void SetupAreaTintTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAreaTintTriggerPopup::onHSV(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupAreaTintTriggerPopup::create(EnterEffectObject*, cocos2d::CCArray*) {
    SetupAreaTintTriggerPopup* ret = new SetupAreaTintTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupAreaTintTriggerPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

