// ============================================================
// CheckpointGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CheckpointGameObject.h"

CheckpointGameObject::~CheckpointGameObject() {
    // 0x749bf0
    this->cleanup();
}

CheckpointGameObject::~CheckpointGameObject() {
    // 0x749bcc
    this->cleanup();
}

CheckpointGameObject::~CheckpointGameObject() {
    // 0x749bcc
    this->cleanup();
}

void CheckpointGameObject::resetObject() {
    // 0x767010
    // TODO: Implement
}

void CheckpointGameObject::getSaveString(GJBaseGameLayer*) {
    // 0x7836c8
    // Save to file/storage
    // TODO: Implement saving
}

void CheckpointGameObject::restoreObject() {
    // 0x767060
    // TODO: Implement
}

void CheckpointGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // 0x74992c
    // TODO: Implement
}

void CheckpointGameObject::resetCheckpoint() {
    // 0x767008
    // TODO: Implement
}

void CheckpointGameObject::triggerActivated(float) {
    // 0x7669d4
    // TODO: Implement
}

void CheckpointGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x75df04
    // TODO: Implement
}

void CheckpointGameObject::setupCustomSprites(std::string) {
    // 0x750158
    // TODO: Implement
}

void CheckpointGameObject::updateSyncedAnimation(float, int) {
    // 0x766c8c
    // TODO: Implement
}

void CheckpointGameObject::updateCheckpointSpriteVisibility() {
    // 0x76683c
    // TODO: Implement
}

void CheckpointGameObject::init() {
    // 0x75b560
    bool ret = GameObject::init() if "GameObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CheckpointGameObject::create() {
    // 0x76604c
    CheckpointGameObject* ret = new CheckpointGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

