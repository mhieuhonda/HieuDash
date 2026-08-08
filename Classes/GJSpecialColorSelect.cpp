
#include "GJSpecialColorSelect.h"

GJSpecialColorSelect::~GJSpecialColorSelect() {
    this->cleanup();
}

GJSpecialColorSelect::~GJSpecialColorSelect() {
    this->cleanup();
}

GJSpecialColorSelect::~GJSpecialColorSelect() {
    this->cleanup();
}

void GJSpecialColorSelect::onSelectColor(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJSpecialColorSelect::getButtonByTag(int) {
    // TODO: Implement
}

void GJSpecialColorSelect::keyBackClicked() {
    // TODO: Implement
}

void GJSpecialColorSelect::textForColorIdx(int) {
    // TODO: Implement
}

void GJSpecialColorSelect::highlightSelected(ButtonSprite*) {
    // TODO: Implement
}

void GJSpecialColorSelect::init(int, GJSpecialColorSelectDelegate*, ColorSelectType) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJSpecialColorSelect::create(int, GJSpecialColorSelectDelegate*, ColorSelectType) {
    GJSpecialColorSelect* ret = new GJSpecialColorSelect();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJSpecialColorSelect::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

