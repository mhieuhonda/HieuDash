// ============================================================
// SFXTriggerGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SFXTriggerGameObject.h"

SFXTriggerGameObject::~SFXTriggerGameObject() {
    // 0x751690
    this->cleanup();
}

SFXTriggerGameObject::~SFXTriggerGameObject() {
    // 0x7515c8
    this->cleanup();
}

SFXTriggerGameObject::~SFXTriggerGameObject() {
    // 0x7515c8
    this->cleanup();
}

void SFXTriggerGameObject::getSFXRefID() {
    // 0x764608
    // TODO: Implement
}

void SFXTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // 0x7815ac
    // Save to file/storage
    // TODO: Implement saving
}

void SFXTriggerGameObject::getUniqueSFXID() {
    // 0x764628
    // TODO: Implement
}

void SFXTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x75d62c
    // TODO: Implement
}

void SFXTriggerGameObject::init(char const*) {
    // 0x763d58
    bool ret = EffectGameObject::init() if "EffectGameObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SFXTriggerGameObject::create(char const*) {
    // 0x763d5c
    SFXTriggerGameObject* ret = new SFXTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

