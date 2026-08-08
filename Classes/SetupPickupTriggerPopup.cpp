// ============================================================
// SetupPickupTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupPickupTriggerPopup.h"

SetupPickupTriggerPopup::~SetupPickupTriggerPopup() {
    // 0x957644
    this->cleanup();
}

SetupPickupTriggerPopup::~SetupPickupTriggerPopup() {
    // 0x9575d8
    this->cleanup();
}

SetupPickupTriggerPopup::~SetupPickupTriggerPopup() {
    // 0x9575d8
    this->cleanup();
}

void SetupPickupTriggerPopup::updateState() {
    // 0x9576d0
    // TODO: Implement
}

void SetupPickupTriggerPopup::onPlusButton(cocos2d::CCObject*) {
    // 0x958374
    // TODO: Implement
}

void SetupPickupTriggerPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0x957734
    // TODO: Implement
}

void SetupPickupTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x9577dc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupPickupTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x958180
    SetupPickupTriggerPopup* ret = new SetupPickupTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

