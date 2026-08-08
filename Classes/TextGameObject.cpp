// ============================================================
// TextGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "TextGameObject.h"

TextGameObject::~TextGameObject() {
    // 0x641f60
    this->cleanup();
}

TextGameObject::~TextGameObject() {
    // 0x641e98
    this->cleanup();
}

TextGameObject::~TextGameObject() {
    // 0x641e98
    this->cleanup();
}

void TextGameObject::getSaveString(GJBaseGameLayer*) {
    // 0x65abdc
    // Save to file/storage
    // TODO: Implement saving
}

void TextGameObject::getTextKerning() {
    // 0x64027c
    // TODO: Implement
}

void TextGameObject::updateTextObject(std::string, bool) {
    // 0x656210
    // TODO: Implement
}

void TextGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x65652c
    // TODO: Implement
}

void TextGameObject::updateTextKerning(int) {
    // 0x640ba4
    // TODO: Implement
}

void TextGameObject::init(cocos2d::CCTexture2D*) {
    // 0x653d98
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TextGameObject::create(cocos2d::CCTexture2D*) {
    // 0x653d9c
    TextGameObject* ret = new TextGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

