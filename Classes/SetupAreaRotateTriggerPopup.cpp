
#include "SetupAreaRotateTriggerPopup.h"

SetupAreaRotateTriggerPopup::~SetupAreaRotateTriggerPopup() {
    this->cleanup();
}

SetupAreaRotateTriggerPopup::~SetupAreaRotateTriggerPopup() {
    this->cleanup();
}

SetupAreaRotateTriggerPopup::~SetupAreaRotateTriggerPopup() {
    this->cleanup();
}

void SetupAreaRotateTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAreaRotateTriggerPopup::create(EnterEffectObject*, cocos2d::CCArray*) {
    SetupAreaRotateTriggerPopup* ret = new SetupAreaRotateTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

