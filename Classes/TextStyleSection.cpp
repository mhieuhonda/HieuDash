// ============================================================
// TextStyleSection.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "TextStyleSection.h"

TextStyleSection::~TextStyleSection() {
    // 0x589844
    this->cleanup();
}

TextStyleSection::~TextStyleSection() {
    // 0x589830
    this->cleanup();
}

TextStyleSection::~TextStyleSection() {
    // 0x589830
    this->cleanup();
}

void TextStyleSection::createDelaySection(int, float) {
    // 0x58a188
    // TODO: Implement
}

void TextStyleSection::createShakeSection(int, int, int, int) {
    // 0x58a154
    // TODO: Implement
}

void TextStyleSection::createColoredSection(cocos2d::_ccColor3B, int, int) {
    // 0x58a0f4
    // TODO: Implement
}

void TextStyleSection::createInstantSection(int, int, float) {
    // 0x58a130
    // TODO: Implement
}

void TextStyleSection::init(int, int, TextStyleType) {
    // 0x58a020
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TextStyleSection::create(int, int, TextStyleType) {
    // 0x58a038
    TextStyleSection* ret = new TextStyleSection();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

