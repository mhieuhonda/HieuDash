
#include "StatsLayer.h"

StatsLayer::~StatsLayer() {
    this->cleanup();
}

void StatsLayer::customSetup() {
    // Setup operation - stub
}

void StatsLayer::create() {
    StatsLayer* ret = new StatsLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

