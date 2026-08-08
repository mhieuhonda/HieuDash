// ============================================================
// GauntletLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GauntletLayer.h"

GauntletLayer::~GauntletLayer() {
    // 0x91d52c
    this->cleanup();
}

GauntletLayer::~GauntletLayer() {
    // 0x91d498
    this->cleanup();
}

GauntletLayer::~GauntletLayer() {
    // 0x91d498
    this->cleanup();
}

void GauntletLayer::setupGauntlet(cocos2d::CCArray*) {
    // 0x91e364
    // TODO: Implement
}

void GauntletLayer::keyBackClicked() {
    // 0x91d5e4
    // TODO: Implement
}

void GauntletLayer::loadLevelsFailed(char const*, int) {
    // 0x91d680
    // Load from file/storage
    // TODO: Implement loading
}

void GauntletLayer::unlockActiveItem() {
    // 0x91ddd0
    // TODO: Implement
}

void GauntletLayer::loadLevelsFinished(cocos2d::CCArray*, char const*, int) {
    // 0x91fbd4
    // Load from file/storage
    // TODO: Implement loading
}

void GauntletLayer::init(GauntletType) {
    // 0x91f38c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GauntletLayer::scene(GauntletType) {
    // 0x91fb88
    // TODO: Implement
}

void GauntletLayer::create(GauntletType) {
    // 0x91faa8
    GauntletLayer* ret = new GauntletLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GauntletLayer::onBack(cocos2d::CCObject*) {
    // 0x91d59c
    // TODO: Implement
}

void GauntletLayer::onLevel(cocos2d::CCObject*) {
    // 0x91d558
    // TODO: Implement
}

