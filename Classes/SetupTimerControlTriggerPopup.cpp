// ============================================================
// SetupTimerControlTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupTimerControlTriggerPopup.h"

SetupTimerControlTriggerPopup::~SetupTimerControlTriggerPopup() {
    // 0xa7b4b8
    this->cleanup();
}

SetupTimerControlTriggerPopup::~SetupTimerControlTriggerPopup() {
    // 0xa7b44c
    this->cleanup();
}

SetupTimerControlTriggerPopup::~SetupTimerControlTriggerPopup() {
    // 0xa7b44c
    this->cleanup();
}

void SetupTimerControlTriggerPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0xa7b544
    // TODO: Implement
}

void SetupTimerControlTriggerPopup::init(TimerTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa7cbec
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupTimerControlTriggerPopup::create(TimerTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa7d1fc
    SetupTimerControlTriggerPopup* ret = new SetupTimerControlTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

