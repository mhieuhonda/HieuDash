
#include "SetItemIDLayer.h"

SetItemIDLayer::~SetItemIDLayer() {
    this->cleanup();
}

SetItemIDLayer::~SetItemIDLayer() {
    this->cleanup();
}

SetItemIDLayer::~SetItemIDLayer() {
    this->cleanup();
}

void SetItemIDLayer::valueDidChange(int, float) {
    // TODO: Implement
}

void SetItemIDLayer::updateEditorLabel() {
    // TODO: Implement
}

void SetItemIDLayer::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetItemIDLayer::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetItemIDLayer::create(EffectGameObject*, cocos2d::CCArray*) {
    SetItemIDLayer* ret = new SetItemIDLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetItemIDLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

