// ============================================================
// ItemTriggerGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ItemTriggerGameObject.h"

ItemTriggerGameObject::~ItemTriggerGameObject() {
    // 0x749f10
    this->cleanup();
}

ItemTriggerGameObject::~ItemTriggerGameObject() {
    // 0x749eec
    this->cleanup();
}

ItemTriggerGameObject::~ItemTriggerGameObject() {
    // 0x749eec
    this->cleanup();
}

void ItemTriggerGameObject::customSetup() {
    // 0x75ecb8
    // TODO: Implement
}

void ItemTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // 0x7868bc
    // Save to file/storage
    // TODO: Implement saving
}

void ItemTriggerGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // 0x770b0c
    // TODO: Implement
}

void ItemTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x74ecd0
    // TODO: Implement
}

void ItemTriggerGameObject::init(char const*) {
    // 0x76a0e4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ItemTriggerGameObject::create(char const*) {
    // 0x76a0e8
    ItemTriggerGameObject* ret = new ItemTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

