// ============================================================
// EventLinkTrigger.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "EventLinkTrigger.h"

EventLinkTrigger::~EventLinkTrigger() {
    // 0x771520
    this->cleanup();
}

EventLinkTrigger::~EventLinkTrigger() {
    // 0x7714ac
    this->cleanup();
}

EventLinkTrigger::~EventLinkTrigger() {
    // 0x7714ac
    this->cleanup();
}

void EventLinkTrigger::getSaveString(GJBaseGameLayer*) {
    // 0x782d78
    // Save to file/storage
    // TODO: Implement saving
}

void EventLinkTrigger::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // 0x751298
    // TODO: Implement
}

void EventLinkTrigger::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x7718d8
    // TODO: Implement
}

void EventLinkTrigger::init() {
    // 0x75b548
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void EventLinkTrigger::create() {
    // 0x764efc
    EventLinkTrigger* ret = new EventLinkTrigger();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

