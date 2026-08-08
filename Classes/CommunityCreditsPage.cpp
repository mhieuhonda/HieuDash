// ============================================================
// CommunityCreditsPage.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CommunityCreditsPage.h"

CommunityCreditsPage::~CommunityCreditsPage() {
    // 0x96fd20
    this->cleanup();
}

CommunityCreditsPage::~CommunityCreditsPage() {
    // 0x96fca4
    this->cleanup();
}

CommunityCreditsPage::~CommunityCreditsPage() {
    // 0x96fca4
    this->cleanup();
}

void CommunityCreditsPage::onSwitchPage(cocos2d::CCObject*) {
    // 0x970314
    // TODO: Implement
}

void CommunityCreditsPage::keyBackClicked() {
    // 0x96fc94
    // TODO: Implement
}

void CommunityCreditsPage::FLAlert_Clicked(FLAlertLayer*, bool) {
    // 0x9741f4
    // TODO: Implement
}

void CommunityCreditsPage::registerWithTouchDispatcher() {
    // 0x96fd4c
    // TODO: Implement
}

void CommunityCreditsPage::init() {
    // 0x970358
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CommunityCreditsPage::show() {
    // 0x96fd84
    // TODO: Implement
}

void CommunityCreditsPage::create() {
    // 0x9740e0
    CommunityCreditsPage* ret = new CommunityCreditsPage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CommunityCreditsPage::onClose(cocos2d::CCObject*) {
    // 0x96fc54
    // TODO: Implement
}

void CommunityCreditsPage::goToPage(int) {
    // 0x9701f8
    // TODO: Implement
}

