
#include "GJColorSetupLayer.h"

GJColorSetupLayer::~GJColorSetupLayer() {
    this->cleanup();
}

GJColorSetupLayer::~GJColorSetupLayer() {
    this->cleanup();
}

GJColorSetupLayer::~GJColorSetupLayer() {
    this->cleanup();
}

void GJColorSetupLayer::keyBackClicked() {
    // TODO: Implement
}

void GJColorSetupLayer::colorSelectClosed(cocos2d::CCNode*) {
    // TODO: Implement
}

void GJColorSetupLayer::updateSpriteColor(ColorChannelSprite*, cocos2d::CCLabelBMFont*, int) {
    // TODO: Implement
}

void GJColorSetupLayer::updateSpriteColors() {
    // TODO: Implement
}

void GJColorSetupLayer::init(LevelSettingsObject*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJColorSetupLayer::create(LevelSettingsObject*) {
    GJColorSetupLayer* ret = new GJColorSetupLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJColorSetupLayer::onPage(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJColorSetupLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJColorSetupLayer::onColor(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJColorSetupLayer::showPage(int) {
    // TODO: Implement
}

