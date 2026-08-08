// ============================================================
// LevelOptionsLayer2.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "LevelOptionsLayer2.h"

LevelOptionsLayer2::~LevelOptionsLayer2() {
    // 0xa34820
    this->cleanup();
}

LevelOptionsLayer2::~LevelOptionsLayer2() {
    // 0xa347b4
    this->cleanup();
}

LevelOptionsLayer2::~LevelOptionsLayer2() {
    // 0xa347b4
    this->cleanup();
}

void LevelOptionsLayer2::setupOptions() {
    // 0xa348ac
    // TODO: Implement
}

void LevelOptionsLayer2::init(LevelSettingsObject*) {
    // 0xa39cbc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void LevelOptionsLayer2::create(LevelSettingsObject*) {
    // 0xa39dc0
    LevelOptionsLayer2* ret = new LevelOptionsLayer2();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

