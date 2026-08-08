
#include "StatsObject.h"

StatsObject::~StatsObject() {
    this->cleanup();
}

void StatsObject::init(char const*, int) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void StatsObject::create(char const*, int) {
    StatsObject* ret = new StatsObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

