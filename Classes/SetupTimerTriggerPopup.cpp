
#include "SetupTimerTriggerPopup.h"

SetupTimerTriggerPopup::~SetupTimerTriggerPopup() {
    this->cleanup();
}

SetupTimerTriggerPopup::~SetupTimerTriggerPopup() {
    this->cleanup();
}

SetupTimerTriggerPopup::~SetupTimerTriggerPopup() {
    this->cleanup();
}

void SetupTimerTriggerPopup::init(TimerTriggerGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupTimerTriggerPopup::create(TimerTriggerGameObject*, cocos2d::CCArray*) {
    SetupTimerTriggerPopup* ret = new SetupTimerTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

