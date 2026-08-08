
#include "SetupGravityTriggerPopup.h"

SetupGravityTriggerPopup::~SetupGravityTriggerPopup() {
    this->cleanup();
}

SetupGravityTriggerPopup::~SetupGravityTriggerPopup() {
    this->cleanup();
}

SetupGravityTriggerPopup::~SetupGravityTriggerPopup() {
    this->cleanup();
}

void SetupGravityTriggerPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupGravityTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupGravityTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupGravityTriggerPopup* ret = new SetupGravityTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

