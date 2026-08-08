// ============================================================
// FriendRequestPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "FriendRequestPopup.h"

FriendRequestPopup::~FriendRequestPopup() {
    // 0x8c2b6c
    this->cleanup();
}

FriendRequestPopup::~FriendRequestPopup() {
    // 0x8c2ab8
    this->cleanup();
}

FriendRequestPopup::~FriendRequestPopup() {
    // 0x8c2ab8
    this->cleanup();
}

void FriendRequestPopup::onClosePopup(UploadActionPopup*) {
    // 0x8cc9b0
    // TODO: Implement
}

void FriendRequestPopup::keyBackClicked() {
    // 0x8c3010
    // TODO: Implement
}

void FriendRequestPopup::FLAlert_Clicked(FLAlertLayer*, bool) {
    // 0x8cdd00
    // TODO: Implement
}

void FriendRequestPopup::uploadActionFailed(int, int) {
    // 0x8cc5d0
    // Load from file/storage
    // TODO: Implement loading
}

void FriendRequestPopup::uploadActionFinished(int, int) {
    // 0x8cbed4
    // Load from file/storage
    // TODO: Implement loading
}

void FriendRequestPopup::loadFromGJFriendRequest(GJFriendRequest*) {
    // 0x8cca70
    // Load from file/storage
    // TODO: Implement loading
}

void FriendRequestPopup::init(GJFriendRequest*) {
    // 0x8cd3e8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void FriendRequestPopup::create(GJFriendRequest*) {
    // 0x8cda94
    FriendRequestPopup* ret = new FriendRequestPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void FriendRequestPopup::onBlock(cocos2d::CCObject*) {
    // 0x8c5a00
    // TODO: Implement
}

void FriendRequestPopup::onClose(cocos2d::CCObject*) {
    // 0x8c2fa0
    // TODO: Implement
}

void FriendRequestPopup::onAccept(cocos2d::CCObject*) {
    // 0x8cb6a4
    // TODO: Implement
}

void FriendRequestPopup::onRemove(cocos2d::CCObject*) {
    // 0x8cb7dc
    // TODO: Implement
}

void FriendRequestPopup::blockUser() {
    // 0x8cdbcc
    // TODO: Implement
}

