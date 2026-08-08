
#include "SetupAreaFadeTriggerPopup.h"

SetupAreaFadeTriggerPopup::~SetupAreaFadeTriggerPopup() {
    this->cleanup();
}

void SetupAreaFadeTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
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

