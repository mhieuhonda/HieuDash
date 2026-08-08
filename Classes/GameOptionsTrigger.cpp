
#include "GameOptionsTrigger.h"

GameOptionsTrigger::~GameOptionsTrigger() {
    this->cleanup();
}

GameOptionsTrigger::~GameOptionsTrigger() {
    this->cleanup();
}

GameOptionsTrigger::~GameOptionsTrigger() {
    this->cleanup();
}

void GameOptionsTrigger::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void GameOptionsTrigger::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void GameOptionsTrigger::init(char const*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GameOptionsTrigger::create(char const*) {
    GameOptionsTrigger* ret = new GameOptionsTrigger();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

