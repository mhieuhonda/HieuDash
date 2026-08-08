
#include "SetupAreaFadeTriggerPopup.h"

SetupAreaFadeTriggerPopup::~SetupAreaFadeTriggerPopup() {
    this->cleanup();
}

SetupAreaFadeTriggerPopup::~SetupAreaFadeTriggerPopup() {
    this->cleanup();
}

SetupAreaFadeTriggerPopup::~SetupAreaFadeTriggerPopup() {
    this->cleanup();
}

void SetupAreaFadeTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAreaFadeTriggerPopup::create(EnterEffectObject*, cocos2d::CCArray*) {
    SetupAreaFadeTriggerPopup* ret = new SetupAreaFadeTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

