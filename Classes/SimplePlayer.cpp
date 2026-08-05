#include "SimplePlayer.h"

SimplePlayer::SimplePlayer()
    : m_pMainSprite(nullptr)
    , m_pSecondarySprite(nullptr)
    , m_pOutlineSprite(nullptr)
    , m_nIconType(0)
    , m_nIconID(0)
    , m_obPrimaryColor(cocos2d::ccc3(255, 255, 255))
    , m_obSecondaryColor(cocos2d::ccc3(255, 255, 255)) {}

SimplePlayer* SimplePlayer::create(int iconType) {
    SimplePlayer* ret = new SimplePlayer();
    if (ret && ret->init(iconType)) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool SimplePlayer::init(int iconType) {
    m_nIconType = iconType;
    return cocos2d::CCSprite::init();
}

void SimplePlayer::updateColors() {}
void SimplePlayer::setPrimaryColor(cocos2d::_ccColor3B color) { m_obPrimaryColor = color; updateColors(); }
void SimplePlayer::setSecondaryColor(cocos2d::_ccColor3B color) { m_obSecondaryColor = color; updateColors(); }
void SimplePlayer::setIconID(int id) { m_nIconID = id; updateIcon(); }
void SimplePlayer::setIconType(int type) { m_nIconType = type; updateIcon(); }
void SimplePlayer::updateIcon() {}

SimplePlayer::~SimplePlayer() {}
