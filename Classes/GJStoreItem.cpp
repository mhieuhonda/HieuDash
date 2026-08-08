
#include "GJStoreItem.h"

GJStoreItem::~GJStoreItem() {
    this->cleanup();
}

GJStoreItem::~GJStoreItem() {
    this->cleanup();
}

GJStoreItem::~GJStoreItem() {
    this->cleanup();
}

void GJStoreItem::getCurrencyKey() {
    // TODO: Implement
}

void GJStoreItem::init(int, int, int, int, ShopType) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJStoreItem::create(int, int, int, int, ShopType) {
    GJStoreItem* ret = new GJStoreItem();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

