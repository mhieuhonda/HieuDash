// ============================================================
// CCAlertCircle.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCAlertCircle.h"

CCAlertCircle::~CCAlertCircle() {
    // 0x5a6084
    this->cleanup();
}

CCAlertCircle::~CCAlertCircle() {
    // 0x5a5ff0
    this->cleanup();
}

CCAlertCircle::~CCAlertCircle() {
    // 0x5a5ff0
    this->cleanup();
}

void CCAlertCircle::draw() {
    // 0x5a6218
    // Render/draw logic
    // TODO: Implement rendering
}

void CCAlertCircle::init() {
    // 0x5a6c64
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCAlertCircle::create() {
    // 0x5a6d10
    CCAlertCircle* ret = new CCAlertCircle();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

