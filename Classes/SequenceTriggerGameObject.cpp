// ============================================================
// SequenceTriggerGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SequenceTriggerGameObject.h"

SequenceTriggerGameObject::~SequenceTriggerGameObject() {
    // 0x76f328
    this->cleanup();
}

SequenceTriggerGameObject::~SequenceTriggerGameObject() {
    // 0x76f068
    this->cleanup();
}

SequenceTriggerGameObject::~SequenceTriggerGameObject() {
    // 0x76f068
    this->cleanup();
}

void SequenceTriggerGameObject::resetObject() {
    // 0x74ac60
    // TODO: Implement
}

void SequenceTriggerGameObject::deleteTarget(int) {
    // 0x763198
    // TODO: Implement
}

void SequenceTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // 0x780708
    // Save to file/storage
    // TODO: Implement saving
}

void SequenceTriggerGameObject::reorderTarget(int, bool) {
    // 0x7630f4
    // TODO: Implement
}

void SequenceTriggerGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // 0x771d18
    // TODO: Implement
}

void SequenceTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x770f54
    // TODO: Implement
}

void SequenceTriggerGameObject::updateSequenceTotalCount() {
    // 0x762e64
    // TODO: Implement
}

void SequenceTriggerGameObject::init() {
    // 0x76223c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SequenceTriggerGameObject::create() {
    // 0x76f128
    SequenceTriggerGameObject* ret = new SequenceTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SequenceTriggerGameObject::addCount(int, int) {
    // 0x763214
    // TODO: Implement
}

void SequenceTriggerGameObject::addTarget(int, int) {
    // 0x762fa4
    // TODO: Implement
}

