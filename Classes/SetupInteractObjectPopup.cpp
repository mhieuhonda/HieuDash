// ============================================================
// SetupInteractObjectPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupInteractObjectPopup.h"

SetupInteractObjectPopup::~SetupInteractObjectPopup() {
    // 0x9549a4
    this->cleanup();
}

SetupInteractObjectPopup::~SetupInteractObjectPopup() {
    // 0x954938
    this->cleanup();
}

SetupInteractObjectPopup::~SetupInteractObjectPopup() {
    // 0x954938
    this->cleanup();
}

void SetupInteractObjectPopup::updateItems() {
    // 0x954a0c
    // TODO: Implement
}

void SetupInteractObjectPopup::onPlusButton(cocos2d::CCObject*) {
    // 0x9557fc
    // TODO: Implement
}

void SetupInteractObjectPopup::valueDidChange(int, float) {
    // 0x954a7c
    // TODO: Implement
}

void SetupInteractObjectPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x954aa0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupInteractObjectPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x955608
    SetupInteractObjectPopup* ret = new SetupInteractObjectPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupInteractObjectPopup::onClose(cocos2d::CCObject*) {
    // 0x9549d0
    // TODO: Implement
}

