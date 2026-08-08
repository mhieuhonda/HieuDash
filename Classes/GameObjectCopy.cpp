
#include "GameObjectCopy.h"

GameObjectCopy::~GameObjectCopy() {
    this->cleanup();
}

GameObjectCopy::~GameObjectCopy() {
    this->cleanup();
}

GameObjectCopy::~GameObjectCopy() {
    this->cleanup();
}

void GameObjectCopy::resetObject() {
    // TODO: Implement
}

void GameObjectCopy::init(GameObject*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GameObjectCopy::create(GameObject*) {
    GameObjectCopy* ret = new GameObjectCopy();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

