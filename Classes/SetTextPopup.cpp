// ============================================================
// SetTextPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetTextPopup.h"

SetTextPopup::~SetTextPopup() {
    // 0x8c4684
    this->cleanup();
}

SetTextPopup::~SetTextPopup() {
    // 0x8c457c
    this->cleanup();
}

SetTextPopup::~SetTextPopup() {
    // 0x8c457c
    this->cleanup();
}

void SetTextPopup::textChanged(CCTextInputNode*) {
    // 0x8c46b0
    // TODO: Implement
}

void SetTextPopup::onResetValue(cocos2d::CCObject*) {
    // 0x8d43b0
    // TODO: Implement
}

void SetTextPopup::keyBackClicked() {
    // 0x8c59f0
    // TODO: Implement
}

void SetTextPopup::textInputClosed(CCTextInputNode*) {
    // 0x8c1b14
    // TODO: Implement
}

void SetTextPopup::updateTextInputLabel() {
    // 0x8d3374
    // TODO: Implement
}

void SetTextPopup::init(std::string, std::string, int, std::string, std::string, bool, float) {
    // 0x8d3474
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetTextPopup::show() {
    // 0x8c1fac
    // TODO: Implement
}

void SetTextPopup::create(std::string, std::string, int, std::string, std::string, bool, float) {
    // 0x8d3c1c
    SetTextPopup* ret = new SetTextPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetTextPopup::onClose(cocos2d::CCObject*) {
    // 0x8c5888
    // TODO: Implement
}

void SetTextPopup::onCancel(cocos2d::CCObject*) {
    // 0x8c59e0
    // TODO: Implement
}

