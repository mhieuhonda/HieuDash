// ============================================================
// SFXInfoObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SFXInfoObject.h"

SFXInfoObject::~SFXInfoObject() {
    // 0x826c24
    this->cleanup();
}

SFXInfoObject::~SFXInfoObject() {
    // 0x826b6c
    this->cleanup();
}

SFXInfoObject::~SFXInfoObject() {
    // 0x826b6c
    this->cleanup();
}

void SFXInfoObject::getLowerCaseName() {
    // 0x82e184
    // TODO: Implement
}

void SFXInfoObject::init(int, std::string, int, int, int) {
    // 0x82df88
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SFXInfoObject::create(int, std::string, int, int, int) {
    // 0x82dfe0
    SFXInfoObject* ret = new SFXInfoObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

