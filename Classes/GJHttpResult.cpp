
#include "GJHttpResult.h"

GJHttpResult::~GJHttpResult() {
    this->cleanup();
}

GJHttpResult::~GJHttpResult() {
    this->cleanup();
}

GJHttpResult::~GJHttpResult() {
    this->cleanup();
}

void GJHttpResult::init(bool, std::string, std::string, GJHttpType) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJHttpResult::create(bool, std::string, std::string, GJHttpType) {
    GJHttpResult* ret = new GJHttpResult();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

