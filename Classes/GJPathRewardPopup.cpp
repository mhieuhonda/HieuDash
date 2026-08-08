// ============================================================
// GJPathRewardPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJPathRewardPopup.h"

GJPathRewardPopup::~GJPathRewardPopup() {
    // 0xa6cb64
    this->cleanup();
}

GJPathRewardPopup::~GJPathRewardPopup() {
    // 0xa6cab8
    this->cleanup();
}

GJPathRewardPopup::~GJPathRewardPopup() {
    // 0xa6cab8
    this->cleanup();
}

void GJPathRewardPopup::closePopup() {
    // 0xa6cc54
    // TODO: Implement
}

void GJPathRewardPopup::keyBackClicked() {
    // 0xa6c9ec
    // TODO: Implement
}

void GJPathRewardPopup::init(int) {
    // 0xa71160
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJPathRewardPopup::create(int) {
    // 0xa71660
    GJPathRewardPopup* ret = new GJPathRewardPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJPathRewardPopup::onClaim(cocos2d::CCObject*) {
    // 0xa6cdbc
    // TODO: Implement
}

