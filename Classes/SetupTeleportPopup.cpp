// ============================================================
// SetupTeleportPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupTeleportPopup.h"

SetupTeleportPopup::~SetupTeleportPopup() {
    // 0x9f11b0
    this->cleanup();
}

SetupTeleportPopup::~SetupTeleportPopup() {
    // 0x9f111c
    this->cleanup();
}

SetupTeleportPopup::~SetupTeleportPopup() {
    // 0x9f111c
    this->cleanup();
}

void SetupTeleportPopup::valueDidChange(int, float) {
    // 0x9f11e0
    // TODO: Implement
}

void SetupTeleportPopup::onTeleportGravity(cocos2d::CCObject*) {
    // 0x9f2a74
    // TODO: Implement
}

void SetupTeleportPopup::determineStartValues() {
    // 0x9f11dc
    // TODO: Implement
}

void SetupTeleportPopup::updateDefaultTriggerValues() {
    // 0x9f2a38
    // TODO: Implement
}

void SetupTeleportPopup::updateTeleportGravityState(int) {
    // 0x9f29ac
    // TODO: Implement
}

void SetupTeleportPopup::init(TeleportPortalObject*, cocos2d::CCArray*, int, bool) {
    // 0x9f128c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupTeleportPopup::create(TeleportPortalObject*, cocos2d::CCArray*, int, bool) {
    // 0x9f2798
    SetupTeleportPopup* ret = new SetupTeleportPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

