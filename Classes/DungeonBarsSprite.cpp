
#include "DungeonBarsSprite.h"

DungeonBarsSprite::~DungeonBarsSprite() {
    this->cleanup();
}

DungeonBarsSprite::~DungeonBarsSprite() {
    this->cleanup();
}

DungeonBarsSprite::~DungeonBarsSprite() {
    this->cleanup();
}

void DungeonBarsSprite::animateOutBars() {
    // TODO: Implement
}

void DungeonBarsSprite::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void DungeonBarsSprite::visit() {
    // TODO: Implement
}

void DungeonBarsSprite::create() {
    DungeonBarsSprite* ret = new DungeonBarsSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

