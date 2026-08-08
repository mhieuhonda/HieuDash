
#include "KeyframeAnimTriggerObject.h"

KeyframeAnimTriggerObject::~KeyframeAnimTriggerObject() {
    this->cleanup();
}

std::string KeyframeAnimTriggerObject::getSaveString(GJBaseGameLayer*) {
    return "";
}

void KeyframeAnimTriggerObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // Setup operation - stub
}

bool KeyframeAnimTriggerObject::init() {
    bool ret = cocos2d::CCNode::init();
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void KeyframeAnimTriggerObject::create() {
    KeyframeAnimTriggerObject* ret = new KeyframeAnimTriggerObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

