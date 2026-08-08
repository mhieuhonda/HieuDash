// ============================================================
// TOSPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "TOSPopup.h"

TOSPopup::~TOSPopup() {
    // 0x8c1f80
    this->cleanup();
}

TOSPopup::~TOSPopup() {
    // 0x8c1e24
    this->cleanup();
}

TOSPopup::~TOSPopup() {
    // 0x8c1e24
    this->cleanup();
}

void TOSPopup::keyBackClicked() {
    // 0x8c1b38
    // TODO: Implement
}

void TOSPopup::init() {
    // 0x8c6380
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TOSPopup::onTOS(cocos2d::CCObject*) {
    // 0x8c32a4
    // TODO: Implement
}

void TOSPopup::create() {
    // 0x8d4a44
    TOSPopup* ret = new TOSPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void TOSPopup::onClose(cocos2d::CCObject*) {
    // 0x8c32cc
    // TODO: Implement
}

void TOSPopup::onPrivacy(cocos2d::CCObject*) {
    // 0x8c327c
    // TODO: Implement
}

