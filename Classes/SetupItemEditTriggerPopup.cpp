// ============================================================
// SetupItemEditTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupItemEditTriggerPopup.h"

SetupItemEditTriggerPopup::~SetupItemEditTriggerPopup() {
    // 0xa43c38
    this->cleanup();
}

SetupItemEditTriggerPopup::~SetupItemEditTriggerPopup() {
    // 0xa433b0
    this->cleanup();
}

SetupItemEditTriggerPopup::~SetupItemEditTriggerPopup() {
    // 0xa433b0
    this->cleanup();
}

void SetupItemEditTriggerPopup::onOpButton(cocos2d::CCObject*) {
    // 0xa4bbf0
    // TODO: Implement
}

void SetupItemEditTriggerPopup::updateOpButton(CCMenuItemSpriteExtra*, int, int) {
    // 0xa49304
    // TODO: Implement
}

void SetupItemEditTriggerPopup::valueDidChange(int, float) {
    // 0xa4a4a8
    // TODO: Implement
}

void SetupItemEditTriggerPopup::updateFormulaLabel() {
    // 0xa4962c
    // TODO: Implement
}

void SetupItemEditTriggerPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0xa4a250
    // TODO: Implement
}

void SetupItemEditTriggerPopup::init(ItemTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa4a4d4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupItemEditTriggerPopup::create(ItemTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa4b9f8
    SetupItemEditTriggerPopup* ret = new SetupItemEditTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

