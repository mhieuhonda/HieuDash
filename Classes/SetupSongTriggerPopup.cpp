
#include "SetupSongTriggerPopup.h"

SetupSongTriggerPopup::~SetupSongTriggerPopup() {
    this->cleanup();
}

SetupSongTriggerPopup::~SetupSongTriggerPopup() {
    this->cleanup();
}

SetupSongTriggerPopup::~SetupSongTriggerPopup() {
    this->cleanup();
}

void SetupSongTriggerPopup::onPlayback(SongInfoObject*) {
    // TODO: Implement
}

void SetupSongTriggerPopup::pageChanged() {
    // TODO: Implement
}

void SetupSongTriggerPopup::updateLength() {
    // TODO: Implement
}

void SetupSongTriggerPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupSongTriggerPopup::onResetSongTime(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupSongTriggerPopup::onSavePlaybackPos(cocos2d::CCObject*) {
    // Save to file/storage
    // TODO: Implement saving
}

void SetupSongTriggerPopup::updateApplyPrepare(bool) {
    // TODO: Implement
}

void SetupSongTriggerPopup::updateSongTimeSlider() {
    // TODO: Implement
}

void SetupSongTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupSongTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupSongTriggerPopup* ret = new SetupSongTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupSongTriggerPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

