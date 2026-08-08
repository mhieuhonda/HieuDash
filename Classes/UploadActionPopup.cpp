// ============================================================
// UploadActionPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "UploadActionPopup.h"

UploadActionPopup::~UploadActionPopup() {
    // 0x8c1ea4
    this->cleanup();
}

UploadActionPopup::~UploadActionPopup() {
    // 0x8c1c2c
    this->cleanup();
}

UploadActionPopup::~UploadActionPopup() {
    // 0x8c1c2c
    this->cleanup();
}

void UploadActionPopup::closePopup() {
    // 0x8cc92c
    // TODO: Implement
}

void UploadActionPopup::keyBackClicked() {
    // 0x8cc9a0
    // TODO: Implement
}

void UploadActionPopup::showFailMessage(std::string) {
    // 0x8cc46c
    // TODO: Implement
}

void UploadActionPopup::showSuccessMessage(std::string) {
    // 0x8cbd5c
    // TODO: Implement
}

void UploadActionPopup::init(UploadPopupDelegate*, std::string) {
    // 0x8cb064
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UploadActionPopup::create(UploadPopupDelegate*, std::string) {
    // 0x8cb4bc
    UploadActionPopup* ret = new UploadActionPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void UploadActionPopup::onClose(cocos2d::CCObject*) {
    // 0x8cc96c
    // TODO: Implement
}

