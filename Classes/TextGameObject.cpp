
#include "TextGameObject.h"

TextGameObject::~TextGameObject() {
    this->cleanup();
}

TextGameObject::~TextGameObject() {
    this->cleanup();
}

TextGameObject::~TextGameObject() {
    this->cleanup();
}

void TextGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void TextGameObject::getTextKerning() {
    // TODO: Implement
}

void TextGameObject::updateTextObject(std::string, bool) {
    // TODO: Implement
}

void TextGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void TextGameObject::updateTextKerning(int) {
    // TODO: Implement
}

void TextGameObject::init(cocos2d::CCTexture2D*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TextGameObject::create(cocos2d::CCTexture2D*) {
    TextGameObject* ret = new TextGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

