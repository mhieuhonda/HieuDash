// ============================================================
// UploadPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "UploadPopup.h"

UploadPopup::~UploadPopup() {
    // 0x6e3710
    this->cleanup();
}

UploadPopup::~UploadPopup() {
    // 0x6e3664
    this->cleanup();
}

UploadPopup::~UploadPopup() {
    // 0x6e3664
    this->cleanup();
}

void UploadPopup::keyBackClicked() {
    // 0x6e3324
    // TODO: Implement
}

void UploadPopup::onReturnToLevel(cocos2d::CCObject*) {
    // 0x6e3828
    // TODO: Implement
}

void UploadPopup::levelUploadFailed(GJGameLevel*) {
    // 0x6e38a8
    // Load from file/storage
    // TODO: Implement loading
}

void UploadPopup::levelUploadFinished(GJGameLevel*) {
    // 0x6e3af4
    // Load from file/storage
    // TODO: Implement loading
}

void UploadPopup::init(GJGameLevel*) {
    // 0x6e50dc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UploadPopup::show() {
    // 0x6e3480
    // TODO: Implement
}

void UploadPopup::create(GJGameLevel*) {
    // 0x6e56bc
    UploadPopup* ret = new UploadPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void UploadPopup::onBack(cocos2d::CCObject*) {
    // 0x6e373c
    // TODO: Implement
}

void UploadPopup::onClose(cocos2d::CCObject*) {
    // 0x6e32e4
    // TODO: Implement
}

