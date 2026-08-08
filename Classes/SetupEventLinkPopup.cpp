
#include "SetupEventLinkPopup.h"

SetupEventLinkPopup::~SetupEventLinkPopup() {
    this->cleanup();
}

SetupEventLinkPopup::~SetupEventLinkPopup() {
    this->cleanup();
}

SetupEventLinkPopup::~SetupEventLinkPopup() {
    this->cleanup();
}

void SetupEventLinkPopup::onSelectEvent(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupEventLinkPopup::updateEventIDs(std::set<int, std::less<int>, std::allocator<int> >&) {
    // TODO: Implement
}

void SetupEventLinkPopup::init(EventLinkTrigger*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupEventLinkPopup::create(EventLinkTrigger*, cocos2d::CCArray*) {
    SetupEventLinkPopup* ret = new SetupEventLinkPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

