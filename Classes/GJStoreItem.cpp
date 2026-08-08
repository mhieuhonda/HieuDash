// ============================================================
// GJStoreItem.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJStoreItem.h"

GJStoreItem::~GJStoreItem() {
    // 0x7a0f08
    this->cleanup();
}

GJStoreItem::~GJStoreItem() {
    // 0x7a0ef4
    this->cleanup();
}

GJStoreItem::~GJStoreItem() {
    // 0x7a0ef4
    this->cleanup();
}

void GJStoreItem::getCurrencyKey() {
    // 0x7ae4d0
    // TODO: Implement
}

void GJStoreItem::init(int, int, int, int, ShopType) {
    // 0x7ae2c8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJStoreItem::create(int, int, int, int, ShopType) {
    // 0x7ae3d0
    GJStoreItem* ret = new GJStoreItem();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

