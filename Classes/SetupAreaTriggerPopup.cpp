
#include "SetupAreaTriggerPopup.h"

SetupAreaTriggerPopup::~SetupAreaTriggerPopup() {
    this->cleanup();
}

SetupAreaTriggerPopup::~SetupAreaTriggerPopup() {
    this->cleanup();
}

SetupAreaTriggerPopup::~SetupAreaTriggerPopup() {
    this->cleanup();
}

void SetupAreaTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAreaTriggerPopup::create(EnterEffectObject*, cocos2d::CCArray*) {
    SetupAreaTriggerPopup* ret = new SetupAreaTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

