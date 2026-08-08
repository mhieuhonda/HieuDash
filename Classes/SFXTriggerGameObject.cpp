
#include "SFXTriggerGameObject.h"

SFXTriggerGameObject::~SFXTriggerGameObject() {
    this->cleanup();
}

SFXTriggerGameObject::~SFXTriggerGameObject() {
    this->cleanup();
}

SFXTriggerGameObject::~SFXTriggerGameObject() {
    this->cleanup();
}

void SFXTriggerGameObject::getSFXRefID() {
    // TODO: Implement
}

void SFXTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void SFXTriggerGameObject::getUniqueSFXID() {
    // TODO: Implement
}

void SFXTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void SFXTriggerGameObject::init(char const*) {
    bool ret = EffectGameObject::init() if "EffectGameObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SFXTriggerGameObject::create(char const*) {
    SFXTriggerGameObject* ret = new SFXTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

