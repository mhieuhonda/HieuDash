// ============================================================
// SetupEventLinkPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupEventLinkPopup.h"

SetupEventLinkPopup::~SetupEventLinkPopup() {
    // 0xa43488
    this->cleanup();
}

SetupEventLinkPopup::~SetupEventLinkPopup() {
    // 0xa42ce0
    this->cleanup();
}

SetupEventLinkPopup::~SetupEventLinkPopup() {
    // 0xa42ce0
    this->cleanup();
}

void SetupEventLinkPopup::onSelectEvent(cocos2d::CCObject*) {
    // 0xa57fac
    // TODO: Implement
}

void SetupEventLinkPopup::updateEventIDs(std::set<int, std::less<int>, std::allocator<int> >&) {
    // 0xa542d4
    // TODO: Implement
}

void SetupEventLinkPopup::init(EventLinkTrigger*, cocos2d::CCArray*) {
    // 0xa44178
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupEventLinkPopup::create(EventLinkTrigger*, cocos2d::CCArray*) {
    // 0xa44890
    SetupEventLinkPopup* ret = new SetupEventLinkPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

