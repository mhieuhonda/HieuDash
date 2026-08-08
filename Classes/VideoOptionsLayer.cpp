// ============================================================
// VideoOptionsLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "VideoOptionsLayer.h"

VideoOptionsLayer::~VideoOptionsLayer() {
    // 0x7c6ddc
    this->cleanup();
}

VideoOptionsLayer::~VideoOptionsLayer() {
    // 0x7c6d60
    this->cleanup();
}

VideoOptionsLayer::~VideoOptionsLayer() {
    // 0x7c6d60
    this->cleanup();
}

void VideoOptionsLayer::onAdvanced(cocos2d::CCObject*) {
    // 0x7d05b8
    // TODO: Implement
}

void VideoOptionsLayer::reloadMenu() {
    // 0x7cc90c
    // Load from file/storage
    // TODO: Implement loading
}

void VideoOptionsLayer::onBorderless(cocos2d::CCObject*) {
    // 0x7cc6cc
    // TODO: Implement
}

void VideoOptionsLayer::onFullscreen(cocos2d::CCObject*) {
    // 0x7cc6bc
    // TODO: Implement
}

void VideoOptionsLayer::keyBackClicked() {
    // 0x7c72a8
    // TODO: Implement
}

void VideoOptionsLayer::onBorderlessFix(cocos2d::CCObject*) {
    // 0x7c6ae8
    // TODO: Implement
}

void VideoOptionsLayer::onResolutionNext(cocos2d::CCObject*) {
    // 0x7cc7e4
    // TODO: Implement
}

void VideoOptionsLayer::onResolutionPrev(cocos2d::CCObject*) {
    // 0x7cc7d8
    // TODO: Implement
}

void VideoOptionsLayer::toggleResolution() {
    // 0x7cc3ec
    // TODO: Implement
}

void VideoOptionsLayer::updateResolution(int) {
    // 0x7cc6dc
    // TODO: Implement
}

void VideoOptionsLayer::createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint, float, float, bool, cocos2d::CCArray*) {
    // 0x7cc93c
    // TODO: Implement
}

void VideoOptionsLayer::onTextureQualityNext(cocos2d::CCObject*) {
    // 0x7cc3e0
    // TODO: Implement
}

void VideoOptionsLayer::onTextureQualityPrev(cocos2d::CCObject*) {
    // 0x7cc3d4
    // TODO: Implement
}

void VideoOptionsLayer::updateTextureQuality(int) {
    // 0x7cc2ac
    // TODO: Implement
}

void VideoOptionsLayer::init() {
    // 0x7ccbc8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void VideoOptionsLayer::create() {
    // 0x7ceba8
    VideoOptionsLayer* ret = new VideoOptionsLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void VideoOptionsLayer::onInfo(cocos2d::CCObject*) {
    // 0x7cc7f0
    // TODO: Implement
}

void VideoOptionsLayer::onApply(cocos2d::CCObject*) {
    // 0x7c7c44
    // TODO: Implement
}

void VideoOptionsLayer::onClose(cocos2d::CCObject*) {
    // 0x7c724c
    // TODO: Implement
}

