
#include "CCURLObject.h"

CCURLObject::~CCURLObject() {
    this->cleanup();
}

CCURLObject::~CCURLObject() {
    this->cleanup();
}

CCURLObject::~CCURLObject() {
    this->cleanup();
}

void CCURLObject::init(std::string, std::string) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCURLObject::create(std::string, std::string) {
    CCURLObject* ret = new CCURLObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

