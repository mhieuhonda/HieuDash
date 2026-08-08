// ============================================================
// SetupMGTrigger.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupMGTrigger.h"

SetupMGTrigger::~SetupMGTrigger() {
    // 0xa1f0dc
    this->cleanup();
}

SetupMGTrigger::~SetupMGTrigger() {
    // 0xa1f004
    this->cleanup();
}

SetupMGTrigger::~SetupMGTrigger() {
    // 0xa1f004
    this->cleanup();
}

void SetupMGTrigger::textChanged(CCTextInputNode*) {
    // 0xa2130c
    // TODO: Implement
}

void SetupMGTrigger::onEasingRate(cocos2d::CCObject*) {
    // 0xa1f3ec
    // TODO: Implement
}

void SetupMGTrigger::sliderChanged(cocos2d::CCObject*) {
    // 0xa212cc
    // TODO: Implement
}

void SetupMGTrigger::sliderYChanged(cocos2d::CCObject*) {
    // 0xa21228
    // TODO: Implement
}

void SetupMGTrigger::updateDurLabel(bool) {
    // 0xa1f9dc
    // TODO: Implement
}

void SetupMGTrigger::updateDuration() {
    // 0xa21264
    // TODO: Implement
}

void SetupMGTrigger::valuePopupClosed(ConfigureValuePopup*, float) {
    // 0xa210a8
    // TODO: Implement
}

void SetupMGTrigger::updateEasingLabel() {
    // 0xa1f808
    // TODO: Implement
}

void SetupMGTrigger::updateValueYLabel() {
    // 0xa1fb48
    // TODO: Implement
}

void SetupMGTrigger::posFromSliderValue(float) {
    // 0xa1f604
    // TODO: Implement
}

void SetupMGTrigger::sliderValueFromPos(int) {
    // 0xa1f5b8
    // TODO: Implement
}

void SetupMGTrigger::determineStartValues() {
    // 0xa1f134
    // TODO: Implement
}

void SetupMGTrigger::updateEasingRateLabel() {
    // 0xa1f62c
    // TODO: Implement
}

void SetupMGTrigger::updateMoveCommandPosY() {
    // 0xa21130
    // TODO: Implement
}

void SetupMGTrigger::updateMoveCommandEasing() {
    // 0xa20f68
    // TODO: Implement
}

void SetupMGTrigger::toggleEasingRateVisibility() {
    // 0xa1f770
    // TODO: Implement
}

void SetupMGTrigger::updateMoveCommandEasingRate() {
    // 0xa21040
    // TODO: Implement
}

void SetupMGTrigger::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa1fc8c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupMGTrigger::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa20d6c
    SetupMGTrigger* ret = new SetupMGTrigger();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupMGTrigger::onClose(cocos2d::CCObject*) {
    // 0xa1f384
    // TODO: Implement
}

void SetupMGTrigger::onEasing(cocos2d::CCObject*) {
    // 0xa20fd0
    // TODO: Implement
}

