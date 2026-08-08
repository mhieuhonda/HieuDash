
#include "SFXInfoObject.h"

SFXInfoObject::~SFXInfoObject() {
    this->cleanup();
}

SFXInfoObject::~SFXInfoObject() {
    this->cleanup();
}

SFXInfoObject::~SFXInfoObject() {
    this->cleanup();
}

void SFXInfoObject::getLowerCaseName() {
    // TODO: Implement
}

void SFXInfoObject::init(int, std::string, int, int, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
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

