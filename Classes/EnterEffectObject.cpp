
#include "EnterEffectObject.h"

EnterEffectObject::~EnterEffectObject() {
    this->cleanup();
}

EnterEffectObject::~EnterEffectObject() {
    this->cleanup();
}

EnterEffectObject::~EnterEffectObject() {
    this->cleanup();
}

void EnterEffectObject::customSetup() {
    // TODO: Implement
}

void EnterEffectObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void EnterEffectObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void EnterEffectObject::resetEnterAnimValues() {
    // TODO: Implement
}

void EnterEffectObject::init(char const*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void EnterEffectObject::create(char const*) {
    EnterEffectObject* ret = new EnterEffectObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

