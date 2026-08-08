
#include "SetupAreaMoveTriggerPopup.h"

SetupAreaMoveTriggerPopup::~SetupAreaMoveTriggerPopup() {
    this->cleanup();
}

SetupAreaMoveTriggerPopup::~SetupAreaMoveTriggerPopup() {
    this->cleanup();
}

SetupAreaMoveTriggerPopup::~SetupAreaMoveTriggerPopup() {
    this->cleanup();
}

void SetupAreaMoveTriggerPopup::getModeValues(int, int&, bool&, bool&) {
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::onSpecialTarget(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::updateInputNode(int, float) {
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::updateInputValue(int, float&) {
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::onNextFreeEffectID(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::addAreaDefaultControls(int) {
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::updateEnterTargetIDState() {
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::updateDefaultTriggerValues() {
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::triggerSliderValueFromValue(int, float) {
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::triggerValueFromSliderValue(int, float) {
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAreaMoveTriggerPopup::create(EnterEffectObject*, cocos2d::CCArray*) {
    SetupAreaMoveTriggerPopup* ret = new SetupAreaMoveTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupAreaMoveTriggerPopup::onMode(cocos2d::CCObject*) {
    // TODO: Implement
}

