
#include "CheckpointGameObject.h"

CheckpointGameObject::~CheckpointGameObject() {
    this->cleanup();
}

CheckpointGameObject::~CheckpointGameObject() {
    this->cleanup();
}

CheckpointGameObject::~CheckpointGameObject() {
    this->cleanup();
}

void CheckpointGameObject::resetObject() {
    // TODO: Implement
}

void CheckpointGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void CheckpointGameObject::restoreObject() {
    // TODO: Implement
}

void CheckpointGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // TODO: Implement
}

void CheckpointGameObject::resetCheckpoint() {
    // TODO: Implement
}

void CheckpointGameObject::triggerActivated(float) {
    // TODO: Implement
}

void CheckpointGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void CheckpointGameObject::setupCustomSprites(std::string) {
    // TODO: Implement
}

void CheckpointGameObject::updateSyncedAnimation(float, int) {
    // TODO: Implement
}

void CheckpointGameObject::updateCheckpointSpriteVisibility() {
    // TODO: Implement
}

void CheckpointGameObject::init() {
    bool ret = GameObject::init() if "GameObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CheckpointGameObject::create() {
    CheckpointGameObject* ret = new CheckpointGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

