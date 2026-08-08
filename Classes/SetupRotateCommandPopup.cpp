
#include "SetupRotateCommandPopup.h"

SetupRotateCommandPopup::~SetupRotateCommandPopup() {
    this->cleanup();
}

SetupRotateCommandPopup::~SetupRotateCommandPopup() {
    this->cleanup();
}

SetupRotateCommandPopup::~SetupRotateCommandPopup() {
    this->cleanup();
}

void SetupRotateCommandPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupRotateCommandPopup::updateInputNode(int, float) {
    // TODO: Implement
}

void SetupRotateCommandPopup::onInfiniteDuration(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupRotateCommandPopup::updateControlVisibility() {
    // TODO: Implement
}

void SetupRotateCommandPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupRotateCommandPopup::triggerSliderValueFromValue(int, float) {
    // TODO: Implement
}

void SetupRotateCommandPopup::triggerValueFromSliderValue(int, float) {
    // TODO: Implement
}

void SetupRotateCommandPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupRotateCommandPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupRotateCommandPopup* ret = new SetupRotateCommandPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

