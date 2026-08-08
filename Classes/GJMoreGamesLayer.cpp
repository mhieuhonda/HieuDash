
#include "GJMoreGamesLayer.h"

GJMoreGamesLayer::~GJMoreGamesLayer() {
    this->cleanup();
}

GJMoreGamesLayer::~GJMoreGamesLayer() {
    this->cleanup();
}

GJMoreGamesLayer::~GJMoreGamesLayer() {
    this->cleanup();
}

void GJMoreGamesLayer::customSetup() {
    // TODO: Implement
}

void GJMoreGamesLayer::getMoreGamesList() {
    // TODO: Implement
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

