// ============================================================
// ListButtonBar.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ListButtonBar.h"

ListButtonBar::~ListButtonBar() {
    // 0x5a8820
    this->cleanup();
}

ListButtonBar::~ListButtonBar() {
    // 0x5a87e4
    this->cleanup();
}

ListButtonBar::~ListButtonBar() {
    // 0x5a87e4
    this->cleanup();
}

void ListButtonBar::init(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int) {
    // 0x5a8cb0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ListButtonBar::create(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int) {
    // 0x5a90e8
    ListButtonBar* ret = new ListButtonBar();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ListButtonBar::onLeft(cocos2d::CCObject*) {
    // 0x5a897c
    // TODO: Implement
}

void ListButtonBar::getPage() {
    // 0x5a88ec
    // TODO: Implement
}

void ListButtonBar::onRight(cocos2d::CCObject*) {
    // 0x5a896c
    // TODO: Implement
}

void ListButtonBar::goToPage(int) {
    // 0x5a88f8
    // TODO: Implement
}

