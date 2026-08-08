
#include "AdvancedFollowTriggerObject.h"

AdvancedFollowTriggerObject::~AdvancedFollowTriggerObject() {
    this->cleanup();
}

AdvancedFollowTriggerObject::~AdvancedFollowTriggerObject() {
    this->cleanup();
}

AdvancedFollowTriggerObject::~AdvancedFollowTriggerObject() {
    this->cleanup();
}

void AdvancedFollowTriggerObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void AdvancedFollowTriggerObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void AdvancedFollowTriggerObject::getAdvancedFollowID() {
    // TODO: Implement
}

void AdvancedFollowTriggerObject::init(char const*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void AdvancedFollowTriggerObject::create(char const*) {
    AdvancedFollowTriggerObject* ret = new AdvancedFollowTriggerObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

