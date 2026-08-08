// ============================================================
// ItemInfoPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ItemInfoPopup.h"

ItemInfoPopup::~ItemInfoPopup() {
    // 0x78ff0c
    this->cleanup();
}

ItemInfoPopup::~ItemInfoPopup() {
    // 0x78feb8
    this->cleanup();
}

ItemInfoPopup::~ItemInfoPopup() {
    // 0x78feb8
    this->cleanup();
}

void ItemInfoPopup::keyBackClicked() {
    // 0x78fa54
    // TODO: Implement
}

void ItemInfoPopup::nameForUnlockType(int, UnlockType) {
    // 0x79353c
    // TODO: Implement
}

void ItemInfoPopup::isUnlockedByDefault(int, UnlockType) {
    // 0x793504
    // TODO: Implement
}

void ItemInfoPopup::init(int, UnlockType) {
    // 0x794b94
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ItemInfoPopup::create(int, UnlockType) {
    // 0x796218
    ItemInfoPopup* ret = new ItemInfoPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ItemInfoPopup::onClose(cocos2d::CCObject*) {
    // 0x78fa14
    // TODO: Implement
}

void ItemInfoPopup::onCredit(cocos2d::CCObject*) {
    // 0x78ff38
    // TODO: Implement
}

