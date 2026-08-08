
#include "EventLinkTrigger.h"

EventLinkTrigger::~EventLinkTrigger() {
    this->cleanup();
}

EventLinkTrigger::~EventLinkTrigger() {
    this->cleanup();
}

EventLinkTrigger::~EventLinkTrigger() {
    this->cleanup();
}

void EventLinkTrigger::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void EventLinkTrigger::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // TODO: Implement
}

void EventLinkTrigger::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void EventLinkTrigger::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void EventLinkTrigger::create() {
    EventLinkTrigger* ret = new EventLinkTrigger();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

