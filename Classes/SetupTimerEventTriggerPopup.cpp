// ============================================================
// SetupTimerEventTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupTimerEventTriggerPopup.h"

SetupTimerEventTriggerPopup::~SetupTimerEventTriggerPopup() {
    // 0xa7b3c0
    this->cleanup();
}

SetupTimerEventTriggerPopup::~SetupTimerEventTriggerPopup() {
    // 0xa7b354
    this->cleanup();
}

SetupTimerEventTriggerPopup::~SetupTimerEventTriggerPopup() {
    // 0xa7b354
    this->cleanup();
}

void SetupTimerEventTriggerPopup::init(TimerTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa7c2c4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupTimerEventTriggerPopup::create(TimerTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa7c9f8
    SetupTimerEventTriggerPopup* ret = new SetupTimerEventTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

