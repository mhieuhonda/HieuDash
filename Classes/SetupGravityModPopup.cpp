
#include "SetupGravityModPopup.h"

SetupGravityModPopup::~SetupGravityModPopup() {
    this->cleanup();
}

SetupGravityModPopup::~SetupGravityModPopup() {
    this->cleanup();
}

SetupGravityModPopup::~SetupGravityModPopup() {
    this->cleanup();
}

void SetupGravityModPopup::textChanged(CCTextInputNode*) {
    // TODO: Implement
}

void SetupGravityModPopup::updateValue() {
    // TODO: Implement
}

void SetupGravityModPopup::updateItemID() {
    // TODO: Implement
}

void SetupGravityModPopup::onItemIDArrow(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupGravityModPopup::sliderChanged(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupGravityModPopup::keyBackClicked() {
    // TODO: Implement
}

void SetupGravityModPopup::textInputClosed(CCTextInputNode*) {
    // TODO: Implement
}

void SetupGravityModPopup::updateValueLabel() {
    // TODO: Implement
}

void SetupGravityModPopup::determineStartValues() {
    // TODO: Implement
}

void SetupGravityModPopup::updateTextInputLabel() {
    // TODO: Implement
}

void SetupGravityModPopup::init(EffectGameObject*, cocos2d::CCArray*, bool) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupGravityModPopup::show() {
    // TODO: Implement
}

void SetupGravityModPopup::create(EffectGameObject*, cocos2d::CCArray*, bool) {
    SetupGravityModPopup* ret = new SetupGravityModPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupGravityModPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

