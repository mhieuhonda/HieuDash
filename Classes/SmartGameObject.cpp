
#include "SmartGameObject.h"

SmartGameObject::~SmartGameObject() {
    this->cleanup();
}

SmartGameObject::~SmartGameObject() {
    this->cleanup();
}

SmartGameObject::~SmartGameObject() {
    this->cleanup();
}

void SmartGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void SmartGameObject::updateSmartFrame() {
    // TODO: Implement
}

void SmartGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void SmartGameObject::init(char const*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SmartGameObject::create(char const*) {
    SmartGameObject* ret = new SmartGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

