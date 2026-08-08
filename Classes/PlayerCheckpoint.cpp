
#include "PlayerCheckpoint.h"

PlayerCheckpoint::~PlayerCheckpoint() {
    this->cleanup();
}

PlayerCheckpoint::~PlayerCheckpoint() {
    this->cleanup();
}

PlayerCheckpoint::~PlayerCheckpoint() {
    this->cleanup();
}

void PlayerCheckpoint::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void PlayerCheckpoint::create() {
    PlayerCheckpoint* ret = new PlayerCheckpoint();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

