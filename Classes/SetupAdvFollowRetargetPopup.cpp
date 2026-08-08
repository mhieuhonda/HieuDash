// ============================================================
// SetupAdvFollowRetargetPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupAdvFollowRetargetPopup.h"

SetupAdvFollowRetargetPopup::~SetupAdvFollowRetargetPopup() {
    // 0xa173ec
    this->cleanup();
}

SetupAdvFollowRetargetPopup::~SetupAdvFollowRetargetPopup() {
    // 0xa17380
    this->cleanup();
}

SetupAdvFollowRetargetPopup::~SetupAdvFollowRetargetPopup() {
    // 0xa17380
    this->cleanup();
}

void SetupAdvFollowRetargetPopup::valueDidChange(int, float) {
    // 0xa17b5c
    // TODO: Implement
}

void SetupAdvFollowRetargetPopup::updateDefaultTriggerValues() {
    // 0xa17ddc
    // TODO: Implement
}

void SetupAdvFollowRetargetPopup::init(AdvancedFollowEditObject*, cocos2d::CCArray*) {
    // 0xa1e5a8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAdvFollowRetargetPopup::create(AdvancedFollowEditObject*, cocos2d::CCArray*) {
    // 0xa1ee10
    SetupAdvFollowRetargetPopup* ret = new SetupAdvFollowRetargetPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

