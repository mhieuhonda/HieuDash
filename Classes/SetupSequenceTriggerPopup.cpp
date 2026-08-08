// ============================================================
// SetupSequenceTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupSequenceTriggerPopup.h"

SetupSequenceTriggerPopup::~SetupSequenceTriggerPopup() {
    // 0xa584c8
    this->cleanup();
}

SetupSequenceTriggerPopup::~SetupSequenceTriggerPopup() {
    // 0xa58434
    this->cleanup();
}

SetupSequenceTriggerPopup::~SetupSequenceTriggerPopup() {
    // 0xa58434
    this->cleanup();
}

void SetupSequenceTriggerPopup::onAddChance(cocos2d::CCObject*) {
    // 0xa59c7c
    // TODO: Implement
}

void SetupSequenceTriggerPopup::onChangeOrder(cocos2d::CCObject*) {
    // 0xa59d30
    // TODO: Implement
}

void SetupSequenceTriggerPopup::onDeleteSelected(cocos2d::CCObject*) {
    // 0xa59de8
    // TODO: Implement
}

void SetupSequenceTriggerPopup::updateGroupIDButtons() {
    // 0xa58640
    // TODO: Implement
}

void SetupSequenceTriggerPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0xa584f4
    // TODO: Implement
}

void SetupSequenceTriggerPopup::init(SequenceTriggerGameObject*) {
    // 0xa58a04
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupSequenceTriggerPopup::create(SequenceTriggerGameObject*) {
    // 0xa59a88
    SetupSequenceTriggerPopup* ret = new SetupSequenceTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupSequenceTriggerPopup::onSelect(cocos2d::CCObject*) {
    // 0xa585c8
    // TODO: Implement
}

