
#include "GJMoreGamesLayer.h"

GJMoreGamesLayer::~GJMoreGamesLayer() {
    this->cleanup();
}

void GJMoreGamesLayer::customSetup() {
    // Setup operation - stub
}

void GJMoreGamesLayer::getMoreGamesList() {
    // Stub - not yet implemented
}

void GJMoreGamesLayer::create() {
    GJMoreGamesLayer* ret = new GJMoreGamesLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

