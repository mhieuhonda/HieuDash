// ============================================================
// DialogObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "DialogObject.h"

DialogObject::~DialogObject() {
    // 0x91620c
    this->cleanup();
}

DialogObject::~DialogObject() {
    // 0x9160f4
    this->cleanup();
}

DialogObject::~DialogObject() {
    // 0x9160f4
    this->cleanup();
}

void DialogObject::init(std::string, std::string, int, float, bool, cocos2d::_ccColor3B) {
    // 0x91632c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void DialogObject::create(std::string, std::string, int, float, bool, cocos2d::_ccColor3B) {
    // 0x91639c
    DialogObject* ret = new DialogObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

