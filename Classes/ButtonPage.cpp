// ============================================================
// ButtonPage.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ButtonPage.h"

ButtonPage::~ButtonPage() {
    // 0x73aac0
    this->cleanup();
}

ButtonPage::~ButtonPage() {
    // 0x73aa7c
    this->cleanup();
}

ButtonPage::~ButtonPage() {
    // 0x73aa7c
    this->cleanup();
}

void ButtonPage::init(cocos2d::CCArray*, cocos2d::CCPoint, int, float) {
    // 0x73ab8c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ButtonPage::create(cocos2d::CCArray*, cocos2d::CCPoint, int, float) {
    // 0x73ad30
    ButtonPage* ret = new ButtonPage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

