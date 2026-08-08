// ============================================================
// SpawnTriggerGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SpawnTriggerGameObject.h"

SpawnTriggerGameObject::~SpawnTriggerGameObject() {
    // 0x74a634
    this->cleanup();
}

SpawnTriggerGameObject::~SpawnTriggerGameObject() {
    // 0x74a5dc
    this->cleanup();
}

SpawnTriggerGameObject::~SpawnTriggerGameObject() {
    // 0x74a5dc
    this->cleanup();
}

void SpawnTriggerGameObject::changeRemap(int, int, bool) {
    // 0x771544
    // TODO: Implement
}

void SpawnTriggerGameObject::removeRemap(int, int) {
    // 0x765fbc
    // TODO: Implement
}

void SpawnTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // 0x783164
    // Save to file/storage
    // TODO: Implement saving
}

void SpawnTriggerGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // 0x74b244
    // TODO: Implement
}

void SpawnTriggerGameObject::updateRemapKeys(std::vector<int> const&) {
    // 0x772344
    // TODO: Implement
}

void SpawnTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x771218
    // TODO: Implement
}

void SpawnTriggerGameObject::getRemapWithSource(int) {
    // 0x765f20
    // TODO: Implement
}

void SpawnTriggerGameObject::getRemapWithTarget(int) {
    // 0x765f6c
    // TODO: Implement
}

void SpawnTriggerGameObject::init() {
    // 0x75b554
    bool ret = EffectGameObject::init() if "EffectGameObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SpawnTriggerGameObject::create() {
    // 0x765708
    SpawnTriggerGameObject* ret = new SpawnTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SpawnTriggerGameObject::addRemap(int, int) {
    // 0x7711a0
    // TODO: Implement
}

