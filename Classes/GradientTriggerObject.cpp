
#include "GradientTriggerObject.h"

GradientTriggerObject::~GradientTriggerObject() {
    this->cleanup();
}

GradientTriggerObject::~GradientTriggerObject() {
    this->cleanup();
}

GradientTriggerObject::~GradientTriggerObject() {
    this->cleanup();
}

void GradientTriggerObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void GradientTriggerObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void GradientTriggerObject::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GradientTriggerObject::create() {
    GradientTriggerObject* ret = new GradientTriggerObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

