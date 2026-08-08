// ============================================================
// PurchaseItemPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "PurchaseItemPopup.h"

PurchaseItemPopup::~PurchaseItemPopup() {
    // 0x92a650
    this->cleanup();
}

PurchaseItemPopup::~PurchaseItemPopup() {
    // 0x92a5d4
    this->cleanup();
}

PurchaseItemPopup::~PurchaseItemPopup() {
    // 0x92a5d4
    this->cleanup();
}

void PurchaseItemPopup::onPurchase(cocos2d::CCObject*) {
    // 0x92a67c
    // TODO: Implement
}

void PurchaseItemPopup::keyBackClicked() {
    // 0x92a4c8
    // TODO: Implement
}

void PurchaseItemPopup::init(GJStoreItem*) {
    // 0x92fba8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void PurchaseItemPopup::create(GJStoreItem*) {
    // 0x9308b8
    PurchaseItemPopup* ret = new PurchaseItemPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void PurchaseItemPopup::onClose(cocos2d::CCObject*) {
    // 0x92a488
    // TODO: Implement
}

