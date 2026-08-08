// ============================================================
// AdvancedFollowEditObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "AdvancedFollowEditObject.h"

AdvancedFollowEditObject::~AdvancedFollowEditObject() {
    // 0x74a388
    this->cleanup();
}

AdvancedFollowEditObject::~AdvancedFollowEditObject() {
    // 0x74a364
    this->cleanup();
}

AdvancedFollowEditObject::~AdvancedFollowEditObject() {
    // 0x74a364
    this->cleanup();
}

void AdvancedFollowEditObject::getSaveString(GJBaseGameLayer*) {
    // 0x77d830
    // Save to file/storage
    // TODO: Implement saving
}

void AdvancedFollowEditObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x75d4d0
    // TODO: Implement
}

void AdvancedFollowEditObject::init(char const*) {
    // 0x758a90
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void AdvancedFollowEditObject::create(char const*) {
    // 0x758a94
    AdvancedFollowEditObject* ret = new AdvancedFollowEditObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

