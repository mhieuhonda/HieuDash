
#include "SetupTimerEventTriggerPopup.h"

SetupTimerEventTriggerPopup::~SetupTimerEventTriggerPopup() {
    this->cleanup();
}

SetupTimerEventTriggerPopup::~SetupTimerEventTriggerPopup() {
    this->cleanup();
}

SetupTimerEventTriggerPopup::~SetupTimerEventTriggerPopup() {
    this->cleanup();
}

void SetupTimerEventTriggerPopup::init(TimerTriggerGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupTimerEventTriggerPopup::create(TimerTriggerGameObject*, cocos2d::CCArray*) {
    SetupTimerEventTriggerPopup* ret = new SetupTimerEventTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

