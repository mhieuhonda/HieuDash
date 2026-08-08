// ============================================================
// SongObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SongObject.h"

SongObject::~SongObject() {
    // 0x60a8d0
    this->cleanup();
}

SongObject::~SongObject() {
    // 0x60a8bc
    this->cleanup();
}

SongObject::~SongObject() {
    // 0x60a8bc
    this->cleanup();
}

void SongObject::init(int) {
    // 0x614e14
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SongObject::create(int) {
    // 0x614e20
    SongObject* ret = new SongObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

