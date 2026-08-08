
#include "SetupTouchTogglePopup.h"

SetupTouchTogglePopup::~SetupTouchTogglePopup() {
    this->cleanup();
}

SetupTouchTogglePopup::~SetupTouchTogglePopup() {
    this->cleanup();
}

SetupTouchTogglePopup::~SetupTouchTogglePopup() {
    this->cleanup();
}

void SetupTouchTogglePopup::onHoldMode(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupTouchTogglePopup::onTouchMode(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupTouchTogglePopup::textChanged(CCTextInputNode*) {
    // TODO: Implement
}

void SetupTouchTogglePopup::onControlMode(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupTouchTogglePopup::updateTargetID() {
    // TODO: Implement
}

void SetupTouchTogglePopup::onDualTouchMode(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupTouchTogglePopup::onTargetIDArrow(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupTouchTogglePopup::determineStartValues() {
    // TODO: Implement
}

void SetupTouchTogglePopup::updateTextInputLabel() {
    // TODO: Implement
}

void SetupTouchTogglePopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupTouchTogglePopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupTouchTogglePopup* ret = new SetupTouchTogglePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupTouchTogglePopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

