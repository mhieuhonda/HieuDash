// ============================================================
// GJSongBrowser.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJSongBrowser.h"

GJSongBrowser::~GJSongBrowser() {
    // 0x5be554
    this->cleanup();
}

GJSongBrowser::~GJSongBrowser() {
    // 0x5be4c8
    this->cleanup();
}

GJSongBrowser::~GJSongBrowser() {
    // 0x5be4c8
    this->cleanup();
}

void GJSongBrowser::onNextPage(cocos2d::CCObject*) {
    // 0x5bf070
    // TODO: Implement
}

void GJSongBrowser::onPrevPage(cocos2d::CCObject*) {
    // 0x5bf07c
    // TODO: Implement
}

void GJSongBrowser::customSetup() {
    // 0x5be5b4
    // TODO: Implement
}

void GJSongBrowser::onDeleteAll(cocos2d::CCObject*) {
    // 0x5bea00
    // TODO: Implement
}

void GJSongBrowser::setupPageInfo(int, int, int) {
    // 0x5beda4
    // TODO: Implement
}

void GJSongBrowser::FLAlert_Clicked(FLAlertLayer*, bool) {
    // 0x5be944
    // TODO: Implement
}

void GJSongBrowser::setupSongBrowser(cocos2d::CCArray*) {
    // 0x5bed10
    // TODO: Implement
}

void GJSongBrowser::getSelectedCellIdx() {
    // 0x5be4b8
    // TODO: Implement
}

void GJSongBrowser::cellPerformedAction(TableViewCell*, int, CellAction, cocos2d::CCNode*) {
    // 0x5be904
    // TODO: Implement
}

void GJSongBrowser::init() {
    // 0x5bf02c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJSongBrowser::create() {
    // 0x5beb7c
    GJSongBrowser* ret = new GJSongBrowser();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJSongBrowser::loadPage(int) {
    // 0x5bee6c
    // Load from file/storage
    // TODO: Implement loading
}

void GJSongBrowser::exitLayer(cocos2d::CCObject*) {
    // 0x5be580
    // TODO: Implement
}

