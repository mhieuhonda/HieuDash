// ============================================================
// OptionsObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "OptionsObject.h"

OptionsObject::~OptionsObject() {
    // 0x8c4360
    this->cleanup();
}

OptionsObject::~OptionsObject() {
    // 0x8c42a8
    this->cleanup();
}

OptionsObject::~OptionsObject() {
    // 0x8c42a8
    this->cleanup();
}

void OptionsObject::toggleState() {
    // 0x8d4d1c
    // TODO: Implement
}

void OptionsObject::init(int, bool, std::string, OptionsObjectDelegate*) {
    // 0x8d4b48
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void OptionsObject::create(int, bool, std::string, OptionsObjectDelegate*) {
    // 0x8d4b88
    OptionsObject* ret = new OptionsObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

