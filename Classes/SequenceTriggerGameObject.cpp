
#include "SequenceTriggerGameObject.h"

SequenceTriggerGameObject::~SequenceTriggerGameObject() {
    this->cleanup();
}

SequenceTriggerGameObject::~SequenceTriggerGameObject() {
    this->cleanup();
}

SequenceTriggerGameObject::~SequenceTriggerGameObject() {
    this->cleanup();
}

void SequenceTriggerGameObject::resetObject() {
    // TODO: Implement
}

void SequenceTriggerGameObject::deleteTarget(int) {
    // TODO: Implement
}

void SequenceTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void SequenceTriggerGameObject::reorderTarget(int, bool) {
    // TODO: Implement
}

void SequenceTriggerGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // TODO: Implement
}

void SequenceTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void SequenceTriggerGameObject::updateSequenceTotalCount() {
    // TODO: Implement
}

void SequenceTriggerGameObject::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SequenceTriggerGameObject::create() {
    SequenceTriggerGameObject* ret = new SequenceTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SequenceTriggerGameObject::addCount(int, int) {
    // TODO: Implement
}

void SequenceTriggerGameObject::addTarget(int, int) {
    // TODO: Implement
}

