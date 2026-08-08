
#include "PurchaseItemPopup.h"

PurchaseItemPopup::~PurchaseItemPopup() {
    this->cleanup();
}

PurchaseItemPopup::~PurchaseItemPopup() {
    this->cleanup();
}

PurchaseItemPopup::~PurchaseItemPopup() {
    this->cleanup();
}

void PurchaseItemPopup::onPurchase(cocos2d::CCObject*) {
    // TODO: Implement
}

void PurchaseItemPopup::keyBackClicked() {
    // TODO: Implement
}

void PurchaseItemPopup::init(GJStoreItem*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void PurchaseItemPopup::create(GJStoreItem*) {
    PurchaseItemPopup* ret = new PurchaseItemPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void PurchaseItemPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

