// ============================================================
// SetupTouchTogglePopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupTouchTogglePopup.h"

SetupTouchTogglePopup::~SetupTouchTogglePopup() {
    // 0x95a85c
    this->cleanup();
}

SetupTouchTogglePopup::~SetupTouchTogglePopup() {
    // 0x95a7f0
    this->cleanup();
}

SetupTouchTogglePopup::~SetupTouchTogglePopup() {
    // 0x95a7f0
    this->cleanup();
}

void SetupTouchTogglePopup::onHoldMode(cocos2d::CCObject*) {
    // 0x95ab88
    // TODO: Implement
}

void SetupTouchTogglePopup::onTouchMode(cocos2d::CCObject*) {
    // 0x95a9c0
    // TODO: Implement
}

void SetupTouchTogglePopup::textChanged(CCTextInputNode*) {
    // 0x95be58
    // TODO: Implement
}

void SetupTouchTogglePopup::onControlMode(cocos2d::CCObject*) {
    // 0x95aa7c
    // TODO: Implement
}

void SetupTouchTogglePopup::updateTargetID() {
    // 0x95bdd4
    // TODO: Implement
}

void SetupTouchTogglePopup::onDualTouchMode(cocos2d::CCObject*) {
    // 0x95ac04
    // TODO: Implement
}

void SetupTouchTogglePopup::onTargetIDArrow(cocos2d::CCObject*) {
    // 0x95bf5c
    // TODO: Implement
}

void SetupTouchTogglePopup::determineStartValues() {
    // 0x95a888
    // TODO: Implement
}

void SetupTouchTogglePopup::updateTextInputLabel() {
    // 0x95ac80
    // TODO: Implement
}

void SetupTouchTogglePopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x95ad98
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupTouchTogglePopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x95bbc4
    SetupTouchTogglePopup* ret = new SetupTouchTogglePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupTouchTogglePopup::onClose(cocos2d::CCObject*) {
    // 0x95ab2c
    // TODO: Implement
}

