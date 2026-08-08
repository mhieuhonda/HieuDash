// ============================================================
// CCContentLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCContentLayer.h"

CCContentLayer::~CCContentLayer() {
    // 0x5740c8
    this->cleanup();
}

CCContentLayer::~CCContentLayer() {
    // 0x574074
    this->cleanup();
}

CCContentLayer::~CCContentLayer() {
    // 0x574074
    this->cleanup();
}

void CCContentLayer::setPosition(cocos2d::CCPoint const&) {
    // 0x574230
    // TODO: Set m_position
}

void CCContentLayer::create(cocos2d::_ccColor4B const&, float, float) {
    // 0x57413c
    CCContentLayer* ret = new CCContentLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

