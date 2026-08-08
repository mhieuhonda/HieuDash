
#include "GJUnlockableItem.h"

GJUnlockableItem::~GJUnlockableItem() {
    this->cleanup();
}

bool GJUnlockableItem::init() {
    bool ret = cocos2d::CCNode::init();
    if (!ret) return false;
    // Initialize members and UI - stub
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

