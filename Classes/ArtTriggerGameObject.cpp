
#include "ArtTriggerGameObject.h"

ArtTriggerGameObject::~ArtTriggerGameObject() {
    this->cleanup();
}

ArtTriggerGameObject::~ArtTriggerGameObject() {
    this->cleanup();
}

ArtTriggerGameObject::~ArtTriggerGameObject() {
    this->cleanup();
}

void ArtTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void ArtTriggerGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // TODO: Implement
}

void ArtTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void ArtTriggerGameObject::init(char const*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ArtTriggerGameObject::create(char const*) {
    ArtTriggerGameObject* ret = new ArtTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

