// ============================================================
// SetupRotateCommandPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupRotateCommandPopup.h"

SetupRotateCommandPopup::~SetupRotateCommandPopup() {
    // 0x9252f4
    this->cleanup();
}

SetupRotateCommandPopup::~SetupRotateCommandPopup() {
    // 0x92525c
    this->cleanup();
}

SetupRotateCommandPopup::~SetupRotateCommandPopup() {
    // 0x92525c
    this->cleanup();
}

void SetupRotateCommandPopup::valueDidChange(int, float) {
    // 0x928d1c
    // TODO: Implement
}

void SetupRotateCommandPopup::updateInputNode(int, float) {
    // 0x9257ac
    // TODO: Implement
}

void SetupRotateCommandPopup::onInfiniteDuration(cocos2d::CCObject*) {
    // 0x9257b0
    // TODO: Implement
}

void SetupRotateCommandPopup::updateControlVisibility() {
    // 0x928c34
    // TODO: Implement
}

void SetupRotateCommandPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0x9251d0
    // TODO: Implement
}

void SetupRotateCommandPopup::triggerSliderValueFromValue(int, float) {
    // 0x9257a8
    // TODO: Implement
}

void SetupRotateCommandPopup::triggerValueFromSliderValue(int, float) {
    // 0x9257bc
    // TODO: Implement
}

void SetupRotateCommandPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x928e24
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupRotateCommandPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x92a250
    SetupRotateCommandPopup* ret = new SetupRotateCommandPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

