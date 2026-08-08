// ============================================================
// ObjectControlGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ObjectControlGameObject.h"

ObjectControlGameObject::~ObjectControlGameObject() {
    // 0x749d08
    this->cleanup();
}

ObjectControlGameObject::~ObjectControlGameObject() {
    // 0x749ce4
    this->cleanup();
}

ObjectControlGameObject::~ObjectControlGameObject() {
    // 0x749ce4
    this->cleanup();
}

void ObjectControlGameObject::getSaveString(GJBaseGameLayer*) {
    // 0x7887fc
    // Save to file/storage
    // TODO: Implement saving
}

void ObjectControlGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x75c070
    // TODO: Implement
}

void ObjectControlGameObject::init() {
    // 0x75b600
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ObjectControlGameObject::create() {
    // 0x76cc20
    ObjectControlGameObject* ret = new ObjectControlGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

