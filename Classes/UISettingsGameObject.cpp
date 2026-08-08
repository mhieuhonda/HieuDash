
#include "UISettingsGameObject.h"

UISettingsGameObject::~UISettingsGameObject() {
    this->cleanup();
}

UISettingsGameObject::~UISettingsGameObject() {
    this->cleanup();
}

UISettingsGameObject::~UISettingsGameObject() {
    this->cleanup();
}

void UISettingsGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void UISettingsGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void UISettingsGameObject::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UISettingsGameObject::create() {
    UISettingsGameObject* ret = new UISettingsGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

