
#include "SetupGameplayOffsetPopup.h"

SetupGameplayOffsetPopup::~SetupGameplayOffsetPopup() {
    this->cleanup();
}

SetupGameplayOffsetPopup::~SetupGameplayOffsetPopup() {
    this->cleanup();
}

SetupGameplayOffsetPopup::~SetupGameplayOffsetPopup() {
    this->cleanup();
}

void SetupGameplayOffsetPopup::onDefaultValues(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupGameplayOffsetPopup::updateInputNode(int, float) {
    // TODO: Implement
}

void SetupGameplayOffsetPopup::updateInputValue(int, float&) {
    // TODO: Implement
}

void SetupGameplayOffsetPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupGameplayOffsetPopup::triggerSliderValueFromValue(int, float) {
    // TODO: Implement
}

void SetupGameplayOffsetPopup::triggerValueFromSliderValue(int, float) {
    // TODO: Implement
}

void SetupGameplayOffsetPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupGameplayOffsetPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupGameplayOffsetPopup* ret = new SetupGameplayOffsetPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

