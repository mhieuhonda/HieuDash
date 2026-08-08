
#include "EventLinkTrigger.h"

EventLinkTrigger::~EventLinkTrigger() {
    this->cleanup();
}

std::string EventLinkTrigger::getSaveString(GJBaseGameLayer*) {
    return "";
}

void EventLinkTrigger::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // Stub - not yet implemented
}

void EventLinkTrigger::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // Setup operation - stub
}

bool EventLinkTrigger::init() {
    bool ret = cocos2d::CCNode::init();
    if (!ret) return false;
    // Initialize members and UI - stub
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

