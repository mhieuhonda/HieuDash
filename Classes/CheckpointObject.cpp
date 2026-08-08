
#include "CheckpointObject.h"

CheckpointObject::~CheckpointObject() {
    this->cleanup();
}

CheckpointObject::~CheckpointObject() {
    this->cleanup();
}

CheckpointObject::~CheckpointObject() {
    this->cleanup();
}

void CheckpointObject::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CheckpointObject::create() {
    CheckpointObject* ret = new CheckpointObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CheckpointObject::getObject() {
    // TODO: Implement
}

void CheckpointObject::setObject(GameObject*) {
    // TODO: Implement
}

