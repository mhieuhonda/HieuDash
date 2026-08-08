// ============================================================
// SetupSmartTemplateLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupSmartTemplateLayer.h"

SetupSmartTemplateLayer::~SetupSmartTemplateLayer() {
    // 0x9dbca4
    this->cleanup();
}

SetupSmartTemplateLayer::~SetupSmartTemplateLayer() {
    // 0x9dbb58
    this->cleanup();
}

SetupSmartTemplateLayer::~SetupSmartTemplateLayer() {
    // 0x9dbb58
    this->cleanup();
}

void SetupSmartTemplateLayer::textChanged(CCTextInputNode*) {
    // 0x9dba68
    // TODO: Implement
}

void SetupSmartTemplateLayer::keyBackClicked() {
    // 0x9de938
    // TODO: Implement
}

void SetupSmartTemplateLayer::FLAlert_Clicked(FLAlertLayer*, bool) {
    // 0x9de8d4
    // TODO: Implement
}

void SetupSmartTemplateLayer::textInputClosed(CCTextInputNode*) {
    // 0x9dca24
    // TODO: Implement
}

void SetupSmartTemplateLayer::textInputOpened(CCTextInputNode*) {
    // 0x9dc7b0
    // TODO: Implement
}

void SetupSmartTemplateLayer::init(GJSmartTemplate*) {
    // 0x9ddcd4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupSmartTemplateLayer::create(GJSmartTemplate*) {
    // 0x9de6bc
    SetupSmartTemplateLayer* ret = new SetupSmartTemplateLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupSmartTemplateLayer::onBack(cocos2d::CCObject*) {
    // 0x9de8ac
    // TODO: Implement
}

void SetupSmartTemplateLayer::onClick(cocos2d::CCObject*) {
    // 0x9e0350
    // TODO: Implement
}

void SetupSmartTemplateLayer::onClose(cocos2d::CCObject*) {
    // 0x9de7e4
    // TODO: Implement
}

