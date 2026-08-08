
#include "SetupPickupTriggerPopup.h"

SetupPickupTriggerPopup::~SetupPickupTriggerPopup() {
    this->cleanup();
}

SetupPickupTriggerPopup::~SetupPickupTriggerPopup() {
    this->cleanup();
}

SetupPickupTriggerPopup::~SetupPickupTriggerPopup() {
    this->cleanup();
}

void SetupPickupTriggerPopup::updateState() {
    // TODO: Implement
}

void SetupPickupTriggerPopup::onPlusButton(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupPickupTriggerPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupPickupTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupPickupTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupPickupTriggerPopup* ret = new SetupPickupTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

