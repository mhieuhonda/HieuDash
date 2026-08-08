// ============================================================
// SetItemIDLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetItemIDLayer.h"

SetItemIDLayer::~SetItemIDLayer() {
    // 0x94b6dc
    this->cleanup();
}

SetItemIDLayer::~SetItemIDLayer() {
    // 0x94b670
    this->cleanup();
}

SetItemIDLayer::~SetItemIDLayer() {
    // 0x94b670
    this->cleanup();
}

void SetItemIDLayer::valueDidChange(int, float) {
    // 0x94b858
    // TODO: Implement
}

void SetItemIDLayer::updateEditorLabel() {
    // 0x94c51c
    // TODO: Implement
}

void SetItemIDLayer::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0x94b708
    // TODO: Implement
}

void SetItemIDLayer::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x94b8fc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetItemIDLayer::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x94c328
    SetItemIDLayer* ret = new SetItemIDLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetItemIDLayer::onClose(cocos2d::CCObject*) {
    // 0x94c568
    // TODO: Implement
}

