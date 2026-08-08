// ============================================================
// SetupRandAdvTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupRandAdvTriggerPopup.h"

SetupRandAdvTriggerPopup::~SetupRandAdvTriggerPopup() {
    // 0x9ae5d8
    this->cleanup();
}

SetupRandAdvTriggerPopup::~SetupRandAdvTriggerPopup() {
    // 0x9ae544
    this->cleanup();
}

SetupRandAdvTriggerPopup::~SetupRandAdvTriggerPopup() {
    // 0x9ae544
    this->cleanup();
}

void SetupRandAdvTriggerPopup::onAddChance(cocos2d::CCObject*) {
    // 0x9b07c4
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::textChanged(CCTextInputNode*) {
    // 0x9ae538
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::removeGroupID(int) {
    // 0x9b06f4
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::addChanceToObject(RandTriggerGameObject*, int, int) {
    // 0x9ae738
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::onRemoveFromGroup(cocos2d::CCObject*) {
    // 0x9ae680
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::callRemoveFromGroup(float) {
    // 0x9b0784
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::updateGroupIDButtons() {
    // 0x9af160
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::removeGroupIDFromObject(RandTriggerGameObject*, int) {
    // 0x9ae8dc
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::init(RandTriggerGameObject*, cocos2d::CCArray*) {
    // 0x9af9f4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupRandAdvTriggerPopup::create(RandTriggerGameObject*, cocos2d::CCArray*) {
    // 0x9b044c
    SetupRandAdvTriggerPopup* ret = new SetupRandAdvTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupRandAdvTriggerPopup::onClose(cocos2d::CCObject*) {
    // 0x9ae604
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::addChance(int, int) {
    // 0x9b0658
    // TODO: Implement
}

