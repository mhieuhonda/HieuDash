
#include "LevelOptionsLayer2.h"

LevelOptionsLayer2::~LevelOptionsLayer2() {
    this->cleanup();
}

LevelOptionsLayer2::~LevelOptionsLayer2() {
    this->cleanup();
}

LevelOptionsLayer2::~LevelOptionsLayer2() {
    this->cleanup();
}

void LevelOptionsLayer2::setupOptions() {
    // TODO: Implement
}

void LevelOptionsLayer2::init(LevelSettingsObject*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void LevelOptionsLayer2::create(LevelSettingsObject*) {
    LevelOptionsLayer2* ret = new LevelOptionsLayer2();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

