
#include "AdvancedFollowEditObject.h"

AdvancedFollowEditObject::~AdvancedFollowEditObject() {
    this->cleanup();
}

AdvancedFollowEditObject::~AdvancedFollowEditObject() {
    this->cleanup();
}

AdvancedFollowEditObject::~AdvancedFollowEditObject() {
    this->cleanup();
}

void AdvancedFollowEditObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void AdvancedFollowEditObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void AdvancedFollowEditObject::init(char const*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void AdvancedFollowEditObject::create(char const*) {
    AdvancedFollowEditObject* ret = new AdvancedFollowEditObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

