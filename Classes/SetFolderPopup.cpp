// ============================================================
// SetFolderPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetFolderPopup.h"

SetFolderPopup::~SetFolderPopup() {
    // 0x8c1f54
    this->cleanup();
}

SetFolderPopup::~SetFolderPopup() {
    // 0x8c1dc0
    this->cleanup();
}

SetFolderPopup::~SetFolderPopup() {
    // 0x8c1dc0
    this->cleanup();
}

void SetFolderPopup::valueChanged() {
    // 0x8c516c
    // TODO: Implement
}

void SetFolderPopup::onSetFolderName(cocos2d::CCObject*) {
    // 0x8d4018
    // TODO: Implement
}

void SetFolderPopup::setTextPopupClosed(SetTextPopup*, std::string) {
    // 0x8c4bb0
    // TODO: Implement
}

void SetFolderPopup::init(int, bool, std::string) {
    // 0x8d2e08
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetFolderPopup::create(int, bool, std::string) {
    // 0x8d3154
    SetFolderPopup* ret = new SetFolderPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

