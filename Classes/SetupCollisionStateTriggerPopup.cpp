
#include "SetupCollisionStateTriggerPopup.h"

SetupCollisionStateTriggerPopup::~SetupCollisionStateTriggerPopup() {
    this->cleanup();
}

void SetupCollisionStateTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void SetupCollisionStateTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupCollisionStateTriggerPopup* ret = new SetupCollisionStateTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

