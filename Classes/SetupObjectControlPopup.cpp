// ============================================================
// SetupObjectControlPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupObjectControlPopup.h"

SetupObjectControlPopup::~SetupObjectControlPopup() {
    // 0xa43854
    this->cleanup();
}

SetupObjectControlPopup::~SetupObjectControlPopup() {
    // 0xa430ac
    this->cleanup();
}

SetupObjectControlPopup::~SetupObjectControlPopup() {
    // 0xa430ac
    this->cleanup();
}

void SetupObjectControlPopup::init(ObjectControlGameObject*, cocos2d::CCArray*) {
    // 0xa52b24
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupObjectControlPopup::create(ObjectControlGameObject*, cocos2d::CCArray*) {
    // 0xa52fac
    SetupObjectControlPopup* ret = new SetupObjectControlPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

