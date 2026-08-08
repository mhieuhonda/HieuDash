// ============================================================
// GJMessagePopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJMessagePopup.h"

GJMessagePopup::~GJMessagePopup() {
    // 0x8c2c74
    this->cleanup();
}

GJMessagePopup::~GJMessagePopup() {
    // 0x8c2b98
    this->cleanup();
}

GJMessagePopup::~GJMessagePopup() {
    // 0x8c2b98
    this->cleanup();
}

void GJMessagePopup::onClosePopup(UploadActionPopup*) {
    // 0x8cca10
    // TODO: Implement
}

void GJMessagePopup::keyBackClicked() {
    // 0x8c19e8
    // TODO: Implement
}

void GJMessagePopup::FLAlert_Clicked(FLAlertLayer*, bool) {
    // 0x8cf108
    // TODO: Implement
}

void GJMessagePopup::loadFromGJMessage(GJUserMessage*) {
    // 0x8cdd54
    // Load from file/storage
    // TODO: Implement loading
}

void GJMessagePopup::uploadActionFailed(int, int) {
    // 0x8cc6f4
    // Load from file/storage
    // TODO: Implement loading
}

void GJMessagePopup::uploadActionFinished(int, int) {
    // 0x8cc108
    // Load from file/storage
    // TODO: Implement loading
}

void GJMessagePopup::downloadMessageFailed(int) {
    // 0x8c3ed0
    // Load from file/storage
    // TODO: Implement loading
}

void GJMessagePopup::downloadMessageFinished(GJUserMessage*) {
    // 0x8cef64
    // Load from file/storage
    // TODO: Implement loading
}

void GJMessagePopup::init(GJUserMessage*) {
    // 0x8ce3ac
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJMessagePopup::create(GJUserMessage*) {
    // 0x8cee24
    GJMessagePopup* ret = new GJMessagePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJMessagePopup::onBlock(cocos2d::CCObject*) {
    // 0x8c55f8
    // TODO: Implement
}

void GJMessagePopup::onClose(cocos2d::CCObject*) {
    // 0x8c19a8
    // TODO: Implement
}

void GJMessagePopup::onReply(cocos2d::CCObject*) {
    // 0x8d0d90
    // TODO: Implement
}

void GJMessagePopup::onRemove(cocos2d::CCObject*) {
    // 0x8c4eb8
    // TODO: Implement
}

void GJMessagePopup::blockUser() {
    // 0x8cefd4
    // TODO: Implement
}

