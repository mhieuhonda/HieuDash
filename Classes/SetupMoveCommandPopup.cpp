
#include "SetupMoveCommandPopup.h"

SetupMoveCommandPopup::~SetupMoveCommandPopup() {
    this->cleanup();
}

SetupMoveCommandPopup::~SetupMoveCommandPopup() {
    this->cleanup();
}

SetupMoveCommandPopup::~SetupMoveCommandPopup() {
    this->cleanup();
}

void SetupMoveCommandPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupMoveCommandPopup::updateInputNode(int, float) {
    // TODO: Implement
}

void SetupMoveCommandPopup::updateInputValue(int, float&) {
    // TODO: Implement
}

void SetupMoveCommandPopup::updateControlVisibility() {
    // TODO: Implement
}

void SetupMoveCommandPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupMoveCommandPopup::triggerSliderValueFromValue(int, float) {
    // TODO: Implement
}

void SetupMoveCommandPopup::triggerValueFromSliderValue(int, float) {
    // TODO: Implement
}

void SetupMoveCommandPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupMoveCommandPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupMoveCommandPopup* ret = new SetupMoveCommandPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

