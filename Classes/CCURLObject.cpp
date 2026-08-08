
#include "CCURLObject.h"

CCURLObject::~CCURLObject() {
    this->cleanup();
}

void CCURLObject::init(std::string, std::string) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
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

