
#include "FriendsProfilePage.h"

FriendsProfilePage::~FriendsProfilePage() {
    this->cleanup();
}

FriendsProfilePage::~FriendsProfilePage() {
    this->cleanup();
}

FriendsProfilePage::~FriendsProfilePage() {
    this->cleanup();
}

void FriendsProfilePage::keyBackClicked() {
    // TODO: Implement
}

void FriendsProfilePage::forceReloadList(UserListType) {
    // Load from file/storage
    // TODO: Implement loading
}

void FriendsProfilePage::userListChanged(cocos2d::CCArray*, UserListType) {
    // TODO: Implement
}

void FriendsProfilePage::getUserListFailed(UserListType, GJErrorCode) {
    // TODO: Implement
}

void FriendsProfilePage::setupUsersBrowser(cocos2d::CCArray*, UserListType) {
    // TODO: Implement
}

void FriendsProfilePage::getUserListFinished(cocos2d::CCArray*, UserListType) {
    // TODO: Implement
}

void FriendsProfilePage::registerWithTouchDispatcher() {
    // TODO: Implement
}

void FriendsProfilePage::init(UserListType) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void FriendsProfilePage::create(UserListType) {
    FriendsProfilePage* ret = new FriendsProfilePage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void FriendsProfilePage::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void FriendsProfilePage::onUpdate(cocos2d::CCObject*) {
    // TODO: Implement
}

void FriendsProfilePage::onBlocked(cocos2d::CCObject*) {
    // TODO: Implement
}

