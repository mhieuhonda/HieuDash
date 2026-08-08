// ============================================================
// SetupAudioLineGuidePopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupAudioLineGuidePopup.h"

SetupAudioLineGuidePopup::~SetupAudioLineGuidePopup() {
    // 0xa43b18
    this->cleanup();
}

SetupAudioLineGuidePopup::~SetupAudioLineGuidePopup() {
    // 0xa432d0
    this->cleanup();
}

SetupAudioLineGuidePopup::~SetupAudioLineGuidePopup() {
    // 0xa432d0
    this->cleanup();
}

void SetupAudioLineGuidePopup::selectSettingClosed(SelectSettingLayer*) {
    // 0xa44038
    // TODO: Implement
}

void SetupAudioLineGuidePopup::init(AudioLineGuideGameObject*, cocos2d::CCArray*) {
    // 0xa4f5fc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAudioLineGuidePopup::create(AudioLineGuideGameObject*, cocos2d::CCArray*) {
    // 0xa4fee8
    SetupAudioLineGuidePopup* ret = new SetupAudioLineGuidePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupAudioLineGuidePopup::onSpeed(cocos2d::CCObject*) {
    // 0xa43ebc
    // TODO: Implement
}

