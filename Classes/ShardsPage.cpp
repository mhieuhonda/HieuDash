// ============================================================
// ShardsPage.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ShardsPage.h"

ShardsPage::~ShardsPage() {
    // 0x95c084
    this->cleanup();
}

ShardsPage::~ShardsPage() {
    // 0x95c008
    this->cleanup();
}

ShardsPage::~ShardsPage() {
    // 0x95c008
    this->cleanup();
}

void ShardsPage::onIconInfo(cocos2d::CCObject*) {
    // 0x95c0b0
    // TODO: Implement
}

void ShardsPage::onSwitchPage(cocos2d::CCObject*) {
    // 0x95c414
    // TODO: Implement
}

void ShardsPage::keyBackClicked() {
    // 0x95bff8
    // TODO: Implement
}

void ShardsPage::FLAlert_Clicked(FLAlertLayer*, bool) {
    // 0x95dfa0
    // TODO: Implement
}

void ShardsPage::registerWithTouchDispatcher() {
    // 0x95c0ec
    // TODO: Implement
}

void ShardsPage::init() {
    // 0x95c458
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ShardsPage::show() {
    // 0x95c124
    // TODO: Implement
}

void ShardsPage::create() {
    // 0x95de88
    ShardsPage* ret = new ShardsPage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ShardsPage::onClose(cocos2d::CCObject*) {
    // 0x95bfb8
    // TODO: Implement
}

void ShardsPage::goToPage(int) {
    // 0x95c2c4
    // TODO: Implement
}

