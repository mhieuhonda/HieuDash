
#include "TextStyleSection.h"

TextStyleSection::~TextStyleSection() {
    this->cleanup();
}

TextStyleSection::~TextStyleSection() {
    this->cleanup();
}

TextStyleSection::~TextStyleSection() {
    this->cleanup();
}

void TextStyleSection::createDelaySection(int, float) {
    // TODO: Implement
}

void TextStyleSection::createShakeSection(int, int, int, int) {
    // TODO: Implement
}

void TextStyleSection::createColoredSection(cocos2d::_ccColor3B, int, int) {
    // TODO: Implement
}

void TextStyleSection::createInstantSection(int, int, float) {
    // TODO: Implement
}

void TextStyleSection::init(int, int, TextStyleType) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TextStyleSection::create(int, int, TextStyleType) {
    TextStyleSection* ret = new TextStyleSection();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

