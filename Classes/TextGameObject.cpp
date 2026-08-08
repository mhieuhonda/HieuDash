
#include "TextGameObject.h"

TextGameObject::~TextGameObject() {
    this->cleanup();
}

std::string TextGameObject::getSaveString(GJBaseGameLayer*) {
    return "";
}

void TextGameObject::getTextKerning() {
    // Stub - not yet implemented
}

void TextGameObject::updateTextObject(std::string, bool) {
    // Update/refresh operation - stub
}

void TextGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // Setup operation - stub
}

void TextGameObject::updateTextKerning(int) {
    // Update/refresh operation - stub
}

void TextGameObject::init(cocos2d::CCTexture2D*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
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

