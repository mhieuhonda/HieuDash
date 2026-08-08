
#include "GJLocalScore.h"

GJLocalScore::~GJLocalScore() {
    this->cleanup();
}

void GJLocalScore::init(int, int) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
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

