// ============================================================
// SetColorIDPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetColorIDPopup.h"

SetColorIDPopup::~SetColorIDPopup() {
    // 0x8c1efc
    this->cleanup();
}

SetColorIDPopup::~SetColorIDPopup() {
    // 0x8c1d00
    this->cleanup();
}

SetColorIDPopup::~SetColorIDPopup() {
    // 0x8c1d00
    this->cleanup();
}

void SetColorIDPopup::colorSelectClosed(GJSpecialColorSelect*, int) {
    // 0x8c4cdc
    // TODO: Implement
}

void SetColorIDPopup::onSelectSpecialColor(cocos2d::CCObject*) {
    // 0x8c3188
    // TODO: Implement
}

void SetColorIDPopup::init(int) {
    // 0x8d2830
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetColorIDPopup::create(int) {
    // 0x8d2b84
    SetColorIDPopup* ret = new SetColorIDPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

