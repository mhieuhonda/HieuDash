// ============================================================
// SetupRandTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupRandTriggerPopup.h"

SetupRandTriggerPopup::~SetupRandTriggerPopup() {
    // 0x96c418
    this->cleanup();
}

SetupRandTriggerPopup::~SetupRandTriggerPopup() {
    // 0x96c3ac
    this->cleanup();
}

SetupRandTriggerPopup::~SetupRandTriggerPopup() {
    // 0x96c3ac
    this->cleanup();
}

void SetupRandTriggerPopup::textChanged(CCTextInputNode*) {
    // 0x96dc6c
    // TODO: Implement
}

void SetupRandTriggerPopup::updateChance() {
    // 0x96c774
    // TODO: Implement
}

void SetupRandTriggerPopup::sliderChanged(cocos2d::CCObject*) {
    // 0x96c7dc
    // TODO: Implement
}

void SetupRandTriggerPopup::updateTargetID() {
    // 0x96db08
    // TODO: Implement
}

void SetupRandTriggerPopup::onTargetIDArrow(cocos2d::CCObject*) {
    // 0x96db8c
    // TODO: Implement
}

void SetupRandTriggerPopup::updateTargetID2() {
    // 0x96dbe8
    // TODO: Implement
}

void SetupRandTriggerPopup::onTargetID2Arrow(cocos2d::CCObject*) {
    // 0x96ded8
    // TODO: Implement
}

void SetupRandTriggerPopup::updateChanceLabel(bool) {
    // 0x96c608
    // TODO: Implement
}

void SetupRandTriggerPopup::determineStartValues() {
    // 0x96c444
    // TODO: Implement
}

void SetupRandTriggerPopup::updateTextInputLabel() {
    // 0x96c824
    // TODO: Implement
}

void SetupRandTriggerPopup::updateTextInputLabel2() {
    // 0x96c9d4
    // TODO: Implement
}

void SetupRandTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x96cb84
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupRandTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x96d8f8
    SetupRandTriggerPopup* ret = new SetupRandTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupRandTriggerPopup::onClose(cocos2d::CCObject*) {
    // 0x96c56c
    // TODO: Implement
}

