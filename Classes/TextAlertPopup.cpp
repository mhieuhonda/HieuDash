// ============================================================
// TextAlertPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "TextAlertPopup.h"

TextAlertPopup::~TextAlertPopup() {
    // 0x8c3200
    this->cleanup();
}

TextAlertPopup::~TextAlertPopup() {
    // 0x8c31ec
    this->cleanup();
}

TextAlertPopup::~TextAlertPopup() {
    // 0x8c31ec
    this->cleanup();
}

void TextAlertPopup::setLabelColor(cocos2d::_ccColor3B) {
    // 0x8d492c
    // TODO: Set m_labelColor
}

void TextAlertPopup::setAlertPosition(cocos2d::CCPoint, cocos2d::CCPoint) {
    // 0x8d4958
    // TODO: Set m_alertPosition
}

void TextAlertPopup::init(std::string, float, float, int, std::string) {
    // 0x8d43e4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TextAlertPopup::create(std::string, float, float, int, std::string) {
    // 0x8d4704
    TextAlertPopup* ret = new TextAlertPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

