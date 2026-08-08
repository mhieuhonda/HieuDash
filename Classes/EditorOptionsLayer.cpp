// ============================================================
// EditorOptionsLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "EditorOptionsLayer.h"

EditorOptionsLayer::~EditorOptionsLayer() {
    // 0x8c40c4
    this->cleanup();
}

EditorOptionsLayer::~EditorOptionsLayer() {
    // 0x8c4058
    this->cleanup();
}

EditorOptionsLayer::~EditorOptionsLayer() {
    // 0x8c4058
    this->cleanup();
}

void EditorOptionsLayer::onButtonRows(cocos2d::CCObject*) {
    // 0x8c2080
    // TODO: Implement
}

void EditorOptionsLayer::setupOptions() {
    // 0x8db330
    // TODO: Implement
}

void EditorOptionsLayer::onButtonsPerRow(cocos2d::CCObject*) {
    // 0x8c1ff4
    // TODO: Implement
}

void EditorOptionsLayer::init() {
    // 0x8c93e4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void EditorOptionsLayer::create() {
    // 0x8c96bc
    EditorOptionsLayer* ret = new EditorOptionsLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void EditorOptionsLayer::onClose(cocos2d::CCObject*) {
    // 0x8c2934
    // TODO: Implement
}

