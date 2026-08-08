
#include "FriendRequestPopup.h"

FriendRequestPopup::~FriendRequestPopup() {
    this->cleanup();
}

FriendRequestPopup::~FriendRequestPopup() {
    this->cleanup();
}

FriendRequestPopup::~FriendRequestPopup() {
    this->cleanup();
}

void FriendRequestPopup::onClosePopup(UploadActionPopup*) {
    // TODO: Implement
}

void FriendRequestPopup::keyBackClicked() {
    // TODO: Implement
}

void FriendRequestPopup::FLAlert_Clicked(FLAlertLayer*, bool) {
    // TODO: Implement
}

void FriendRequestPopup::uploadActionFailed(int, int) {
    // Load from file/storage
    // TODO: Implement loading
}

void FriendRequestPopup::uploadActionFinished(int, int) {
    // Load from file/storage
    // TODO: Implement loading
}

void FriendRequestPopup::loadFromGJFriendRequest(GJFriendRequest*) {
    // Load from file/storage
    // TODO: Implement loading
}

void FriendRequestPopup::init(GJFriendRequest*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void FriendRequestPopup::create(GJFriendRequest*) {
    FriendRequestPopup* ret = new FriendRequestPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void FriendRequestPopup::onBlock(cocos2d::CCObject*) {
    // TODO: Implement
}

void FriendRequestPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void FriendRequestPopup::onAccept(cocos2d::CCObject*) {
    // TODO: Implement
}

void FriendRequestPopup::onRemove(cocos2d::CCObject*) {
    // TODO: Implement
}

void FriendRequestPopup::blockUser() {
    // TODO: Implement
}

