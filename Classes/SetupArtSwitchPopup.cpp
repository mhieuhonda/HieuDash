// ============================================================
// SetupArtSwitchPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupArtSwitchPopup.h"

SetupArtSwitchPopup::~SetupArtSwitchPopup() {
    // 0xa439f8
    this->cleanup();
}

SetupArtSwitchPopup::~SetupArtSwitchPopup() {
    // 0xa431f0
    this->cleanup();
}

SetupArtSwitchPopup::~SetupArtSwitchPopup() {
    // 0xa431f0
    this->cleanup();
}

void SetupArtSwitchPopup::selectArtClosed(SelectArtLayer*) {
    // 0xa515fc
    // TODO: Implement
}

void SetupArtSwitchPopup::init(ArtTriggerGameObject*, cocos2d::CCArray*, int) {
    // 0xa5172c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupArtSwitchPopup::onArt(cocos2d::CCObject*) {
    // 0xa43f08
    // TODO: Implement
}

void SetupArtSwitchPopup::create(ArtTriggerGameObject*, cocos2d::CCArray*, int) {
    // 0xa51ddc
    SetupArtSwitchPopup* ret = new SetupArtSwitchPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

