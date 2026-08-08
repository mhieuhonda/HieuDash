
#include "GJMessagePopup.h"

GJMessagePopup::~GJMessagePopup() {
    this->cleanup();
}

GJMessagePopup::~GJMessagePopup() {
    this->cleanup();
}

GJMessagePopup::~GJMessagePopup() {
    this->cleanup();
}

void GJMessagePopup::onClosePopup(UploadActionPopup*) {
    // TODO: Implement
}

void GJMessagePopup::keyBackClicked() {
    // TODO: Implement
}

void GJMessagePopup::FLAlert_Clicked(FLAlertLayer*, bool) {
    // TODO: Implement
}

void GJMessagePopup::loadFromGJMessage(GJUserMessage*) {
    // Load from file/storage
    // TODO: Implement loading
}

void GJMessagePopup::uploadActionFailed(int, int) {
    // Load from file/storage
    // TODO: Implement loading
}

void GJMessagePopup::uploadActionFinished(int, int) {
    // Load from file/storage
    // TODO: Implement loading
}

void GJMessagePopup::downloadMessageFailed(int) {
    // Load from file/storage
    // TODO: Implement loading
}

void GJMessagePopup::downloadMessageFinished(GJUserMessage*) {
    // Load from file/storage
    // TODO: Implement loading
}

void GJMessagePopup::init(GJUserMessage*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJMessagePopup::create(GJUserMessage*) {
    GJMessagePopup* ret = new GJMessagePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJMessagePopup::onBlock(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJMessagePopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJMessagePopup::onReply(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJMessagePopup::onRemove(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJMessagePopup::blockUser() {
    // TODO: Implement
}

