// ============================================================
// ShareLevelSettingsLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ShareLevelSettingsLayer.h"

ShareLevelSettingsLayer::~ShareLevelSettingsLayer() {
    // 0x6e3454
    this->cleanup();
}

ShareLevelSettingsLayer::~ShareLevelSettingsLayer() {
    // 0x6e33cc
    this->cleanup();
}

ShareLevelSettingsLayer::~ShareLevelSettingsLayer() {
    // 0x6e33cc
    this->cleanup();
}

void ShareLevelSettingsLayer::onUnlisted(cocos2d::CCObject*) {
    // 0x6e66bc
    // TODO: Implement
}

void ShareLevelSettingsLayer::keyBackClicked() {
    // 0x6e3818
    // TODO: Implement
}

void ShareLevelSettingsLayer::updateSettingsState() {
    // 0x6e59c8
    // TODO: Implement
}

void ShareLevelSettingsLayer::onUnlistedFriendsOnly(cocos2d::CCObject*) {
    // 0x6e3330
    // TODO: Implement
}

void ShareLevelSettingsLayer::init(GJGameLevel*) {
    // 0x6e5ac8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ShareLevelSettingsLayer::create(GJGameLevel*) {
    // 0x6e6564
    ShareLevelSettingsLayer* ret = new ShareLevelSettingsLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ShareLevelSettingsLayer::onClose(cocos2d::CCObject*) {
    // 0x6e3788
    // TODO: Implement
}

