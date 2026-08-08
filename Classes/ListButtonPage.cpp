// ============================================================
// ListButtonPage.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ListButtonPage.h"

ListButtonPage::~ListButtonPage() {
    // 0x5a8888
    this->cleanup();
}

ListButtonPage::~ListButtonPage() {
    // 0x5a8844
    this->cleanup();
}

ListButtonPage::~ListButtonPage() {
    // 0x5a8844
    this->cleanup();
}

void ListButtonPage::init(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float) {
    // 0x5a898c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ListButtonPage::create(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float) {
    // 0x5a8b70
    ListButtonPage* ret = new ListButtonPage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

