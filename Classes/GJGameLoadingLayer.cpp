
#include "GJGameLoadingLayer.h"

GJGameLoadingLayer::~GJGameLoadingLayer() {
    this->cleanup();
}

GJGameLoadingLayer::~GJGameLoadingLayer() {
    this->cleanup();
}

GJGameLoadingLayer::~GJGameLoadingLayer() {
    this->cleanup();
}

void GJGameLoadingLayer::gameLayerDidUnload() {
    // Load from file/storage
    // TODO: Implement loading
}

void GJGameLoadingLayer::transitionToLoadingLayer(GJGameLevel*, bool) {
    // Load from file/storage
    // TODO: Implement loading
}

void GJGameLoadingLayer::onEnterTransitionDidFinish() {
    // TODO: Implement
}

void GJGameLoadingLayer::init(GJGameLevel*, bool) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJGameLoadingLayer::create(GJGameLevel*, bool) {
    GJGameLoadingLayer* ret = new GJGameLoadingLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJGameLoadingLayer::onEnter() {
    // TODO: Implement
}

void GJGameLoadingLayer::loadLevel() {
    // Load from file/storage
    // TODO: Implement loading
}

