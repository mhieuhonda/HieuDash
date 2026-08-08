// ============================================================
// CCURLObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCURLObject.h"

CCURLObject::~CCURLObject() {
    // 0x5e82b0
    this->cleanup();
}

CCURLObject::~CCURLObject() {
    // 0x5e8198
    this->cleanup();
}

CCURLObject::~CCURLObject() {
    // 0x5e8198
    this->cleanup();
}

void CCURLObject::init(std::string, std::string) {
    // 0x5e8710
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCURLObject::create(std::string, std::string) {
    // 0x5e874c
    CCURLObject* ret = new CCURLObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

