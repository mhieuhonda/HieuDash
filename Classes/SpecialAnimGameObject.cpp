
#include "SpecialAnimGameObject.h"

SpecialAnimGameObject::~SpecialAnimGameObject() {
    this->cleanup();
}

SpecialAnimGameObject::~SpecialAnimGameObject() {
    this->cleanup();
}

SpecialAnimGameObject::~SpecialAnimGameObject() {
    this->cleanup();
}

void SpecialAnimGameObject::resetObject() {
    // TODO: Implement
}

void SpecialAnimGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void SpecialAnimGameObject::updateMainColor(cocos2d::_ccColor3B const&) {
    // TODO: Implement
}

void SpecialAnimGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void SpecialAnimGameObject::updateSecondaryColor(cocos2d::_ccColor3B const&) {
    // TODO: Implement
}

void SpecialAnimGameObject::updateSyncedAnimation(float, int) {
    // TODO: Implement
}

void SpecialAnimGameObject::init(char const*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SpecialAnimGameObject::create(char const*) {
    SpecialAnimGameObject* ret = new SpecialAnimGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

