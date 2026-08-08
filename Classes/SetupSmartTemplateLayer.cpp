
#include "SetupSmartTemplateLayer.h"

SetupSmartTemplateLayer::~SetupSmartTemplateLayer() {
    this->cleanup();
}

SetupSmartTemplateLayer::~SetupSmartTemplateLayer() {
    this->cleanup();
}

SetupSmartTemplateLayer::~SetupSmartTemplateLayer() {
    this->cleanup();
}

void SetupSmartTemplateLayer::textChanged(CCTextInputNode*) {
    // TODO: Implement
}

void SetupSmartTemplateLayer::keyBackClicked() {
    // TODO: Implement
}

void SetupSmartTemplateLayer::FLAlert_Clicked(FLAlertLayer*, bool) {
    // TODO: Implement
}

void SetupSmartTemplateLayer::textInputClosed(CCTextInputNode*) {
    // TODO: Implement
}

void SetupSmartTemplateLayer::textInputOpened(CCTextInputNode*) {
    // TODO: Implement
}

void SetupSmartTemplateLayer::init(GJSmartTemplate*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupSmartTemplateLayer::create(GJSmartTemplate*) {
    SetupSmartTemplateLayer* ret = new SetupSmartTemplateLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupSmartTemplateLayer::onBack(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupSmartTemplateLayer::onClick(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupSmartTemplateLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

