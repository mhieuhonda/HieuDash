// ============================================================
// CCNodeContainer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCNodeContainer.h"

CCNodeContainer::~CCNodeContainer() {
    // 0x855964
    this->cleanup();
}

CCNodeContainer::~CCNodeContainer() {
    // 0x855950
    this->cleanup();
}

CCNodeContainer::~CCNodeContainer() {
    // 0x855950
    this->cleanup();
}

void CCNodeContainer::init() {
    // 0x89e994
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCNodeContainer::visit() {
    // 0x855844
    // TODO: Implement
}

void CCNodeContainer::create() {
    // 0x89e998
    CCNodeContainer* ret = new CCNodeContainer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

