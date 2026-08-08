
#include "SimpleObject.h"

SimpleObject::~SimpleObject() {
    this->cleanup();
}

SimpleObject::~SimpleObject() {
    this->cleanup();
}

SimpleObject::~SimpleObject() {
    this->cleanup();
}

void SimpleObject::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SimpleObject::create() {
    SimpleObject* ret = new SimpleObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

