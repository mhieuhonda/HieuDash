
#include "EndTriggerGameObject.h"

EndTriggerGameObject::~EndTriggerGameObject() {
    this->cleanup();
}

EndTriggerGameObject::~EndTriggerGameObject() {
    this->cleanup();
}

EndTriggerGameObject::~EndTriggerGameObject() {
    this->cleanup();
}

void EndTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void EndTriggerGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // TODO: Implement
}

void EndTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void EndTriggerGameObject::init() {
    bool ret = EffectGameObject::init() if "EffectGameObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void EndTriggerGameObject::create() {
    EndTriggerGameObject* ret = new EndTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

