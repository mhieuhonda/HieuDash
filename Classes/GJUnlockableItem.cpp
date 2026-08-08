
#include "GJUnlockableItem.h"

GJUnlockableItem::~GJUnlockableItem() {
    this->cleanup();
}

GJUnlockableItem::~GJUnlockableItem() {
    this->cleanup();
}

GJUnlockableItem::~GJUnlockableItem() {
    this->cleanup();
}

void GJUnlockableItem::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJUnlockableItem::create() {
    GJUnlockableItem* ret = new GJUnlockableItem();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

