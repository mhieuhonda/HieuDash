
#include "ObjectControlGameObject.h"

ObjectControlGameObject::~ObjectControlGameObject() {
    this->cleanup();
}

ObjectControlGameObject::~ObjectControlGameObject() {
    this->cleanup();
}

ObjectControlGameObject::~ObjectControlGameObject() {
    this->cleanup();
}

void ObjectControlGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void ObjectControlGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void ObjectControlGameObject::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ObjectControlGameObject::create() {
    ObjectControlGameObject* ret = new ObjectControlGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

