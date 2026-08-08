// ============================================================
// GameLevelOptionsLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GameLevelOptionsLayer.h"

GameLevelOptionsLayer::~GameLevelOptionsLayer() {
    // 0x8c4184
    this->cleanup();
}

GameLevelOptionsLayer::~GameLevelOptionsLayer() {
    // 0x8c40f0
    this->cleanup();
}

GameLevelOptionsLayer::~GameLevelOptionsLayer() {
    // 0x8c40f0
    this->cleanup();
}

void GameLevelOptionsLayer::setupOptions() {
    // 0x8dc448
    // TODO: Implement
}

void GameLevelOptionsLayer::init(GJGameLevel*) {
    // 0x8d5d8c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GameLevelOptionsLayer::create(GJGameLevel*) {
    // 0x8d5dfc
    GameLevelOptionsLayer* ret = new GameLevelOptionsLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GameLevelOptionsLayer::didToggle(int) {
    // 0x8c8274
    // TODO: Implement
}

