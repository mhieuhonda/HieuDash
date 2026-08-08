// ============================================================
// GJGameLoadingLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJGameLoadingLayer.h"

GJGameLoadingLayer::~GJGameLoadingLayer() {
    // 0x854a00
    this->cleanup();
}

GJGameLoadingLayer::~GJGameLoadingLayer() {
    // 0x854994
    this->cleanup();
}

GJGameLoadingLayer::~GJGameLoadingLayer() {
    // 0x854994
    this->cleanup();
}

void GJGameLoadingLayer::gameLayerDidUnload() {
    // 0x86c7f8
    // Load from file/storage
    // TODO: Implement loading
}

void GJGameLoadingLayer::transitionToLoadingLayer(GJGameLevel*, bool) {
    // 0x86c76c
    // Load from file/storage
    // TODO: Implement loading
}

void GJGameLoadingLayer::onEnterTransitionDidFinish() {
    // 0x855948
    // TODO: Implement
}

void GJGameLoadingLayer::init(GJGameLevel*, bool) {
    // 0x86c56c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJGameLoadingLayer::create(GJGameLevel*, bool) {
    // 0x86c694
    GJGameLoadingLayer* ret = new GJGameLoadingLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJGameLoadingLayer::onEnter() {
    // 0x85594c
    // TODO: Implement
}

void GJGameLoadingLayer::loadLevel() {
    // 0x855a98
    // Load from file/storage
    // TODO: Implement loading
}

