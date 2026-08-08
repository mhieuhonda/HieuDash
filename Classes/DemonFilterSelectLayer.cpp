// ============================================================
// DemonFilterSelectLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "DemonFilterSelectLayer.h"

DemonFilterSelectLayer::~DemonFilterSelectLayer() {
    // 0x6cd488
    this->cleanup();
}

DemonFilterSelectLayer::~DemonFilterSelectLayer() {
    // 0x6cd40c
    this->cleanup();
}

DemonFilterSelectLayer::~DemonFilterSelectLayer() {
    // 0x6cd40c
    this->cleanup();
}

void DemonFilterSelectLayer::selectRating(cocos2d::CCObject*) {
    // 0x6cd4b4
    // TODO: Implement
}

void DemonFilterSelectLayer::keyBackClicked() {
    // 0x6cce90
    // TODO: Implement
}

void DemonFilterSelectLayer::init() {
    // 0x6cdcac
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void DemonFilterSelectLayer::create() {
    // 0x6d5188
    DemonFilterSelectLayer* ret = new DemonFilterSelectLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void DemonFilterSelectLayer::onClose(cocos2d::CCObject*) {
    // 0x6cce38
    // TODO: Implement
}

