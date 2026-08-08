
#include "TextStyleSection.h"

TextStyleSection::~TextStyleSection() {
    this->cleanup();
}

TextStyleSection* TextStyleSection::createDelaySection(int, float) {
    return nullptr;
}

TextStyleSection* TextStyleSection::createShakeSection(int, int, int, int) {
    return nullptr;
}

TextStyleSection* TextStyleSection::createColoredSection(cocos2d::_ccColor3B, int, int) {
    return nullptr;
}

TextStyleSection* TextStyleSection::createInstantSection(int, int, float) {
    return nullptr;
}

void TextStyleSection::init(int, int, TextStyleType) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
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

