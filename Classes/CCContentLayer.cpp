
#include "CCContentLayer.h"

CCContentLayer::~CCContentLayer() {
    this->cleanup();
}

void CCContentLayer::setPosition(cocos2d::CCPoint const&) {
    // Setter operation - stub
}

void CCContentLayer::create(cocos2d::_ccColor4B const&, float, float) {
    CCContentLayer* ret = new CCContentLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

