// ============================================================
// ArtTriggerGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ArtTriggerGameObject.h"

ArtTriggerGameObject::~ArtTriggerGameObject() {
    // 0x749dd8
    this->cleanup();
}

ArtTriggerGameObject::~ArtTriggerGameObject() {
    // 0x749db4
    this->cleanup();
}

ArtTriggerGameObject::~ArtTriggerGameObject() {
    // 0x749db4
    this->cleanup();
}

void ArtTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // 0x78815c
    // Save to file/storage
    // TODO: Implement saving
}

void ArtTriggerGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // 0x74b2f8
    // TODO: Implement
}

void ArtTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x74f3cc
    // TODO: Implement
}

void ArtTriggerGameObject::init(char const*) {
    // 0x76bc30
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ArtTriggerGameObject::create(char const*) {
    // 0x76bc34
    ArtTriggerGameObject* ret = new ArtTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

