// ============================================================
// SetupKeyframePopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupKeyframePopup.h"

SetupKeyframePopup::~SetupKeyframePopup() {
    // 0xa3a234
    this->cleanup();
}

SetupKeyframePopup::~SetupKeyframePopup() {
    // 0xa3a1a0
    this->cleanup();
}

SetupKeyframePopup::~SetupKeyframePopup() {
    // 0xa3a1a0
    this->cleanup();
}

void SetupKeyframePopup::onTimeMode(cocos2d::CCObject*) {
    // 0xa3b254
    // TODO: Implement
}

void SetupKeyframePopup::onCustomButton(cocos2d::CCObject*) {
    // 0xa3d14c
    // TODO: Implement
}

void SetupKeyframePopup::valueDidChange(int, float) {
    // 0xa3d124
    // TODO: Implement
}

void SetupKeyframePopup::refreshPreviewArt() {
    // 0xa3cf60
    // TODO: Implement
}

void SetupKeyframePopup::updateTimeModeButtons() {
    // 0xa3b1b4
    // TODO: Implement
}

void SetupKeyframePopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0xa3a260
    // TODO: Implement
}

void SetupKeyframePopup::init(KeyframeGameObject*, cocos2d::CCArray*, LevelEditorLayer*) {
    // 0xa3b2f4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupKeyframePopup::create(KeyframeGameObject*, cocos2d::CCArray*, LevelEditorLayer*) {
    // 0xa3cd58
    SetupKeyframePopup* ret = new SetupKeyframePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupKeyframePopup::onClose(cocos2d::CCObject*) {
    // 0xa3a318
    // TODO: Implement
}

