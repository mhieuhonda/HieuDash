// ============================================================
// SetupShakePopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupShakePopup.h"

SetupShakePopup::~SetupShakePopup() {
    // 0x959060
    this->cleanup();
}

SetupShakePopup::~SetupShakePopup() {
    // 0x958ff4
    this->cleanup();
}

SetupShakePopup::~SetupShakePopup() {
    // 0x958ff4
    this->cleanup();
}

void SetupShakePopup::textChanged(CCTextInputNode*) {
    // 0x95a49c
    // TODO: Implement
}

void SetupShakePopup::updateShake() {
    // 0x9595c4
    // TODO: Implement
}

void SetupShakePopup::sliderChanged(cocos2d::CCObject*) {
    // 0x95a3c8
    // TODO: Implement
}

void SetupShakePopup::updateDurLabel(bool) {
    // 0x959284
    // TODO: Implement
}

void SetupShakePopup::updateDuration() {
    // 0x9593f0
    // TODO: Implement
}

void SetupShakePopup::updateInterval() {
    // 0x95a360
    // TODO: Implement
}

void SetupShakePopup::updateShakeLabel(bool) {
    // 0x959458
    // TODO: Implement
}

void SetupShakePopup::updateIntervalLabel(bool) {
    // 0x95962c
    // TODO: Implement
}

void SetupShakePopup::determineStartValues() {
    // 0x95908c
    // TODO: Implement
}

void SetupShakePopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x959798
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupShakePopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x95a160
    SetupShakePopup* ret = new SetupShakePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupShakePopup::onClose(cocos2d::CCObject*) {
    // 0x9591fc
    // TODO: Implement
}

