// ============================================================
// GraphicsReloadLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GraphicsReloadLayer.h"

GraphicsReloadLayer::~GraphicsReloadLayer() {
    // 0x7c72fc
    this->cleanup();
}

GraphicsReloadLayer::~GraphicsReloadLayer() {
    // 0x7c72b8
    this->cleanup();
}

GraphicsReloadLayer::~GraphicsReloadLayer() {
    // 0x7c72b8
    this->cleanup();
}

void GraphicsReloadLayer::performReload() {
    // 0x7c7ed8
    // Load from file/storage
    // TODO: Implement loading
}

void GraphicsReloadLayer::init(cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool) {
    // 0x7d2be4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GraphicsReloadLayer::scene(cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool) {
    // 0x7d2df0
    // TODO: Implement
}

void GraphicsReloadLayer::create(cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool) {
    // 0x7d2ca8
    GraphicsReloadLayer* ret = new GraphicsReloadLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

