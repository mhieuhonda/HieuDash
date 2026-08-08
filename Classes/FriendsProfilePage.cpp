// ============================================================
// FriendsProfilePage.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "FriendsProfilePage.h"

FriendsProfilePage::~FriendsProfilePage() {
    // 0x8f68c0
    this->cleanup();
}

FriendsProfilePage::~FriendsProfilePage() {
    // 0x8f67f8
    this->cleanup();
}

FriendsProfilePage::~FriendsProfilePage() {
    // 0x8f67f8
    this->cleanup();
}

void FriendsProfilePage::keyBackClicked() {
    // 0x8f7670
    // TODO: Implement
}

void FriendsProfilePage::forceReloadList(UserListType) {
    // 0x8f77b4
    // Load from file/storage
    // TODO: Implement loading
}

void FriendsProfilePage::userListChanged(cocos2d::CCArray*, UserListType) {
    // 0x8f67d4
    // TODO: Implement
}

void FriendsProfilePage::getUserListFailed(UserListType, GJErrorCode) {
    // 0x8f6924
    // TODO: Implement
}

void FriendsProfilePage::setupUsersBrowser(cocos2d::CCArray*, UserListType) {
    // 0x8f6a50
    // TODO: Implement
}

void FriendsProfilePage::getUserListFinished(cocos2d::CCArray*, UserListType) {
    // 0x8f7680
    // TODO: Implement
}

void FriendsProfilePage::registerWithTouchDispatcher() {
    // 0x8f68ec
    // TODO: Implement
}

void FriendsProfilePage::init(UserListType) {
    // 0x8f6cfc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void FriendsProfilePage::create(UserListType) {
    // 0x8f73d0
    FriendsProfilePage* ret = new FriendsProfilePage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void FriendsProfilePage::onClose(cocos2d::CCObject*) {
    // 0x8f75a8
    // TODO: Implement
}

void FriendsProfilePage::onUpdate(cocos2d::CCObject*) {
    // 0x8f69ec
    // TODO: Implement
}

void FriendsProfilePage::onBlocked(cocos2d::CCObject*) {
    // 0x8f7518
    // TODO: Implement
}

