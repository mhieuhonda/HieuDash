
#include "GJItemIcon.h"

GJItemIcon::~GJItemIcon() {
    this->cleanup();
}

GJItemIcon::~GJItemIcon() {
    this->cleanup();
}

GJItemIcon::~GJItemIcon() {
    this->cleanup();
}

void GJItemIcon::setOpacity(unsigned char) {
    // TODO: Implement
}

void GJItemIcon::scaleForType(UnlockType) {
    // TODO: Implement
}

void GJItemIcon::createStoreItem(UnlockType, int, bool, cocos2d::_ccColor3B) {
    // TODO: Implement
}

void GJItemIcon::darkenStoreItem(ShopType) {
    // TODO: Implement
}

void GJItemIcon::darkenStoreItem(cocos2d::_ccColor3B) {
    // TODO: Implement
}

void GJItemIcon::createBrowserItem(UnlockType, int) {
    // TODO: Implement
}

void GJItemIcon::toggleEnabledState(bool) {
    // TODO: Implement
}

void GJItemIcon::changeToLockedState(float) {
    // TODO: Implement
}

void GJItemIcon::unlockedColorForType(int) {
    // TODO: Implement
}

void GJItemIcon::init(UnlockType, int, cocos2d::_ccColor3B, cocos2d::_ccColor3B, bool, bool, bool, cocos2d::_ccColor3B) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJItemIcon::create(UnlockType, int, cocos2d::_ccColor3B, cocos2d::_ccColor3B, bool, bool, bool, cocos2d::_ccColor3B) {
    GJItemIcon* ret = new GJItemIcon();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

