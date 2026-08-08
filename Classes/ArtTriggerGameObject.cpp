
#include "ArtTriggerGameObject.h"

ArtTriggerGameObject::~ArtTriggerGameObject() {
    this->cleanup();
}

std::string ArtTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    return "";
}

void ArtTriggerGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // Stub - not yet implemented
}

void ArtTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // Setup operation - stub
}

void ArtTriggerGameObject::init(char const*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
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

