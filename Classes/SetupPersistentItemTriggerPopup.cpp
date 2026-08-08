
#include "SetupPersistentItemTriggerPopup.h"

SetupPersistentItemTriggerPopup::~SetupPersistentItemTriggerPopup() {
    this->cleanup();
}

SetupPersistentItemTriggerPopup::~SetupPersistentItemTriggerPopup() {
    this->cleanup();
}

SetupPersistentItemTriggerPopup::~SetupPersistentItemTriggerPopup() {
    this->cleanup();
}

void SetupPersistentItemTriggerPopup::init(ItemTriggerGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupPersistentItemTriggerPopup::create(ItemTriggerGameObject*, cocos2d::CCArray*) {
    SetupPersistentItemTriggerPopup* ret = new SetupPersistentItemTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

