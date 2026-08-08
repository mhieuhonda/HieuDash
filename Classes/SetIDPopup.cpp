// ============================================================
// SetIDPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetIDPopup.h"

SetIDPopup::~SetIDPopup() {
    // 0x8c1ed0
    this->cleanup();
}

SetIDPopup::~SetIDPopup() {
    // 0x8c1c80
    this->cleanup();
}

SetIDPopup::~SetIDPopup() {
    // 0x8c1c80
    this->cleanup();
}

void SetIDPopup::textChanged(CCTextInputNode*) {
    // 0x8c4aa0
    // TODO: Implement
}

void SetIDPopup::onResetValue(cocos2d::CCObject*) {
    // 0x8d2824
    // TODO: Implement
}

void SetIDPopup::valueChanged() {
    // 0x8c1a4c
    // TODO: Implement
}

void SetIDPopup::onItemIDArrow(cocos2d::CCObject*) {
    // 0x8d27c0
    // TODO: Implement
}

void SetIDPopup::keyBackClicked() {
    // 0x8c1b04
    // TODO: Implement
}

void SetIDPopup::textInputClosed(CCTextInputNode*) {
    // 0x8c1a28
    // TODO: Implement
}

void SetIDPopup::updateTextInputLabel() {
    // 0x8d1818
    // TODO: Implement
}

void SetIDPopup::init(int, int, int, std::string, std::string, bool, int, float, bool, bool) {
    // 0x8d195c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetIDPopup::show() {
    // 0x8c3100
    // TODO: Implement
}

void SetIDPopup::create(int, int, int, std::string, std::string, bool, int, float, bool, bool) {
    // 0x8d22cc
    SetIDPopup* ret = new SetIDPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetIDPopup::onClose(cocos2d::CCObject*) {
    // 0x8c1a50
    // TODO: Implement
}

void SetIDPopup::onCancel(cocos2d::CCObject*) {
    // 0x8c1af4
    // TODO: Implement
}

