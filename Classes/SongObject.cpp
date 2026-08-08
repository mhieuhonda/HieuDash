
#include "SongObject.h"

SongObject::~SongObject() {
    this->cleanup();
}

void SongObject::init(int) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void SongObject::create(int) {
    SongObject* ret = new SongObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

