// ============================================================
// SetupDashRingPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupDashRingPopup.h"

SetupDashRingPopup::~SetupDashRingPopup() {
    // 0xa438e0
    this->cleanup();
}

SetupDashRingPopup::~SetupDashRingPopup() {
    // 0xa43118
    this->cleanup();
}

SetupDashRingPopup::~SetupDashRingPopup() {
    // 0xa43118
    this->cleanup();
}

void SetupDashRingPopup::init(DashRingObject*, cocos2d::CCArray*) {
    // 0xa531a0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupDashRingPopup::create(DashRingObject*, cocos2d::CCArray*) {
    // 0xa53a44
    SetupDashRingPopup* ret = new SetupDashRingPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

