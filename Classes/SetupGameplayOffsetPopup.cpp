// ============================================================
// SetupGameplayOffsetPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupGameplayOffsetPopup.h"

SetupGameplayOffsetPopup::~SetupGameplayOffsetPopup() {
    // 0x9ef334
    this->cleanup();
}

SetupGameplayOffsetPopup::~SetupGameplayOffsetPopup() {
    // 0x9ef2c8
    this->cleanup();
}

SetupGameplayOffsetPopup::~SetupGameplayOffsetPopup() {
    // 0x9ef2c8
    this->cleanup();
}

void SetupGameplayOffsetPopup::onDefaultValues(cocos2d::CCObject*) {
    // 0x9ef284
    // TODO: Implement
}

void SetupGameplayOffsetPopup::updateInputNode(int, float) {
    // 0x9f0f94
    // TODO: Implement
}

void SetupGameplayOffsetPopup::updateInputValue(int, float&) {
    // 0x9f0fdc
    // TODO: Implement
}

void SetupGameplayOffsetPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0x9ef458
    // TODO: Implement
}

void SetupGameplayOffsetPopup::triggerSliderValueFromValue(int, float) {
    // 0x9f0f3c
    // TODO: Implement
}

void SetupGameplayOffsetPopup::triggerValueFromSliderValue(int, float) {
    // 0x9f0ef8
    // TODO: Implement
}

void SetupGameplayOffsetPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x9f03a4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupGameplayOffsetPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x9f0cf4
    SetupGameplayOffsetPopup* ret = new SetupGameplayOffsetPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

