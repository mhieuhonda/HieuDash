// ============================================================
// GJSpecialColorSelect.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJSpecialColorSelect.h"

GJSpecialColorSelect::~GJSpecialColorSelect() {
    // 0x8e67ac
    this->cleanup();
}

GJSpecialColorSelect::~GJSpecialColorSelect() {
    // 0x8e6730
    this->cleanup();
}

GJSpecialColorSelect::~GJSpecialColorSelect() {
    // 0x8e6730
    this->cleanup();
}

void GJSpecialColorSelect::onSelectColor(cocos2d::CCObject*) {
    // 0x8e6904
    // TODO: Implement
}

void GJSpecialColorSelect::getButtonByTag(int) {
    // 0x8e67d8
    // TODO: Implement
}

void GJSpecialColorSelect::keyBackClicked() {
    // 0x8e6720
    // TODO: Implement
}

void GJSpecialColorSelect::textForColorIdx(int) {
    // 0x8e6954
    // TODO: Implement
}

void GJSpecialColorSelect::highlightSelected(ButtonSprite*) {
    // 0x8e6858
    // TODO: Implement
}

void GJSpecialColorSelect::init(int, GJSpecialColorSelectDelegate*, ColorSelectType) {
    // 0x8e6b04
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJSpecialColorSelect::create(int, GJSpecialColorSelectDelegate*, ColorSelectType) {
    // 0x8e7668
    GJSpecialColorSelect* ret = new GJSpecialColorSelect();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJSpecialColorSelect::onClose(cocos2d::CCObject*) {
    // 0x8e66c0
    // TODO: Implement
}

