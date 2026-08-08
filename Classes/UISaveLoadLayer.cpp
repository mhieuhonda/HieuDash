// ============================================================
// UISaveLoadLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "UISaveLoadLayer.h"

UISaveLoadLayer::~UISaveLoadLayer() {
    // 0x8c2340
    this->cleanup();
}

UISaveLoadLayer::~UISaveLoadLayer() {
    // 0x8c22d4
    this->cleanup();
}

UISaveLoadLayer::~UISaveLoadLayer() {
    // 0x8c22d4
    this->cleanup();
}

void UISaveLoadLayer::init(UIOptionsLayer*) {
    // 0x8d8e94
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UISaveLoadLayer::create(UIOptionsLayer*) {
    // 0x8d9370
    UISaveLoadLayer* ret = new UISaveLoadLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void UISaveLoadLayer::onLoad(cocos2d::CCObject*) {
    // 0x8d8828
    // Load from file/storage
    // TODO: Implement loading
}

void UISaveLoadLayer::onSave(cocos2d::CCObject*) {
    // 0x8d8538
    // Save to file/storage
    // TODO: Implement saving
}

