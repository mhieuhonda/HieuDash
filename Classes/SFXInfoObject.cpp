
#include "SFXInfoObject.h"

SFXInfoObject::~SFXInfoObject() {
    this->cleanup();
}

std::string SFXInfoObject::getLowerCaseName() {
    return "";
}

void SFXInfoObject::init(int, std::string, int, int, int) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void SFXInfoObject::create(int, std::string, int, int, int) {
    SFXInfoObject* ret = new SFXInfoObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

