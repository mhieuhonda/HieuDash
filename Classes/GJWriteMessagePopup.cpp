// ============================================================
// GJWriteMessagePopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJWriteMessagePopup.h"

GJWriteMessagePopup::~GJWriteMessagePopup() {
    // 0x8c4a74
    this->cleanup();
}

GJWriteMessagePopup::~GJWriteMessagePopup() {
    // 0x8c48dc
    this->cleanup();
}

GJWriteMessagePopup::~GJWriteMessagePopup() {
    // 0x8c48dc
    this->cleanup();
}

void GJWriteMessagePopup::updateBody(std::string) {
    // 0x8cfa9c
    // TODO: Implement
}

void GJWriteMessagePopup::updateText(std::string, int) {
    // 0x8cf668
    // TODO: Implement
}

void GJWriteMessagePopup::onClearBody(cocos2d::CCObject*) {
    // 0x8c5010
    // TODO: Implement
}

void GJWriteMessagePopup::textChanged(CCTextInputNode*) {
    // 0x8d104c
    // TODO: Implement
}

void GJWriteMessagePopup::onClosePopup(UploadActionPopup*) {
    // 0x8cf4ec
    // TODO: Implement
}

void GJWriteMessagePopup::updateSubject(std::string) {
    // 0x8cf9ac
    // TODO: Implement
}

void GJWriteMessagePopup::keyBackClicked() {
    // 0x8cf4dc
    // TODO: Implement
}

void GJWriteMessagePopup::FLAlert_Clicked(FLAlertLayer*, bool) {
    // 0x8c47b8
    // TODO: Implement
}

void GJWriteMessagePopup::textInputClosed(CCTextInputNode*) {
    // 0x8c19f8
    // TODO: Implement
}

void GJWriteMessagePopup::textInputOpened(CCTextInputNode*) {
    // 0x8c1a1c
    // TODO: Implement
}

void GJWriteMessagePopup::textInputReturn(CCTextInputNode*) {
    // 0x8c2e48
    // TODO: Implement
}

void GJWriteMessagePopup::closeMessagePopup(bool) {
    // 0x8cf294
    // TODO: Implement
}

void GJWriteMessagePopup::uploadMessageFailed(int) {
    // 0x8cc81c
    // Load from file/storage
    // TODO: Implement loading
}

void GJWriteMessagePopup::updateCharCountLabel(int) {
    // 0x8cf550
    // TODO: Implement
}

void GJWriteMessagePopup::textInputShouldOffset(CCTextInputNode*, float) {
    // 0x8c2db8
    // TODO: Implement
}

void GJWriteMessagePopup::uploadMessageFinished(int) {
    // 0x8cc34c
    // Load from file/storage
    // TODO: Implement loading
}

void GJWriteMessagePopup::registerWithTouchDispatcher() {
    // 0x8c3020
    // TODO: Implement
}

void GJWriteMessagePopup::init(int, int) {
    // 0x8cfb8c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJWriteMessagePopup::create(int, int) {
    // 0x8d0c1c
    GJWriteMessagePopup* ret = new GJWriteMessagePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJWriteMessagePopup::onSend(cocos2d::CCObject*) {
    // 0x8cb918
    // TODO: Implement
}

void GJWriteMessagePopup::onClose(cocos2d::CCObject*) {
    // 0x8cf4d4
    // TODO: Implement
}

