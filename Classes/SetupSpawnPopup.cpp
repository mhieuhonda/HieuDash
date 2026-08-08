// ============================================================
// SetupSpawnPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupSpawnPopup.h"

SetupSpawnPopup::~SetupSpawnPopup() {
    // 0x8ea1fc
    this->cleanup();
}

SetupSpawnPopup::~SetupSpawnPopup() {
    // 0x8ea168
    this->cleanup();
}

SetupSpawnPopup::~SetupSpawnPopup() {
    // 0x8ea168
    this->cleanup();
}

void SetupSpawnPopup::onAddRemap(cocos2d::CCObject*) {
    // 0x8ea354
    // TODO: Implement
}

void SetupSpawnPopup::onPasteRemap(cocos2d::CCObject*) {
    // 0x8ea3c4
    // TODO: Implement
}

void SetupSpawnPopup::onDeleteRemap(cocos2d::CCObject*) {
    // 0x8ea408
    // TODO: Implement
}

void SetupSpawnPopup::onSelectRemap(cocos2d::CCObject*) {
    // 0x8ea4a4
    // TODO: Implement
}

void SetupSpawnPopup::queueUpdateButtons() {
    // 0x8ea264
    // TODO: Implement
}

void SetupSpawnPopup::updateRemapButtons(float) {
    // 0x8ea574
    // TODO: Implement
}

void SetupSpawnPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x8eae30
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupSpawnPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x8ebc4c
    SetupSpawnPopup* ret = new SetupSpawnPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupSpawnPopup::onClose(cocos2d::CCObject*) {
    // 0x8ea228
    // TODO: Implement
}

void SetupSpawnPopup::addRemap(int, int) {
    // 0x8ea2b4
    // TODO: Implement
}

