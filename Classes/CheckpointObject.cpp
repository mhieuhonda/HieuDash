// ============================================================
// CheckpointObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CheckpointObject.h"

CheckpointObject::~CheckpointObject() {
    // 0x5d7544
    this->cleanup();
}

CheckpointObject::~CheckpointObject() {
    // 0x5d6c0c
    this->cleanup();
}

CheckpointObject::~CheckpointObject() {
    // 0x5d6c0c
    this->cleanup();
}

void CheckpointObject::init() {
    // 0x5e5cac
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CheckpointObject::create() {
    // 0x5df2fc
    CheckpointObject* ret = new CheckpointObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CheckpointObject::getObject() {
    // 0x5d2d30
    // TODO: Implement
}

void CheckpointObject::setObject(GameObject*) {
    // 0x5d2ce4
    // TODO: Implement
}

