// ============================================================
// SetupPlayerControlPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupPlayerControlPopup.h"

SetupPlayerControlPopup::~SetupPlayerControlPopup() {
    // 0xa434b4
    this->cleanup();
}

SetupPlayerControlPopup::~SetupPlayerControlPopup() {
    // 0xa42d4c
    this->cleanup();
}

SetupPlayerControlPopup::~SetupPlayerControlPopup() {
    // 0xa42d4c
    this->cleanup();
}

void SetupPlayerControlPopup::init(PlayerControlGameObject*, cocos2d::CCArray*) {
    // 0xa44bb4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupPlayerControlPopup::create(PlayerControlGameObject*, cocos2d::CCArray*) {
    // 0xa453e4
    SetupPlayerControlPopup* ret = new SetupPlayerControlPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

