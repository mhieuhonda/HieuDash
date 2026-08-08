// ============================================================
// KeyframeGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "KeyframeGameObject.h"

KeyframeGameObject::~KeyframeGameObject() {
    // 0x74af74
    this->cleanup();
}

KeyframeGameObject::~KeyframeGameObject() {
    // 0x74af28
    this->cleanup();
}

KeyframeGameObject::~KeyframeGameObject() {
    // 0x74af28
    this->cleanup();
}

void KeyframeGameObject::setOpacity(unsigned char) {
    // 0x74b0ac
    // TODO: Implement
}

void KeyframeGameObject::getSaveString(GJBaseGameLayer*) {
    // 0x780bfc
    // Save to file/storage
    // TODO: Implement saving
}

void KeyframeGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x74df30
    // TODO: Implement
}

void KeyframeGameObject::updateShadowObjects(GJBaseGameLayer*, EditorUI*) {
    // 0x763a94
    // TODO: Implement
}

void KeyframeGameObject::init() {
    // 0x75b504
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void KeyframeGameObject::create() {
    // 0x763264
    KeyframeGameObject* ret = new KeyframeGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

