// ============================================================
// EndTriggerGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "EndTriggerGameObject.h"

EndTriggerGameObject::~EndTriggerGameObject() {
    // 0x74a0b0
    this->cleanup();
}

EndTriggerGameObject::~EndTriggerGameObject() {
    // 0x74a08c
    this->cleanup();
}

EndTriggerGameObject::~EndTriggerGameObject() {
    // 0x74a08c
    this->cleanup();
}

void EndTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // 0x784a38
    // Save to file/storage
    // TODO: Implement saving
}

void EndTriggerGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // 0x7513c8
    // TODO: Implement
}

void EndTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x75e010
    // TODO: Implement
}

void EndTriggerGameObject::init() {
    // 0x75b5a0
    bool ret = EffectGameObject::init() if "EffectGameObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void EndTriggerGameObject::create() {
    // 0x7680c0
    EndTriggerGameObject* ret = new EndTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

