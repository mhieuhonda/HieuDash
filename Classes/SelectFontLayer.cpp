// ============================================================
// SelectFontLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SelectFontLayer.h"

SelectFontLayer::~SelectFontLayer() {
    // 0x8c1e78
    this->cleanup();
}

SelectFontLayer::~SelectFontLayer() {
    // 0x8c1bb4
    this->cleanup();
}

SelectFontLayer::~SelectFontLayer() {
    // 0x8c1bb4
    this->cleanup();
}

void SelectFontLayer::onChangeFont(cocos2d::CCObject*) {
    // 0x8c6af0
    // TODO: Implement
}

void SelectFontLayer::keyBackClicked() {
    // 0x8c1994
    // TODO: Implement
}

void SelectFontLayer::updateFontLabel() {
    // 0x8c69c0
    // TODO: Implement
}

void SelectFontLayer::init(LevelEditorLayer*) {
    // 0x8c6bb0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SelectFontLayer::create(LevelEditorLayer*) {
    // 0x8c725c
    SelectFontLayer* ret = new SelectFontLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SelectFontLayer::onClose(cocos2d::CCObject*) {
    // 0x8c1954
    // TODO: Implement
}

