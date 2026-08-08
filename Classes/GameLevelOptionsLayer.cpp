
#include "GameLevelOptionsLayer.h"

GameLevelOptionsLayer::~GameLevelOptionsLayer() {
    this->cleanup();
}

GameLevelOptionsLayer::~GameLevelOptionsLayer() {
    this->cleanup();
}

GameLevelOptionsLayer::~GameLevelOptionsLayer() {
    this->cleanup();
}

void GameLevelOptionsLayer::setupOptions() {
    // TODO: Implement
}

void GameLevelOptionsLayer::init(GJGameLevel*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GameLevelOptionsLayer::create(GJGameLevel*) {
    GameLevelOptionsLayer* ret = new GameLevelOptionsLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GameLevelOptionsLayer::didToggle(int) {
    // TODO: Implement
}

