// ============================================================
// GJLocalScore.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJLocalScore.h"

GJLocalScore::~GJLocalScore() {
    // 0x6edd38
    this->cleanup();
}

GJLocalScore::~GJLocalScore() {
    // 0x6edd24
    this->cleanup();
}

GJLocalScore::~GJLocalScore() {
    // 0x6edd24
    this->cleanup();
}

void GJLocalScore::init(int, int) {
    // 0x70e5bc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJLocalScore::create(int, int) {
    // 0x70e5d0
    GJLocalScore* ret = new GJLocalScore();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

