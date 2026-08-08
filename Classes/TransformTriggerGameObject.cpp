
#include "TransformTriggerGameObject.h"

TransformTriggerGameObject::~TransformTriggerGameObject() {
    this->cleanup();
}

TransformTriggerGameObject::~TransformTriggerGameObject() {
    this->cleanup();
}

TransformTriggerGameObject::~TransformTriggerGameObject() {
    this->cleanup();
}

void TransformTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void TransformTriggerGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // TODO: Implement
}

void TransformTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void TransformTriggerGameObject::init(char const*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TransformTriggerGameObject::create(char const*) {
    TransformTriggerGameObject* ret = new TransformTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

