// ============================================================
// SetTargetIDLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetTargetIDLayer.h"

SetTargetIDLayer::~SetTargetIDLayer() {
    // 0x94c600
    this->cleanup();
}

SetTargetIDLayer::~SetTargetIDLayer() {
    // 0x94c594
    this->cleanup();
}

SetTargetIDLayer::~SetTargetIDLayer() {
    // 0x94c594
    this->cleanup();
}

void SetTargetIDLayer::valueDidChange(int, float) {
    // 0x94c630
    // TODO: Implement
}

void SetTargetIDLayer::determineStartValues() {
    // 0x94c62c
    // TODO: Implement
}

void SetTargetIDLayer::init(EffectGameObject*, cocos2d::CCArray*, std::string, std::string, int, int, int) {
    // 0x94c668
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetTargetIDLayer::create(EffectGameObject*, cocos2d::CCArray*, std::string, std::string, int, int, int) {
    // 0x94cbb4
    SetTargetIDLayer* ret = new SetTargetIDLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

