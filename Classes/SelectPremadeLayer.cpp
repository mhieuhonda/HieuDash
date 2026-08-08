// ============================================================
// SelectPremadeLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SelectPremadeLayer.h"

SelectPremadeLayer::~SelectPremadeLayer() {
    // 0xa172d8
    this->cleanup();
}

SelectPremadeLayer::~SelectPremadeLayer() {
    // 0xa17284
    this->cleanup();
}

SelectPremadeLayer::~SelectPremadeLayer() {
    // 0xa17284
    this->cleanup();
}

void SelectPremadeLayer::keyBackClicked() {
    // 0xa17274
    // TODO: Implement
}

void SelectPremadeLayer::onSelectPremade(cocos2d::CCObject*) {
    // 0xa17218
    // TODO: Implement
}

void SelectPremadeLayer::init() {
    // 0xa176b4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SelectPremadeLayer::create() {
    // 0xa1d20c
    SelectPremadeLayer* ret = new SelectPremadeLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SelectPremadeLayer::onClose(cocos2d::CCObject*) {
    // 0xa171d8
    // TODO: Implement
}

