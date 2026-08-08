// ============================================================
// WorldLevelPage.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "WorldLevelPage.h"

WorldLevelPage::~WorldLevelPage() {
    // 0x95e1b8
    this->cleanup();
}

WorldLevelPage::~WorldLevelPage() {
    // 0x95e13c
    this->cleanup();
}

WorldLevelPage::~WorldLevelPage() {
    // 0x95e13c
    this->cleanup();
}

void WorldLevelPage::keyBackClicked() {
    // 0x95e010
    // TODO: Implement
}

void WorldLevelPage::init(GJGameLevel*, GJWorldNode*) {
    // 0x961980
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void WorldLevelPage::show() {
    // 0x95e2e0
    // TODO: Implement
}

void WorldLevelPage::create(GJGameLevel*, GJWorldNode*) {
    // 0x962980
    WorldLevelPage* ret = new WorldLevelPage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void WorldLevelPage::onInfo(cocos2d::CCObject*) {
    // 0x95e6f0
    // TODO: Implement
}

void WorldLevelPage::onPlay(cocos2d::CCObject*) {
    // 0x95f954
    // TODO: Implement
}

void WorldLevelPage::onSong(cocos2d::CCObject*) {
    // 0x95e1e4
    // TODO: Implement
}

void WorldLevelPage::onClose(cocos2d::CCObject*) {
    // 0x95dfd0
    // TODO: Implement
}

