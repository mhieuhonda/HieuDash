// ============================================================
// GradientTriggerObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GradientTriggerObject.h"

GradientTriggerObject::~GradientTriggerObject() {
    // 0x74a458
    this->cleanup();
}

GradientTriggerObject::~GradientTriggerObject() {
    // 0x74a434
    this->cleanup();
}

GradientTriggerObject::~GradientTriggerObject() {
    // 0x74a434
    this->cleanup();
}

void GradientTriggerObject::getSaveString(GJBaseGameLayer*) {
    // 0x779a40
    // Save to file/storage
    // TODO: Implement saving
}

void GradientTriggerObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x74d858
    // TODO: Implement
}

void GradientTriggerObject::init() {
    // 0x7579e0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GradientTriggerObject::create() {
    // 0x757a18
    GradientTriggerObject* ret = new GradientTriggerObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

