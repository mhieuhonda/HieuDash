
#include "EditGameObjectPopup.h"

EditGameObjectPopup::~EditGameObjectPopup() {
    this->cleanup();
}

EditGameObjectPopup::~EditGameObjectPopup() {
    this->cleanup();
}

EditGameObjectPopup::~EditGameObjectPopup() {
    this->cleanup();
}

void EditGameObjectPopup::init(EffectGameObject*, cocos2d::CCArray*, bool) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void EditGameObjectPopup::create(EffectGameObject*, cocos2d::CCArray*, bool) {
    EditGameObjectPopup* ret = new EditGameObjectPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

