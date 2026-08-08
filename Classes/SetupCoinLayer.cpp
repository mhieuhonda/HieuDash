// ============================================================
// SetupCoinLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupCoinLayer.h"

SetupCoinLayer::~SetupCoinLayer() {
    // 0xa436b0
    this->cleanup();
}

SetupCoinLayer::~SetupCoinLayer() {
    // 0xa42f68
    this->cleanup();
}

SetupCoinLayer::~SetupCoinLayer() {
    // 0xa42f68
    this->cleanup();
}

void SetupCoinLayer::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa4e514
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupCoinLayer::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa4ea68
    SetupCoinLayer* ret = new SetupCoinLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

