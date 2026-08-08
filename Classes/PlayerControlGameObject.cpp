// ============================================================
// PlayerControlGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "PlayerControlGameObject.h"

PlayerControlGameObject::~PlayerControlGameObject() {
    // 0x749d70
    this->cleanup();
}

PlayerControlGameObject::~PlayerControlGameObject() {
    // 0x749d4c
    this->cleanup();
}

PlayerControlGameObject::~PlayerControlGameObject() {
    // 0x749d4c
    this->cleanup();
}

void PlayerControlGameObject::getSaveString(GJBaseGameLayer*) {
    // 0x7883ec
    // Save to file/storage
    // TODO: Implement saving
}

void PlayerControlGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x74f430
    // TODO: Implement
}

void PlayerControlGameObject::init() {
    // 0x75b5f4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void PlayerControlGameObject::create() {
    // 0x76c428
    PlayerControlGameObject* ret = new PlayerControlGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

