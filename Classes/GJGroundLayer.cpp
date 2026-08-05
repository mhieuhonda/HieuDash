#include "GJGroundLayer.h"

GJGroundLayer::GJGroundLayer()
    : m_pGroundSprite(nullptr)
    , m_pGroundSprite2(nullptr)
    , m_nGroundID(1)
    , m_fGroundWidth(0.0f)
    , m_obGroundColor(cocos2d::ccc3(255, 255, 255))
    , m_fSpeed(0.0f) {}

GJGroundLayer* GJGroundLayer::create() {
    GJGroundLayer* ret = new GJGroundLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool GJGroundLayer::init() { return cocos2d::CCLayer::init(); }
void GJGroundLayer::update(float dt) {}
void GJGroundLayer::setColor(cocos2d::_ccColor3B color) { m_obGroundColor = color; }
void GJGroundLayer::setSpeed(float speed) { m_fSpeed = speed; }
void GJGroundLayer::updateGroundSprites() {}
void GJGroundLayer::loadGround(int groundID) { m_nGroundID = groundID; }
void GJGroundLayer::scrollGround(float dt) {}
void GJGroundLayer::resetPosition() {}

GJGroundLayer::~GJGroundLayer() {}
