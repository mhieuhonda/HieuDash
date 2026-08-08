
#include "SetupStopTriggerPopup.h"

SetupStopTriggerPopup::~SetupStopTriggerPopup() {
    this->cleanup();
}

void SetupStopTriggerPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // Stub - not yet implemented
}

void SetupStopTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void SetupStopTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupStopTriggerPopup* ret = new SetupStopTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupStopTriggerPopup::onClose(cocos2d::CCObject*) {
    // Stub - not yet implemented
}

