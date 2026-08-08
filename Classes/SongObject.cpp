
#include "SongObject.h"

SongObject::~SongObject() {
    this->cleanup();
}

SongObject::~SongObject() {
    this->cleanup();
}

SongObject::~SongObject() {
    this->cleanup();
}

void SongObject::init(int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
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

