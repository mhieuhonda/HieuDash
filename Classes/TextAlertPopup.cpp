
#include "TextAlertPopup.h"

TextAlertPopup::~TextAlertPopup() {
    this->cleanup();
}

TextAlertPopup::~TextAlertPopup() {
    this->cleanup();
}

TextAlertPopup::~TextAlertPopup() {
    this->cleanup();
}

void TextAlertPopup::setLabelColor(cocos2d::_ccColor3B) {
    // TODO: Set m_labelColor
}

void TextAlertPopup::setAlertPosition(cocos2d::CCPoint, cocos2d::CCPoint) {
    // TODO: Set m_alertPosition
}

void TextAlertPopup::init(std::string, float, float, int, std::string) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TextAlertPopup::create(std::string, float, float, int, std::string) {
    TextAlertPopup* ret = new TextAlertPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

