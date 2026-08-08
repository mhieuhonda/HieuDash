// ============================================================
// SetupStopTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupStopTriggerPopup.h"

SetupStopTriggerPopup::~SetupStopTriggerPopup() {
    // 0xa4396c
    this->cleanup();
}

SetupStopTriggerPopup::~SetupStopTriggerPopup() {
    // 0xa43184
    this->cleanup();
}

SetupStopTriggerPopup::~SetupStopTriggerPopup() {
    // 0xa43184
    this->cleanup();
}

void SetupStopTriggerPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0xa43e44
    // TODO: Implement
}

void SetupStopTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa51fe8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupStopTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa52930
    SetupStopTriggerPopup* ret = new SetupStopTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupStopTriggerPopup::onClose(cocos2d::CCObject*) {
    // 0xa43f54
    // TODO: Implement
}

