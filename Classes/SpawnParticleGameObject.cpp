
#include "SpawnParticleGameObject.h"

SpawnParticleGameObject::~SpawnParticleGameObject() {
    this->cleanup();
}

SpawnParticleGameObject::~SpawnParticleGameObject() {
    this->cleanup();
}

SpawnParticleGameObject::~SpawnParticleGameObject() {
    this->cleanup();
}

void SpawnParticleGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void SpawnParticleGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void SpawnParticleGameObject::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SpawnParticleGameObject::create() {
    SpawnParticleGameObject* ret = new SpawnParticleGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

