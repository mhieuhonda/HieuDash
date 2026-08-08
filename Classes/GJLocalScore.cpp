
#include "GJLocalScore.h"

GJLocalScore::~GJLocalScore() {
    this->cleanup();
}

GJLocalScore::~GJLocalScore() {
    this->cleanup();
}

GJLocalScore::~GJLocalScore() {
    this->cleanup();
}

void GJLocalScore::init(int, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJLocalScore::create(int, int) {
    GJLocalScore* ret = new GJLocalScore();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

