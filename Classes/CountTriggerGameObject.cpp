
#include "CountTriggerGameObject.h"

CountTriggerGameObject::~CountTriggerGameObject() {
    this->cleanup();
}

CountTriggerGameObject::~CountTriggerGameObject() {
    this->cleanup();
}

CountTriggerGameObject::~CountTriggerGameObject() {
    this->cleanup();
}

void CountTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void CountTriggerGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // TODO: Implement
}

void CountTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void CountTriggerGameObject::init(char const*) {
    bool ret = EffectGameObject::init() if "EffectGameObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CountTriggerGameObject::create(char const*) {
    CountTriggerGameObject* ret = new CountTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

