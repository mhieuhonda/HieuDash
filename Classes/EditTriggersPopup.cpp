
#include "EditTriggersPopup.h"

EditTriggersPopup::~EditTriggersPopup() {
    this->cleanup();
}

EditTriggersPopup::~EditTriggersPopup() {
    this->cleanup();
}

EditTriggersPopup::~EditTriggersPopup() {
    this->cleanup();
}

void EditTriggersPopup::determineStartValues() {
    // TODO: Implement
}

void EditTriggersPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = cocos2d::CCLayer::init();
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void EditTriggersPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    EditTriggersPopup* ret = new EditTriggersPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void EditTriggersPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

