// ============================================================
// FindObjectPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "FindObjectPopup.h"

FindObjectPopup::~FindObjectPopup() {
    // 0x8c1f28
    this->cleanup();
}

FindObjectPopup::~FindObjectPopup() {
    // 0x8c1d64
    this->cleanup();
}

FindObjectPopup::~FindObjectPopup() {
    // 0x8c1d64
    this->cleanup();
}

void FindObjectPopup::onFindObjectID(cocos2d::CCObject*) {
    // 0x8d2df8
    // TODO: Implement
}

void FindObjectPopup::init() {
    // 0x8d25d4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void FindObjectPopup::create() {
    // 0x8d2cc4
    FindObjectPopup* ret = new FindObjectPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

