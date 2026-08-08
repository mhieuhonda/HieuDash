
#include "SetupTimerControlTriggerPopup.h"

SetupTimerControlTriggerPopup::~SetupTimerControlTriggerPopup() {
    this->cleanup();
}

SetupTimerControlTriggerPopup::~SetupTimerControlTriggerPopup() {
    this->cleanup();
}

SetupTimerControlTriggerPopup::~SetupTimerControlTriggerPopup() {
    this->cleanup();
}

void SetupTimerControlTriggerPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupTimerControlTriggerPopup::init(TimerTriggerGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupTimerControlTriggerPopup::create(TimerTriggerGameObject*, cocos2d::CCArray*) {
    SetupTimerControlTriggerPopup* ret = new SetupTimerControlTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

