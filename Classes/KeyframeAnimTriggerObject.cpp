// ============================================================
// KeyframeAnimTriggerObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "KeyframeAnimTriggerObject.h"

KeyframeAnimTriggerObject::~KeyframeAnimTriggerObject() {
    // 0x74a250
    this->cleanup();
}

KeyframeAnimTriggerObject::~KeyframeAnimTriggerObject() {
    // 0x74a22c
    this->cleanup();
}

KeyframeAnimTriggerObject::~KeyframeAnimTriggerObject() {
    // 0x74a22c
    this->cleanup();
}

void KeyframeAnimTriggerObject::getSaveString(GJBaseGameLayer*) {
    // 0x77eba4
    // Save to file/storage
    // TODO: Implement saving
}

void KeyframeAnimTriggerObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x74dcd4
    // TODO: Implement
}

void KeyframeAnimTriggerObject::init() {
    // 0x75b4f8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void KeyframeAnimTriggerObject::create() {
    // 0x75ecf4
    KeyframeAnimTriggerObject* ret = new KeyframeAnimTriggerObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

