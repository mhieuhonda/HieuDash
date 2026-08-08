
#include "ItemInfoPopup.h"

ItemInfoPopup::~ItemInfoPopup() {
    this->cleanup();
}

ItemInfoPopup::~ItemInfoPopup() {
    this->cleanup();
}

ItemInfoPopup::~ItemInfoPopup() {
    this->cleanup();
}

void ItemInfoPopup::keyBackClicked() {
    // TODO: Implement
}

void ItemInfoPopup::nameForUnlockType(int, UnlockType) {
    // TODO: Implement
}

void ItemInfoPopup::isUnlockedByDefault(int, UnlockType) {
    // TODO: Implement
}

void ItemInfoPopup::init(int, UnlockType) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ItemInfoPopup::create(int, UnlockType) {
    ItemInfoPopup* ret = new ItemInfoPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ItemInfoPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void ItemInfoPopup::onCredit(cocos2d::CCObject*) {
    // TODO: Implement
}

