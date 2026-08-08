// ============================================================
// StartPosObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "StartPosObject.h"

StartPosObject::~StartPosObject() {
    // 0x74af04
    this->cleanup();
}

StartPosObject::~StartPosObject() {
    // 0x74aeb8
    this->cleanup();
}

StartPosObject::~StartPosObject() {
    // 0x74aeb8
    this->cleanup();
}

void StartPosObject::setSettings(LevelSettingsObject*) {
    // 0x75fcfc
    // TODO: Implement
}

void StartPosObject::getSaveString(GJBaseGameLayer*) {
    // 0x777e80
    // Save to file/storage
    // TODO: Implement saving
}

void StartPosObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x74df2c
    // TODO: Implement
}

void StartPosObject::loadSettingsFromString(std::string) {
    // 0x760588
    // Load from file/storage
    // TODO: Implement loading
}

void StartPosObject::init() {
    // 0x75fd48
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void StartPosObject::create() {
    // 0x75fd9c
    StartPosObject* ret = new StartPosObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

