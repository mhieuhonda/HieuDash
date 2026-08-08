
#include "CameraTriggerGameObject.h"

CameraTriggerGameObject::~CameraTriggerGameObject() {
    this->cleanup();
}

CameraTriggerGameObject::~CameraTriggerGameObject() {
    this->cleanup();
}

CameraTriggerGameObject::~CameraTriggerGameObject() {
    this->cleanup();
}

void CameraTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void CameraTriggerGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // TODO: Implement
}

void CameraTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void CameraTriggerGameObject::init(char const*) {
    bool ret = EffectGameObject::init() if "EffectGameObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CameraTriggerGameObject::create(char const*) {
    CameraTriggerGameObject* ret = new CameraTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

