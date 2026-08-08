
#include "ForceBlockGameObject.h"

ForceBlockGameObject::~ForceBlockGameObject() {
    this->cleanup();
}

ForceBlockGameObject::~ForceBlockGameObject() {
    this->cleanup();
}

ForceBlockGameObject::~ForceBlockGameObject() {
    this->cleanup();
}

void ForceBlockGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void ForceBlockGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void ForceBlockGameObject::calculateForceToTarget(GameObject*) {
    // TODO: Implement
}

void ForceBlockGameObject::init(char const*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ForceBlockGameObject::create(char const*) {
    ForceBlockGameObject* ret = new ForceBlockGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

