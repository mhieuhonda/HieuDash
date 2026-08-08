
#include "SongsLayer.h"

SongsLayer::~SongsLayer() {
    this->cleanup();
}

SongsLayer::~SongsLayer() {
    this->cleanup();
}

SongsLayer::~SongsLayer() {
    this->cleanup();
}

void SongsLayer::customSetup() {
    // TODO: Implement
}

void SongsLayer::create() {
    SongsLayer* ret = new SongsLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

