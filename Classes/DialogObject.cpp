
#include "DialogObject.h"

DialogObject::~DialogObject() {
    this->cleanup();
}

DialogObject::~DialogObject() {
    this->cleanup();
}

DialogObject::~DialogObject() {
    this->cleanup();
}

void DialogObject::init(std::string, std::string, int, float, bool, cocos2d::_ccColor3B) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void DialogObject::create(std::string, std::string, int, float, bool, cocos2d::_ccColor3B) {
    DialogObject* ret = new DialogObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

