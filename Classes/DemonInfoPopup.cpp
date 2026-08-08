// ============================================================
// DemonInfoPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "DemonInfoPopup.h"

DemonInfoPopup::~DemonInfoPopup() {
    // 0x8f7a84
    this->cleanup();
}

DemonInfoPopup::~DemonInfoPopup() {
    // 0x8f79bc
    this->cleanup();
}

DemonInfoPopup::~DemonInfoPopup() {
    // 0x8f79bc
    this->cleanup();
}

void DemonInfoPopup::keyBackClicked() {
    // 0x8f7908
    // TODO: Implement
}

void DemonInfoPopup::createFromString(std::string) {
    // 0x901628
    // TODO: Implement
}

void DemonInfoPopup::init(int, int, int, int, int, int, int, int, int, int, int, int) {
    // 0x8ff798
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void DemonInfoPopup::create(int, int, int, int, int, int, int, int, int, int, int, int) {
    // 0x9002cc
    DemonInfoPopup* ret = new DemonInfoPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void DemonInfoPopup::onClose(cocos2d::CCObject*) {
    // 0x8f78c8
    // TODO: Implement
}

