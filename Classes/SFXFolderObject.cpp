
#include "SFXFolderObject.h"

SFXFolderObject::~SFXFolderObject() {
    this->cleanup();
}

SFXFolderObject::~SFXFolderObject() {
    this->cleanup();
}

SFXFolderObject::~SFXFolderObject() {
    this->cleanup();
}

void SFXFolderObject::init(int, std::string, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SFXFolderObject::create(int, std::string, int) {
    SFXFolderObject* ret = new SFXFolderObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

