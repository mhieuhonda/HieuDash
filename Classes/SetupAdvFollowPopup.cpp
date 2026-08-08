// ============================================================
// SetupAdvFollowPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupAdvFollowPopup.h"

SetupAdvFollowPopup::~SetupAdvFollowPopup() {
    // 0xa175e4
    this->cleanup();
}

SetupAdvFollowPopup::~SetupAdvFollowPopup() {
    // 0xa17570
    this->cleanup();
}

SetupAdvFollowPopup::~SetupAdvFollowPopup() {
    // 0xa17570
    this->cleanup();
}

void SetupAdvFollowPopup::updateMode(int) {
    // 0xa1cdb0
    // TODO: Implement
}

void SetupAdvFollowPopup::valueDidChange(int, float) {
    // 0xa18234
    // TODO: Implement
}

void SetupAdvFollowPopup::selectPremadeClosed(SelectPremadeLayer*, int) {
    // 0xa1ce80
    // TODO: Implement
}

void SetupAdvFollowPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0xa17304
    // TODO: Implement
}

void SetupAdvFollowPopup::updateDefaultTriggerValues() {
    // 0xa18008
    // TODO: Implement
}

void SetupAdvFollowPopup::init(AdvancedFollowTriggerObject*, cocos2d::CCArray*) {
    // 0xa184f4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAdvFollowPopup::create(AdvancedFollowTriggerObject*, cocos2d::CCArray*) {
    // 0xa1cbb4
    SetupAdvFollowPopup* ret = new SetupAdvFollowPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupAdvFollowPopup::onMode(cocos2d::CCObject*) {
    // 0xa1ce4c
    // TODO: Implement
}

void SetupAdvFollowPopup::onClose(cocos2d::CCObject*) {
    // 0xa1737c
    // TODO: Implement
}

void SetupAdvFollowPopup::onPremade(cocos2d::CCObject*) {
    // 0xa1d310
    // TODO: Implement
}

