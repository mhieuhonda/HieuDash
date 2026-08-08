// ============================================================
// SetLevelOrderPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetLevelOrderPopup.h"

SetLevelOrderPopup::~SetLevelOrderPopup() {
    // 0xa72224
    this->cleanup();
}

SetLevelOrderPopup::~SetLevelOrderPopup() {
    // 0xa721c8
    this->cleanup();
}

SetLevelOrderPopup::~SetLevelOrderPopup() {
    // 0xa721c8
    this->cleanup();
}

void SetLevelOrderPopup::onOrderButton(cocos2d::CCObject*) {
    // 0xa722a0
    // TODO: Implement
}

void SetLevelOrderPopup::init(int, int, int) {
    // 0xa7848c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetLevelOrderPopup::create(int, int, int) {
    // 0xa788ac
    SetLevelOrderPopup* ret = new SetLevelOrderPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

