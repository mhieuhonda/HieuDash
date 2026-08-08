// ============================================================
// EditButtonBar.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "EditButtonBar.h"

EditButtonBar::~EditButtonBar() {
    // 0x73aa58
    this->cleanup();
}

EditButtonBar::~EditButtonBar() {
    // 0x73aa10
    this->cleanup();
}

EditButtonBar::~EditButtonBar() {
    // 0x73aa10
    this->cleanup();
}

void EditButtonBar::reloadItems(int, int) {
    // 0x73b574
    // Load from file/storage
    // TODO: Implement loading
}

void EditButtonBar::loadFromItems(cocos2d::CCArray*, int, int, bool) {
    // 0x73ae50
    // Load from file/storage
    // TODO: Implement loading
}

void EditButtonBar::init(cocos2d::CCArray*, cocos2d::CCPoint, int, bool, int, int) {
    // 0x73b398
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void EditButtonBar::create(cocos2d::CCArray*, cocos2d::CCPoint, int, bool, int, int) {
    // 0x73b448
    EditButtonBar* ret = new EditButtonBar();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void EditButtonBar::onLeft(cocos2d::CCObject*) {
    // 0x73ab7c
    // TODO: Implement
}

void EditButtonBar::getPage() {
    // 0x73ab24
    // TODO: Implement
}

void EditButtonBar::onRight(cocos2d::CCObject*) {
    // 0x73ab6c
    // TODO: Implement
}

void EditButtonBar::goToPage(int) {
    // 0x73ab30
    // TODO: Implement
}

