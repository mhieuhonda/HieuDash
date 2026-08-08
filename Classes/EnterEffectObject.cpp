// ============================================================
// EnterEffectObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "EnterEffectObject.h"

EnterEffectObject::~EnterEffectObject() {
    // 0x749a70
    this->cleanup();
}

EnterEffectObject::~EnterEffectObject() {
    // 0x749a4c
    this->cleanup();
}

EnterEffectObject::~EnterEffectObject() {
    // 0x749a4c
    this->cleanup();
}

void EnterEffectObject::customSetup() {
    // 0x75ebf4
    // TODO: Implement
}

void EnterEffectObject::getSaveString(GJBaseGameLayer*) {
    // 0x777fc0
    // Save to file/storage
    // TODO: Implement saving
}

void EnterEffectObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x74f7b8
    // TODO: Implement
}

void EnterEffectObject::resetEnterAnimValues() {
    // 0x753a80
    // TODO: Implement
}

void EnterEffectObject::init(char const*) {
    // 0x7577fc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void EnterEffectObject::create(char const*) {
    // 0x757830
    EnterEffectObject* ret = new EnterEffectObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

