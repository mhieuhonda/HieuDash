
#include "SpawnTriggerGameObject.h"

SpawnTriggerGameObject::~SpawnTriggerGameObject() {
    this->cleanup();
}

SpawnTriggerGameObject::~SpawnTriggerGameObject() {
    this->cleanup();
}

SpawnTriggerGameObject::~SpawnTriggerGameObject() {
    this->cleanup();
}

void SpawnTriggerGameObject::changeRemap(int, int, bool) {
    // TODO: Implement
}

void SpawnTriggerGameObject::removeRemap(int, int) {
    // TODO: Implement
}

void SpawnTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void SpawnTriggerGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // TODO: Implement
}

void SpawnTriggerGameObject::updateRemapKeys(std::vector<int> const&) {
    // TODO: Implement
}

void SpawnTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void SpawnTriggerGameObject::getRemapWithSource(int) {
    // TODO: Implement
}

void SpawnTriggerGameObject::getRemapWithTarget(int) {
    // TODO: Implement
}

void SpawnTriggerGameObject::init() {
    bool ret = EffectGameObject::init() if "EffectGameObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SpawnTriggerGameObject::create() {
    SpawnTriggerGameObject* ret = new SpawnTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SpawnTriggerGameObject::addRemap(int, int) {
    // TODO: Implement
}

