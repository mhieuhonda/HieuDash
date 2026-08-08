// ============================================================
// GameObjectCopy.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GameObjectCopy.h"

GameObjectCopy::~GameObjectCopy() {
    // 0x65b428
    this->cleanup();
}

GameObjectCopy::~GameObjectCopy() {
    // 0x65b3ec
    this->cleanup();
}

GameObjectCopy::~GameObjectCopy() {
    // 0x65b3ec
    this->cleanup();
}

void GameObjectCopy::resetObject() {
    // 0x664c38
    // TODO: Implement
}

void GameObjectCopy::init(GameObject*) {
    // 0x6647a4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GameObjectCopy::create(GameObject*) {
    // 0x664864
    GameObjectCopy* ret = new GameObjectCopy();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

