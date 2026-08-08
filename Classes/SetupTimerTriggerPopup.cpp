// ============================================================
// SetupTimerTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupTimerTriggerPopup.h"

SetupTimerTriggerPopup::~SetupTimerTriggerPopup() {
    // 0xa7b2c8
    this->cleanup();
}

SetupTimerTriggerPopup::~SetupTimerTriggerPopup() {
    // 0xa7b25c
    this->cleanup();
}

SetupTimerTriggerPopup::~SetupTimerTriggerPopup() {
    // 0xa7b25c
    this->cleanup();
}

void SetupTimerTriggerPopup::init(TimerTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa7b5a8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupTimerTriggerPopup::create(TimerTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa7c0d0
    SetupTimerTriggerPopup* ret = new SetupTimerTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

