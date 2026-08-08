
#include "SelectFontLayer.h"

SelectFontLayer::~SelectFontLayer() {
    this->cleanup();
}

SelectFontLayer::~SelectFontLayer() {
    this->cleanup();
}

SelectFontLayer::~SelectFontLayer() {
    this->cleanup();
}

void SelectFontLayer::onChangeFont(cocos2d::CCObject*) {
    // TODO: Implement
}

void SelectFontLayer::keyBackClicked() {
    // TODO: Implement
}

void SelectFontLayer::updateFontLabel() {
    // TODO: Implement
}

void SelectFontLayer::init(LevelEditorLayer*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SelectFontLayer::create(LevelEditorLayer*) {
    SelectFontLayer* ret = new SelectFontLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SelectFontLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

