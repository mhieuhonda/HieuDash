// ============================================================
// SelectArtLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SelectArtLayer.h"

SelectArtLayer::~SelectArtLayer() {
    // 0xa34138
    this->cleanup();
}

SelectArtLayer::~SelectArtLayer() {
    // 0xa34008
    this->cleanup();
}

SelectArtLayer::~SelectArtLayer() {
    // 0xa34008
    this->cleanup();
}

void SelectArtLayer::keyBackClicked() {
    // 0xa33cd4
    // TODO: Implement
}

void SelectArtLayer::onSelectCustom(cocos2d::CCObject*) {
    // 0xa342e8
    // TODO: Implement
}

void SelectArtLayer::updateSelectedCustom(int) {
    // 0xa364c4
    // TODO: Implement
}

void SelectArtLayer::init(SelectArtType, int) {
    // 0xa358e4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SelectArtLayer::create(SelectArtType, int) {
    // 0xa36308
    SelectArtLayer* ret = new SelectArtLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SelectArtLayer::onClose(cocos2d::CCObject*) {
    // 0xa33c7c
    // TODO: Implement
}

void SelectArtLayer::selectArt(cocos2d::CCObject*) {
    // 0xa341e4
    // TODO: Implement
}

