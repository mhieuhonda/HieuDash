
#include "SetupRandTriggerPopup.h"

SetupRandTriggerPopup::~SetupRandTriggerPopup() {
    this->cleanup();
}

SetupRandTriggerPopup::~SetupRandTriggerPopup() {
    this->cleanup();
}

SetupRandTriggerPopup::~SetupRandTriggerPopup() {
    this->cleanup();
}

void SetupRandTriggerPopup::textChanged(CCTextInputNode*) {
    // TODO: Implement
}

void SetupRandTriggerPopup::updateChance() {
    // TODO: Implement
}

void SetupRandTriggerPopup::sliderChanged(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupRandTriggerPopup::updateTargetID() {
    // TODO: Implement
}

void SetupRandTriggerPopup::onTargetIDArrow(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupRandTriggerPopup::updateTargetID2() {
    // TODO: Implement
}

void SetupRandTriggerPopup::onTargetID2Arrow(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupRandTriggerPopup::updateChanceLabel(bool) {
    // TODO: Implement
}

void SetupRandTriggerPopup::determineStartValues() {
    // TODO: Implement
}

void SetupRandTriggerPopup::updateTextInputLabel() {
    // TODO: Implement
}

void SetupRandTriggerPopup::updateTextInputLabel2() {
    // TODO: Implement
}

void SetupRandTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupRandTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupRandTriggerPopup* ret = new SetupRandTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupRandTriggerPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

