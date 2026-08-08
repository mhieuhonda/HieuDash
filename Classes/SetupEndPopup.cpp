// ============================================================
// SetupEndPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupEndPopup.h"

SetupEndPopup::~SetupEndPopup() {
    // 0x96e04c
    this->cleanup();
}

SetupEndPopup::~SetupEndPopup() {
    // 0x96df74
    this->cleanup();
}

SetupEndPopup::~SetupEndPopup() {
    // 0x96df74
    this->cleanup();
}

void SetupEndPopup::onReversed(cocos2d::CCObject*) {
    // 0x96e250
    // TODO: Implement
}

void SetupEndPopup::textChanged(CCTextInputNode*) {
    // 0x96f160
    // TODO: Implement
}

void SetupEndPopup::updateTargetID() {
    // 0x96f0dc
    // TODO: Implement
}

void SetupEndPopup::onMultiActivate(cocos2d::CCObject*) {
    // 0x96df34
    // TODO: Implement
}

void SetupEndPopup::onTargetIDArrow(cocos2d::CCObject*) {
    // 0x96f244
    // TODO: Implement
}

void SetupEndPopup::textInputClosed(CCTextInputNode*) {
    // 0x96df50
    // TODO: Implement
}

void SetupEndPopup::determineStartValues() {
    // 0x96e0a4
    // TODO: Implement
}

void SetupEndPopup::updateTextInputLabel() {
    // 0x96e2cc
    // TODO: Implement
}

void SetupEndPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x96e3e4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupEndPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x96eed8
    SetupEndPopup* ret = new SetupEndPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupEndPopup::onClose(cocos2d::CCObject*) {
    // 0x96e18c
    // TODO: Implement
}

void SetupEndPopup::onLockY(cocos2d::CCObject*) {
    // 0x96e1d4
    // TODO: Implement
}

