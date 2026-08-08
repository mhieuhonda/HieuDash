
#include "SetupAudioLineGuidePopup.h"

SetupAudioLineGuidePopup::~SetupAudioLineGuidePopup() {
    this->cleanup();
}

SetupAudioLineGuidePopup::~SetupAudioLineGuidePopup() {
    this->cleanup();
}

SetupAudioLineGuidePopup::~SetupAudioLineGuidePopup() {
    this->cleanup();
}

void SetupAudioLineGuidePopup::selectSettingClosed(SelectSettingLayer*) {
    // TODO: Implement
}

void SetupAudioLineGuidePopup::init(AudioLineGuideGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAudioLineGuidePopup::create(AudioLineGuideGameObject*, cocos2d::CCArray*) {
    SetupAudioLineGuidePopup* ret = new SetupAudioLineGuidePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupAudioLineGuidePopup::onSpeed(cocos2d::CCObject*) {
    // TODO: Implement
}

