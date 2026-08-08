
#include "SetupResetTriggerPopup.h"

SetupResetTriggerPopup::~SetupResetTriggerPopup() {
    this->cleanup();
}

SetupResetTriggerPopup::~SetupResetTriggerPopup() {
    this->cleanup();
}

SetupResetTriggerPopup::~SetupResetTriggerPopup() {
    this->cleanup();
}

void SetupResetTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupResetTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupResetTriggerPopup* ret = new SetupResetTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

