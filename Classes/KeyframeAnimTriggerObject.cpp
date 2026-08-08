
#include "KeyframeAnimTriggerObject.h"

KeyframeAnimTriggerObject::~KeyframeAnimTriggerObject() {
    this->cleanup();
}

KeyframeAnimTriggerObject::~KeyframeAnimTriggerObject() {
    this->cleanup();
}

KeyframeAnimTriggerObject::~KeyframeAnimTriggerObject() {
    this->cleanup();
}

void KeyframeAnimTriggerObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void KeyframeAnimTriggerObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void KeyframeAnimTriggerObject::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void KeyframeAnimTriggerObject::create() {
    KeyframeAnimTriggerObject* ret = new KeyframeAnimTriggerObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

