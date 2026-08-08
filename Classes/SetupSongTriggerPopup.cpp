// ============================================================
// SetupSongTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupSongTriggerPopup.h"

SetupSongTriggerPopup::~SetupSongTriggerPopup() {
    // 0x9a97f4
    this->cleanup();
}

SetupSongTriggerPopup::~SetupSongTriggerPopup() {
    // 0x9a9750
    this->cleanup();
}

SetupSongTriggerPopup::~SetupSongTriggerPopup() {
    // 0x9a9750
    this->cleanup();
}

void SetupSongTriggerPopup::onPlayback(SongInfoObject*) {
    // 0x9a9a94
    // TODO: Implement
}

void SetupSongTriggerPopup::pageChanged() {
    // 0x9a998c
    // TODO: Implement
}

void SetupSongTriggerPopup::updateLength() {
    // 0x9a9d5c
    // TODO: Implement
}

void SetupSongTriggerPopup::valueDidChange(int, float) {
    // 0x9a9db4
    // TODO: Implement
}

void SetupSongTriggerPopup::onResetSongTime(cocos2d::CCObject*) {
    // 0x9aae3c
    // TODO: Implement
}

void SetupSongTriggerPopup::onSavePlaybackPos(cocos2d::CCObject*) {
    // 0x9a9820
    // Save to file/storage
    // TODO: Implement saving
}

void SetupSongTriggerPopup::updateApplyPrepare(bool) {
    // 0x9a9d0c
    // TODO: Implement
}

void SetupSongTriggerPopup::updateSongTimeSlider() {
    // 0x9a9e48
    // TODO: Implement
}

void SetupSongTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x9a9fb0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupSongTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x9aac30
    SetupSongTriggerPopup* ret = new SetupSongTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupSongTriggerPopup::onClose(cocos2d::CCObject*) {
    // 0x9a9a14
    // TODO: Implement
}

