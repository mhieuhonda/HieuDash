// ============================================================
// GJUnlockableItem.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJUnlockableItem.h"

GJUnlockableItem::~GJUnlockableItem() {
    // 0x7a1030
    this->cleanup();
}

GJUnlockableItem::~GJUnlockableItem() {
    // 0x7a101c
    this->cleanup();
}

GJUnlockableItem::~GJUnlockableItem() {
    // 0x7a101c
    this->cleanup();
}

void GJUnlockableItem::init() {
    // 0x7ae548
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJUnlockableItem::create() {
    // 0x7ae550
    GJUnlockableItem* ret = new GJUnlockableItem();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

