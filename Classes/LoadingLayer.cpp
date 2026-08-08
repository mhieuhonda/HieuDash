// ============================================================
// LoadingLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "LoadingLayer.h"

LoadingLayer::~LoadingLayer() {
    // 0x5c43c4
    this->cleanup();
}

LoadingLayer::~LoadingLayer() {
    // 0x5c435c
    this->cleanup();
}

LoadingLayer::~LoadingLayer() {
    // 0x5c435c
    this->cleanup();
}

void LoadingLayer::loadAssets() {
    // 0x5c4530
    // Load from file/storage
    // TODO: Implement loading
}

void LoadingLayer::updateProgress(int) {
    // 0x5c4490
    // TODO: Implement
}

void LoadingLayer::loadingFinished() {
    // 0x5c4434
    // Load from file/storage
    // TODO: Implement loading
}

void LoadingLayer::getLoadingString() {
    // 0x5c4cdc
    // Load from file/storage
    // TODO: Implement loading
}

void LoadingLayer::init(bool) {
    // 0x5c51f4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void LoadingLayer::scene(bool) {
    // 0x5c5a8c
    // TODO: Implement
}

void LoadingLayer::create(bool) {
    // 0x5c59a8
    LoadingLayer* ret = new LoadingLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

