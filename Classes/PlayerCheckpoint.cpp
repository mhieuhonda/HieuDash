// ============================================================
// PlayerCheckpoint.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "PlayerCheckpoint.h"

PlayerCheckpoint::~PlayerCheckpoint() {
    // 0x5d7638
    this->cleanup();
}

PlayerCheckpoint::~PlayerCheckpoint() {
    // 0x5d75ac
    this->cleanup();
}

PlayerCheckpoint::~PlayerCheckpoint() {
    // 0x5d75ac
    this->cleanup();
}

void PlayerCheckpoint::init() {
    // 0x5e5c70
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void PlayerCheckpoint::create() {
    // 0x5d394c
    PlayerCheckpoint* ret = new PlayerCheckpoint();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

