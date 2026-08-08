// ============================================================
// SelectSFXSortLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SelectSFXSortLayer.h"

SelectSFXSortLayer::~SelectSFXSortLayer() {
    // 0xa5cca4
    this->cleanup();
}

SelectSFXSortLayer::~SelectSFXSortLayer() {
    // 0xa5cc24
    this->cleanup();
}

SelectSFXSortLayer::~SelectSFXSortLayer() {
    // 0xa5cc24
    this->cleanup();
}

void SelectSFXSortLayer::keyBackClicked() {
    // 0xa5cb60
    // TODO: Implement
}

void SelectSFXSortLayer::init(AudioSortType) {
    // 0xa5fa1c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SelectSFXSortLayer::create(AudioSortType) {
    // 0xa5ffec
    SelectSFXSortLayer* ret = new SelectSFXSortLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SelectSFXSortLayer::onClose(cocos2d::CCObject*) {
    // 0xa5cacc
    // TODO: Implement
}

void SelectSFXSortLayer::onSelect(cocos2d::CCObject*) {
    // 0xa5cb0c
    // TODO: Implement
}

