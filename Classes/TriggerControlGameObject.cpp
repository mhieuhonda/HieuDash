
#include "TriggerControlGameObject.h"

TriggerControlGameObject::~TriggerControlGameObject() {
    this->cleanup();
}

TriggerControlGameObject::~TriggerControlGameObject() {
    this->cleanup();
}

TriggerControlGameObject::~TriggerControlGameObject() {
    this->cleanup();
}

void TriggerControlGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void TriggerControlGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // TODO: Implement
}

void TriggerControlGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void TriggerControlGameObject::updateTriggerControlFrame() {
    // TODO: Implement
}

void TriggerControlGameObject::init(char const*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TriggerControlGameObject::create(char const*) {
    TriggerControlGameObject* ret = new TriggerControlGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

