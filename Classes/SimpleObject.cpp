// ============================================================
// SimpleObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SimpleObject.h"

SimpleObject::~SimpleObject() {
    // 0x8a253c
    this->cleanup();
}

SimpleObject::~SimpleObject() {
    // 0x8a2528
    this->cleanup();
}

SimpleObject::~SimpleObject() {
    // 0x8a2528
    this->cleanup();
}

void SimpleObject::init() {
    // 0x8a3800
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SimpleObject::create() {
    // 0x8a3808
    SimpleObject* ret = new SimpleObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

