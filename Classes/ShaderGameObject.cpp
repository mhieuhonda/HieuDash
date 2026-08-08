// ============================================================
// ShaderGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ShaderGameObject.h"

ShaderGameObject::~ShaderGameObject() {
    // 0x74a3f0
    this->cleanup();
}

ShaderGameObject::~ShaderGameObject() {
    // 0x74a3cc
    this->cleanup();
}

ShaderGameObject::~ShaderGameObject() {
    // 0x74a3cc
    this->cleanup();
}

void ShaderGameObject::customSetup() {
    // 0x75ec34
    // TODO: Implement
}

void ShaderGameObject::getSaveString(GJBaseGameLayer*) {
    // 0x77a090
    // Save to file/storage
    // TODO: Implement saving
}

void ShaderGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x75c0f8
    // TODO: Implement
}

void ShaderGameObject::init(char const*) {
    // 0x758230
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ShaderGameObject::create(char const*) {
    // 0x758234
    ShaderGameObject* ret = new ShaderGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

