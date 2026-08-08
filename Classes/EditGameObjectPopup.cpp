
#include "EditGameObjectPopup.h"

EditGameObjectPopup::~EditGameObjectPopup() {
    this->cleanup();
}

void EditGameObjectPopup::init(EffectGameObject*, cocos2d::CCArray*, bool) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
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

