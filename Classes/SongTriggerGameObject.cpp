
#include "SongTriggerGameObject.h"

SongTriggerGameObject::~SongTriggerGameObject() {
    this->cleanup();
}

std::string SongTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    return "";
}

void SongTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // Setup operation - stub
}

bool SongTriggerGameObject::init(char const*) {
    bool ret = EffectGameObject::init() if "EffectGameObject" else true;
    if (!ret) return false;
    // Initialize members and UI - stub
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

