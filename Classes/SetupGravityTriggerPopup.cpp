
#include "SetupGravityTriggerPopup.h"

SetupGravityTriggerPopup::~SetupGravityTriggerPopup() {
    this->cleanup();
}

void SetupGravityTriggerPopup::valueDidChange(int, float) {
    // Stub - not yet implemented
}

void SetupGravityTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
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

