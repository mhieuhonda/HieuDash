// ============================================================
// SetupCameraEdgePopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupCameraEdgePopup.h"

SetupCameraEdgePopup::~SetupCameraEdgePopup() {
    // 0x9edcac
    this->cleanup();
}

SetupCameraEdgePopup::~SetupCameraEdgePopup() {
    // 0x9edc18
    this->cleanup();
}

SetupCameraEdgePopup::~SetupCameraEdgePopup() {
    // 0x9edc18
    this->cleanup();
}

void SetupCameraEdgePopup::textChanged(CCTextInputNode*) {
    // 0x9ef114
    // TODO: Implement
}

void SetupCameraEdgePopup::onCameraEdge(cocos2d::CCObject*) {
    // 0x9eddc8
    // TODO: Implement
}

void SetupCameraEdgePopup::onUnlockEdge(cocos2d::CCObject*) {
    // 0x9ef1f8
    // TODO: Implement
}

void SetupCameraEdgePopup::updateTargetID() {
    // 0x9ef090
    // TODO: Implement
}

void SetupCameraEdgePopup::onTargetIDArrow(cocos2d::CCObject*) {
    // 0x9ef228
    // TODO: Implement
}

void SetupCameraEdgePopup::determineStartValues() {
    // 0x9edcd8
    // TODO: Implement
}

void SetupCameraEdgePopup::updateTextInputLabel() {
    // 0x9edf08
    // TODO: Implement
}

void SetupCameraEdgePopup::init(CameraTriggerGameObject*, cocos2d::CCArray*) {
    // 0x9ee020
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupCameraEdgePopup::create(CameraTriggerGameObject*, cocos2d::CCArray*) {
    // 0x9eee8c
    SetupCameraEdgePopup* ret = new SetupCameraEdgePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupCameraEdgePopup::onClose(cocos2d::CCObject*) {
    // 0x9edec0
    // TODO: Implement
}

