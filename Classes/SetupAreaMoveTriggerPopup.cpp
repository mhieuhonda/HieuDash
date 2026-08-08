// ============================================================
// SetupAreaMoveTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupAreaMoveTriggerPopup.h"

SetupAreaMoveTriggerPopup::~SetupAreaMoveTriggerPopup() {
    // 0xa08cec
    this->cleanup();
}

SetupAreaMoveTriggerPopup::~SetupAreaMoveTriggerPopup() {
    // 0xa089b4
    this->cleanup();
}

SetupAreaMoveTriggerPopup::~SetupAreaMoveTriggerPopup() {
    // 0xa089b4
    this->cleanup();
}

void SetupAreaMoveTriggerPopup::getModeValues(int, int&, bool&, bool&) {
    // 0xa09a84
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::valueDidChange(int, float) {
    // 0xa09074
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::onSpecialTarget(cocos2d::CCObject*) {
    // 0xa099b0
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::updateInputNode(int, float) {
    // 0xa0c67c
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::updateInputValue(int, float&) {
    // 0xa0c6c4
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::onNextFreeEffectID(cocos2d::CCObject*) {
    // 0xa12a60
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::addAreaDefaultControls(int) {
    // 0xa09c7c
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::updateEnterTargetIDState() {
    // 0xa095f0
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::updateDefaultTriggerValues() {
    // 0xa0995c
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::triggerSliderValueFromValue(int, float) {
    // 0xa0c624
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::triggerValueFromSliderValue(int, float) {
    // 0xa0c5e0
    // TODO: Implement
}

void SetupAreaMoveTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*) {
    // 0xa0b254
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAreaMoveTriggerPopup::create(EnterEffectObject*, cocos2d::CCArray*) {
    // 0xa0c3b0
    SetupAreaMoveTriggerPopup* ret = new SetupAreaMoveTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupAreaMoveTriggerPopup::onMode(cocos2d::CCObject*) {
    // 0xa09af8
    // TODO: Implement
}

