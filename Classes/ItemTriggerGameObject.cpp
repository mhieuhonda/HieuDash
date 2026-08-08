
#include "ItemTriggerGameObject.h"

ItemTriggerGameObject::~ItemTriggerGameObject() {
    this->cleanup();
}

ItemTriggerGameObject::~ItemTriggerGameObject() {
    this->cleanup();
}

ItemTriggerGameObject::~ItemTriggerGameObject() {
    this->cleanup();
}

void ItemTriggerGameObject::customSetup() {
    // TODO: Implement
}

void ItemTriggerGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void ItemTriggerGameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // TODO: Implement
}

void ItemTriggerGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void ItemTriggerGameObject::init(char const*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ItemTriggerGameObject::create(char const*) {
    ItemTriggerGameObject* ret = new ItemTriggerGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

