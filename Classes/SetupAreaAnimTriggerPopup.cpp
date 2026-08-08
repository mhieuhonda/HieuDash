// ============================================================
// SetupAreaAnimTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupAreaAnimTriggerPopup.h"

SetupAreaAnimTriggerPopup::~SetupAreaAnimTriggerPopup() {
    // 0xa08df4
    this->cleanup();
}

SetupAreaAnimTriggerPopup::~SetupAreaAnimTriggerPopup() {
    // 0xa08c0c
    this->cleanup();
}

SetupAreaAnimTriggerPopup::~SetupAreaAnimTriggerPopup() {
    // 0xa08c0c
    this->cleanup();
}

void SetupAreaAnimTriggerPopup::valueDidChange(int, float) {
    // 0xa12844
    // TODO: Implement
}

void SetupAreaAnimTriggerPopup::updateTargetIDLabel() {
    // 0xa127d4
    // TODO: Implement
}

void SetupAreaAnimTriggerPopup::onDeactivateAnimValue(cocos2d::CCObject*) {
    // 0xa092e8
    // TODO: Implement
}

void SetupAreaAnimTriggerPopup::updateDefaultTriggerValues() {
    // 0xa128c0
    // TODO: Implement
}

void SetupAreaAnimTriggerPopup::createValueControlAdvancedAnim(int, std::string, cocos2d::CCPoint, float, bool, InputValueType, int, bool, float, float, int, int, GJInputStyle) {
    // 0xa10340
    // TODO: Implement
}

void SetupAreaAnimTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*, int) {
    // 0xa105cc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAreaAnimTriggerPopup::create(EnterEffectObject*, cocos2d::CCArray*, int) {
    // 0xa125c0
    SetupAreaAnimTriggerPopup* ret = new SetupAreaAnimTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

