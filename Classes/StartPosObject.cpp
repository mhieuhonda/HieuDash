
#include "StartPosObject.h"

StartPosObject::~StartPosObject() {
    this->cleanup();
}

StartPosObject::~StartPosObject() {
    this->cleanup();
}

StartPosObject::~StartPosObject() {
    this->cleanup();
}

void StartPosObject::setSettings(LevelSettingsObject*) {
    // TODO: Implement
}

void StartPosObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void StartPosObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void StartPosObject::loadSettingsFromString(std::string) {
    // Load from file/storage
    // TODO: Implement loading
}

void StartPosObject::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void StartPosObject::create() {
    StartPosObject* ret = new StartPosObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

