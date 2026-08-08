
#include "CCNodeContainer.h"

CCNodeContainer::~CCNodeContainer() {
    this->cleanup();
}

CCNodeContainer::~CCNodeContainer() {
    this->cleanup();
}

CCNodeContainer::~CCNodeContainer() {
    this->cleanup();
}

void CCNodeContainer::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCNodeContainer::visit() {
    // TODO: Implement
}

void CCNodeContainer::create() {
    CCNodeContainer* ret = new CCNodeContainer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

