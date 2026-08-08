
#include "KeyframeGameObject.h"

KeyframeGameObject::~KeyframeGameObject() {
    this->cleanup();
}

KeyframeGameObject::~KeyframeGameObject() {
    this->cleanup();
}

KeyframeGameObject::~KeyframeGameObject() {
    this->cleanup();
}

void KeyframeGameObject::setOpacity(unsigned char) {
    // TODO: Implement
}

void KeyframeGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void KeyframeGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void KeyframeGameObject::updateShadowObjects(GJBaseGameLayer*, EditorUI*) {
    // TODO: Implement
}

void KeyframeGameObject::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void KeyframeGameObject::create() {
    KeyframeGameObject* ret = new KeyframeGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

