// ============================================================
// SetupAnimationPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupAnimationPopup.h"

SetupAnimationPopup::~SetupAnimationPopup() {
    // 0x94cfa4
    this->cleanup();
}

SetupAnimationPopup::~SetupAnimationPopup() {
    // 0x94cf38
    this->cleanup();
}

SetupAnimationPopup::~SetupAnimationPopup() {
    // 0x94cf38
    this->cleanup();
}

void SetupAnimationPopup::textChanged(CCTextInputNode*) {
    // 0x94e3e4
    // TODO: Implement
}

void SetupAnimationPopup::updateTargetID() {
    // 0x94e278
    // TODO: Implement
}

void SetupAnimationPopup::onTargetIDArrow(cocos2d::CCObject*) {
    // 0x94e2fc
    // TODO: Implement
}

void SetupAnimationPopup::updateAnimationID() {
    // 0x94e358
    // TODO: Implement
}

void SetupAnimationPopup::onAnimationIDArrow(cocos2d::CCObject*) {
    // 0x94e560
    // TODO: Implement
}

void SetupAnimationPopup::determineStartValues() {
    // 0x94cfd0
    // TODO: Implement
}

void SetupAnimationPopup::updateTextInputLabel() {
    // 0x94d128
    // TODO: Implement
}

void SetupAnimationPopup::updateAnimationTextInputLabel() {
    // 0x94d240
    // TODO: Implement
}

void SetupAnimationPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x94d358
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAnimationPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x94e074
    SetupAnimationPopup* ret = new SetupAnimationPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupAnimationPopup::onClose(cocos2d::CCObject*) {
    // 0x94d0c0
    // TODO: Implement
}

