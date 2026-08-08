// ============================================================
// GJItemIcon.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJItemIcon.h"

GJItemIcon::~GJItemIcon() {
    // 0x78fe94
    this->cleanup();
}

GJItemIcon::~GJItemIcon() {
    // 0x78fe48
    this->cleanup();
}

GJItemIcon::~GJItemIcon() {
    // 0x78fe48
    this->cleanup();
}

void GJItemIcon::setOpacity(unsigned char) {
    // 0x79a838
    // TODO: Implement
}

void GJItemIcon::scaleForType(UnlockType) {
    // 0x7934dc
    // TODO: Implement
}

void GJItemIcon::createStoreItem(UnlockType, int, bool, cocos2d::_ccColor3B) {
    // 0x7949ac
    // TODO: Implement
}

void GJItemIcon::darkenStoreItem(ShopType) {
    // 0x7931d8
    // TODO: Implement
}

void GJItemIcon::darkenStoreItem(cocos2d::_ccColor3B) {
    // 0x793054
    // TODO: Implement
}

void GJItemIcon::createBrowserItem(UnlockType, int) {
    // 0x7949ec
    // TODO: Implement
}

void GJItemIcon::toggleEnabledState(bool) {
    // 0x793220
    // TODO: Implement
}

void GJItemIcon::changeToLockedState(float) {
    // 0x7933e0
    // TODO: Implement
}

void GJItemIcon::unlockedColorForType(int) {
    // 0x792f84
    // TODO: Implement
}

void GJItemIcon::init(UnlockType, int, cocos2d::_ccColor3B, cocos2d::_ccColor3B, bool, bool, bool, cocos2d::_ccColor3B) {
    // 0x794308
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJItemIcon::create(UnlockType, int, cocos2d::_ccColor3B, cocos2d::_ccColor3B, bool, bool, bool, cocos2d::_ccColor3B) {
    // 0x79486c
    GJItemIcon* ret = new GJItemIcon();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

