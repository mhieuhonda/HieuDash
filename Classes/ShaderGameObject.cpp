
#include "ShaderGameObject.h"

ShaderGameObject::~ShaderGameObject() {
    this->cleanup();
}

ShaderGameObject::~ShaderGameObject() {
    this->cleanup();
}

ShaderGameObject::~ShaderGameObject() {
    this->cleanup();
}

void ShaderGameObject::customSetup() {
    // TODO: Implement
}

void ShaderGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void ShaderGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void ShaderGameObject::init(char const*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ShaderGameObject::create(char const*) {
    ShaderGameObject* ret = new ShaderGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

