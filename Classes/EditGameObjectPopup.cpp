// ============================================================
// EditGameObjectPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "EditGameObjectPopup.h"

EditGameObjectPopup::~EditGameObjectPopup() {
    // 0x8c22a8
    this->cleanup();
}

EditGameObjectPopup::~EditGameObjectPopup() {
    // 0x8c223c
    this->cleanup();
}

EditGameObjectPopup::~EditGameObjectPopup() {
    // 0x8c223c
    this->cleanup();
}

void EditGameObjectPopup::init(EffectGameObject*, cocos2d::CCArray*, bool) {
    // 0x8d12a0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void EditGameObjectPopup::create(EffectGameObject*, cocos2d::CCArray*, bool) {
    // 0x8d161c
    EditGameObjectPopup* ret = new EditGameObjectPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

