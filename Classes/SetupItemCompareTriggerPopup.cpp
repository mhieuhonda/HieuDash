// ============================================================
// SetupItemCompareTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupItemCompareTriggerPopup.h"

SetupItemCompareTriggerPopup::~SetupItemCompareTriggerPopup() {
    // 0xa43bac
    this->cleanup();
}

SetupItemCompareTriggerPopup::~SetupItemCompareTriggerPopup() {
    // 0xa43344
    this->cleanup();
}

SetupItemCompareTriggerPopup::~SetupItemCompareTriggerPopup() {
    // 0xa43344
    this->cleanup();
}

void SetupItemCompareTriggerPopup::onOpButton(cocos2d::CCObject*) {
    // 0xa4e414
    // TODO: Implement
}

void SetupItemCompareTriggerPopup::updateOpButton(CCMenuItemSpriteExtra*, int, int) {
    // 0xa4bcec
    // TODO: Implement
}

void SetupItemCompareTriggerPopup::valueDidChange(int, float) {
    // 0xa4cbe4
    // TODO: Implement
}

void SetupItemCompareTriggerPopup::updateFormulaLabel() {
    // 0xa4c034
    // TODO: Implement
}

void SetupItemCompareTriggerPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0xa4ca44
    // TODO: Implement
}

void SetupItemCompareTriggerPopup::init(ItemTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa4cc10
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupItemCompareTriggerPopup::create(ItemTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa4e21c
    SetupItemCompareTriggerPopup* ret = new SetupItemCompareTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

