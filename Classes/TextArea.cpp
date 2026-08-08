// ============================================================
// TextArea.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "TextArea.h"

TextArea::~TextArea() {
    // 0x591e04
    this->cleanup();
}

TextArea::~TextArea() {
    // 0x591d30
    this->cleanup();
}

TextArea::~TextArea() {
    // 0x591d30
    this->cleanup();
}

void TextArea::finishFade() {
    // 0x591b58
    // TODO: Implement
}

void TextArea::setOpacity(unsigned char) {
    // 0x592cfc
    // TODO: Implement
}

void TextArea::colorAllLabels(cocos2d::_ccColor3B) {
    // 0x5928e0
    // TODO: Implement
}

void TextArea::fadeInCharacters(float, float, bool, TextFadeInStyle) {
    // 0x592948
    // TODO: Implement
}

void TextArea::fadeOutAndRemove() {
    // 0x5927a0
    // TODO: Implement
}

void TextArea::setIgnoreColorCode(bool) {
    // 0x591e28
    // TODO: Set m_ignoreColorCode
}

void TextArea::colorAllCharactersTo(cocos2d::_ccColor3B) {
    // 0x592808
    // TODO: Implement
}

void TextArea::stopAllCharacterActions() {
    // 0x591e40
    // TODO: Implement
}

void TextArea::draw() {
    // 0x591b8c
    // Render/draw logic
    // TODO: Implement rendering
}

void TextArea::init(std::string, char const*, float, float, cocos2d::CCPoint, float, bool) {
    // 0x59229c
    bool ret = cocos2d::CCNode::init() if "cocos2d::CCNode" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TextArea::create(std::string, char const*, float, float, cocos2d::CCPoint, float, bool) {
    // 0x592410
    TextArea* ret = new TextArea();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void TextArea::fadeIn(float, bool) {
    // 0x59269c
    // TODO: Implement
}

void TextArea::update(float) {
    // 0x591b90
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void TextArea::fadeOut(float) {
    // 0x592740
    // TODO: Implement
}

void TextArea::hideAll() {
    // 0x591f1c
    // TODO: Implement
}

void TextArea::showAll() {
    // 0x592660
    // TODO: Implement
}

void TextArea::setString(std::string) {
    // 0x591f50
    // TODO: Set m_string
}

