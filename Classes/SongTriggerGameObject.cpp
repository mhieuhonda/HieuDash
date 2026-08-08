
#include "SongTriggerGameObject.h"

SongTriggerGameObject::~SongTriggerGameObject() {
    this->cleanup();
}

SongTriggerGameObject::~SongTriggerGameObject() {
    this->cleanup();
}

SongTriggerGameObject::~SongTriggerGameObject() {
    this->cleanup();
}

void SongTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void SongTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void SongTriggerGameObject::init(char const*) {
    bool ret = EffectGameObject::init() if "EffectGameObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SongTriggerGameObject::create(char const*) {
    SongTriggerGameObject* ret = new SongTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

