// ============================================================
// SetupGravityModPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupGravityModPopup.h"

SetupGravityModPopup::~SetupGravityModPopup() {
    // 0x9beea8
    this->cleanup();
}

SetupGravityModPopup::~SetupGravityModPopup() {
    // 0x9bee10
    this->cleanup();
}

SetupGravityModPopup::~SetupGravityModPopup() {
    // 0x9bee10
    this->cleanup();
}

void SetupGravityModPopup::textChanged(CCTextInputNode*) {
    // 0x9c0050
    // TODO: Implement
}

void SetupGravityModPopup::updateValue() {
    // 0x9bf068
    // TODO: Implement
}

void SetupGravityModPopup::updateItemID() {
    // 0x9bffc4
    // TODO: Implement
}

void SetupGravityModPopup::onItemIDArrow(cocos2d::CCObject*) {
    // 0x9c012c
    // TODO: Implement
}

void SetupGravityModPopup::sliderChanged(cocos2d::CCObject*) {
    // 0x9bf0dc
    // TODO: Implement
}

void SetupGravityModPopup::keyBackClicked() {
    // 0x9bee00
    // TODO: Implement
}

void SetupGravityModPopup::textInputClosed(CCTextInputNode*) {
    // 0x9bed74
    // TODO: Implement
}

void SetupGravityModPopup::updateValueLabel() {
    // 0x9bf004
    // TODO: Implement
}

void SetupGravityModPopup::determineStartValues() {
    // 0x9bef1c
    // TODO: Implement
}

void SetupGravityModPopup::updateTextInputLabel() {
    // 0x9bf13c
    // TODO: Implement
}

void SetupGravityModPopup::init(EffectGameObject*, cocos2d::CCArray*, bool) {
    // 0x9bf254
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupGravityModPopup::show() {
    // 0x9beed4
    // TODO: Implement
}

void SetupGravityModPopup::create(EffectGameObject*, cocos2d::CCArray*, bool) {
    // 0x9bfe68
    SetupGravityModPopup* ret = new SetupGravityModPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupGravityModPopup::onClose(cocos2d::CCObject*) {
    // 0x9bed98
    // TODO: Implement
}

