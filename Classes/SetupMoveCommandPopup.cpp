// ============================================================
// SetupMoveCommandPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupMoveCommandPopup.h"

SetupMoveCommandPopup::~SetupMoveCommandPopup() {
    // 0x8e4080
    this->cleanup();
}

SetupMoveCommandPopup::~SetupMoveCommandPopup() {
    // 0x8e4014
    this->cleanup();
}

SetupMoveCommandPopup::~SetupMoveCommandPopup() {
    // 0x8e4014
    this->cleanup();
}

void SetupMoveCommandPopup::valueDidChange(int, float) {
    // 0x8e4438
    // TODO: Implement
}

void SetupMoveCommandPopup::updateInputNode(int, float) {
    // 0x8e40ac
    // TODO: Implement
}

void SetupMoveCommandPopup::updateInputValue(int, float&) {
    // 0x8e4198
    // TODO: Implement
}

void SetupMoveCommandPopup::updateControlVisibility() {
    // 0x8e4278
    // TODO: Implement
}

void SetupMoveCommandPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0x8e40d8
    // TODO: Implement
}

void SetupMoveCommandPopup::triggerSliderValueFromValue(int, float) {
    // 0x8e4210
    // TODO: Implement
}

void SetupMoveCommandPopup::triggerValueFromSliderValue(int, float) {
    // 0x8e41cc
    // TODO: Implement
}

void SetupMoveCommandPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x8e45e8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupMoveCommandPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x8e5d78
    SetupMoveCommandPopup* ret = new SetupMoveCommandPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

