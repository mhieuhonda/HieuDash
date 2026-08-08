// ============================================================
// SongTriggerGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SongTriggerGameObject.h"

SongTriggerGameObject::~SongTriggerGameObject() {
    // 0x7516d8
    this->cleanup();
}

SongTriggerGameObject::~SongTriggerGameObject() {
    // 0x7516b4
    this->cleanup();
}

SongTriggerGameObject::~SongTriggerGameObject() {
    // 0x7516b4
    this->cleanup();
}

void SongTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // 0x782aac
    // Save to file/storage
    // TODO: Implement saving
}

void SongTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x75de40
    // TODO: Implement
}

void SongTriggerGameObject::init(char const*) {
    // 0x76463c
    bool ret = EffectGameObject::init() if "EffectGameObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SongTriggerGameObject::create(char const*) {
    // 0x764640
    SongTriggerGameObject* ret = new SongTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

