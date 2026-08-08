// ============================================================
// GJColorSetupLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJColorSetupLayer.h"

GJColorSetupLayer::~GJColorSetupLayer() {
    // 0x8a190c
    this->cleanup();
}

GJColorSetupLayer::~GJColorSetupLayer() {
    // 0x8a1868
    this->cleanup();
}

GJColorSetupLayer::~GJColorSetupLayer() {
    // 0x8a1868
    this->cleanup();
}

void GJColorSetupLayer::keyBackClicked() {
    // 0x8a1858
    // TODO: Implement
}

void GJColorSetupLayer::colorSelectClosed(cocos2d::CCNode*) {
    // 0x8a1b90
    // TODO: Implement
}

void GJColorSetupLayer::updateSpriteColor(ColorChannelSprite*, cocos2d::CCLabelBMFont*, int) {
    // 0x8a19c0
    // TODO: Implement
}

void GJColorSetupLayer::updateSpriteColors() {
    // 0x8a1a64
    // TODO: Implement
}

void GJColorSetupLayer::init(LevelSettingsObject*) {
    // 0x8a1c08
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJColorSetupLayer::create(LevelSettingsObject*) {
    // 0x8a2310
    GJColorSetupLayer* ret = new GJColorSetupLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJColorSetupLayer::onPage(cocos2d::CCObject*) {
    // 0x8a244c
    // TODO: Implement
}

void GJColorSetupLayer::onClose(cocos2d::CCObject*) {
    // 0x8a17f4
    // TODO: Implement
}

void GJColorSetupLayer::onColor(cocos2d::CCObject*) {
    // 0x8a1938
    // TODO: Implement
}

void GJColorSetupLayer::showPage(int) {
    // 0x8a1b9c
    // TODO: Implement
}

