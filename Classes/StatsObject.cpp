// ============================================================
// StatsObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "StatsObject.h"

StatsObject::~StatsObject() {
    // 0x60a888
    this->cleanup();
}

StatsObject::~StatsObject() {
    // 0x60a874
    this->cleanup();
}

StatsObject::~StatsObject() {
    // 0x60a874
    this->cleanup();
}

void StatsObject::init(char const*, int) {
    // 0x61390c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void StatsObject::create(char const*, int) {
    // 0x613a0c
    StatsObject* ret = new StatsObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

