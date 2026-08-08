// ============================================================
// SFXFolderObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SFXFolderObject.h"

SFXFolderObject::~SFXFolderObject() {
    // 0x826c84
    this->cleanup();
}

SFXFolderObject::~SFXFolderObject() {
    // 0x826c48
    this->cleanup();
}

SFXFolderObject::~SFXFolderObject() {
    // 0x826c48
    this->cleanup();
}

void SFXFolderObject::init(int, std::string, int) {
    // 0x82e2a0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SFXFolderObject::create(int, std::string, int) {
    // 0x82e3cc
    SFXFolderObject* ret = new SFXFolderObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

