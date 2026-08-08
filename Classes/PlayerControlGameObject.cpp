
#include "PlayerControlGameObject.h"

PlayerControlGameObject::~PlayerControlGameObject() {
    this->cleanup();
}

PlayerControlGameObject::~PlayerControlGameObject() {
    this->cleanup();
}

PlayerControlGameObject::~PlayerControlGameObject() {
    this->cleanup();
}

void PlayerControlGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void PlayerControlGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void PlayerControlGameObject::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void PlayerControlGameObject::create() {
    PlayerControlGameObject* ret = new PlayerControlGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

