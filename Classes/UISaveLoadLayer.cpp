
#include "UISaveLoadLayer.h"

UISaveLoadLayer::~UISaveLoadLayer() {
    this->cleanup();
}

UISaveLoadLayer::~UISaveLoadLayer() {
    this->cleanup();
}

UISaveLoadLayer::~UISaveLoadLayer() {
    this->cleanup();
}

void UISaveLoadLayer::init(UIOptionsLayer*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UISaveLoadLayer::create(UIOptionsLayer*) {
    UISaveLoadLayer* ret = new UISaveLoadLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void UISaveLoadLayer::onLoad(cocos2d::CCObject*) {
    // Load from file/storage
    // TODO: Implement loading
}

void UISaveLoadLayer::onSave(cocos2d::CCObject*) {
    // Save to file/storage
    // TODO: Implement saving
}

