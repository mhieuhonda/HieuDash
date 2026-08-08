// ============================================================
// SetupCheckpointPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupCheckpointPopup.h"

SetupCheckpointPopup::~SetupCheckpointPopup() {
    // 0xa4356c
    this->cleanup();
}

SetupCheckpointPopup::~SetupCheckpointPopup() {
    // 0xa42e24
    this->cleanup();
}

SetupCheckpointPopup::~SetupCheckpointPopup() {
    // 0xa42e24
    this->cleanup();
}

void SetupCheckpointPopup::init(CheckpointGameObject*, cocos2d::CCArray*) {
    // 0xa46538
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupCheckpointPopup::create(CheckpointGameObject*, cocos2d::CCArray*) {
    // 0xa46c64
    SetupCheckpointPopup* ret = new SetupCheckpointPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

