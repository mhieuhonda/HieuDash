
#include "ConfigureHSVWidget.h"

ConfigureHSVWidget::~ConfigureHSVWidget() {
    this->cleanup();
}

ConfigureHSVWidget::~ConfigureHSVWidget() {
    this->cleanup();
}

ConfigureHSVWidget::~ConfigureHSVWidget() {
    this->cleanup();
}

void ConfigureHSVWidget::onResetHSV(cocos2d::CCObject*) {
    // TODO: Implement
}

void ConfigureHSVWidget::textChanged(CCTextInputNode*) {
    // TODO: Implement
}

void ConfigureHSVWidget::updateLabels() {
    // TODO: Implement
}

void ConfigureHSVWidget::sliderChanged(cocos2d::CCObject*) {
    // TODO: Implement
}

void ConfigureHSVWidget::updateSliders() {
    // TODO: Implement
}

void ConfigureHSVWidget::onToggleSConst(cocos2d::CCObject*) {
    // TODO: Implement
}

void ConfigureHSVWidget::onToggleVConst(cocos2d::CCObject*) {
    // TODO: Implement
}

void ConfigureHSVWidget::textInputClosed(CCTextInputNode*) {
    // TODO: Implement
}

void ConfigureHSVWidget::textInputOpened(CCTextInputNode*) {
    // TODO: Implement
}

void ConfigureHSVWidget::createTextInputNode(cocos2d::CCPoint, int) {
    // TODO: Implement
}

void ConfigureHSVWidget::init(cocos2d::_ccHSVValue, bool, bool) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ConfigureHSVWidget::create(cocos2d::_ccHSVValue, bool, bool) {
    ConfigureHSVWidget* ret = new ConfigureHSVWidget();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ConfigureHSVWidget::getHSV(GameObject*, cocos2d::CCArray*, int) {
    // TODO: Implement
}

void ConfigureHSVWidget::onClose() {
    // TODO: Implement
}

