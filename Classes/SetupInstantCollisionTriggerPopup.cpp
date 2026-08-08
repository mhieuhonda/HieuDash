
#include "SetupInstantCollisionTriggerPopup.h"

SetupInstantCollisionTriggerPopup::~SetupInstantCollisionTriggerPopup() {
    this->cleanup();
}

SetupInstantCollisionTriggerPopup::~SetupInstantCollisionTriggerPopup() {
    this->cleanup();
}

SetupInstantCollisionTriggerPopup::~SetupInstantCollisionTriggerPopup() {
    this->cleanup();
}

void SetupInstantCollisionTriggerPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupInstantCollisionTriggerPopup::updateSpecialNodes() {
    // TODO: Implement
}

void SetupInstantCollisionTriggerPopup::updateDefaultTriggerValues() {
    // TODO: Implement
}

void SetupInstantCollisionTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupInstantCollisionTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupInstantCollisionTriggerPopup* ret = new SetupInstantCollisionTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

