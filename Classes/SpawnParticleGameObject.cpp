// ============================================================
// SpawnParticleGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SpawnParticleGameObject.h"

SpawnParticleGameObject::~SpawnParticleGameObject() {
    // 0x749ca0
    this->cleanup();
}

SpawnParticleGameObject::~SpawnParticleGameObject() {
    // 0x749c7c
    this->cleanup();
}

SpawnParticleGameObject::~SpawnParticleGameObject() {
    // 0x749c7c
    this->cleanup();
}

void SpawnParticleGameObject::getSaveString(GJBaseGameLayer*) {
    // 0x788d58
    // Save to file/storage
    // TODO: Implement saving
}

void SpawnParticleGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x75e2b8
    // TODO: Implement
}

void SpawnParticleGameObject::init() {
    // 0x75b60c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SpawnParticleGameObject::create() {
    // 0x76dee8
    SpawnParticleGameObject* ret = new SpawnParticleGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

