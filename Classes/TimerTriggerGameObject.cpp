
#include "TimerTriggerGameObject.h"

TimerTriggerGameObject::~TimerTriggerGameObject() {
    this->cleanup();
}

TimerTriggerGameObject::~TimerTriggerGameObject() {
    this->cleanup();
}

TimerTriggerGameObject::~TimerTriggerGameObject() {
    this->cleanup();
}

void TimerTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void TimerTriggerGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // TODO: Implement
}

void TimerTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void TimerTriggerGameObject::init(char const*) {
    bool ret = EffectGameObject::init() if "EffectGameObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TimerTriggerGameObject::create(char const*) {
    TimerTriggerGameObject* ret = new TimerTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

