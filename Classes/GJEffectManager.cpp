#include "GJEffectManager.h"
#include "EffectGameObject.h"

GJEffectManager::GJEffectManager()
    : m_pColorActions(nullptr)
    , m_pOpacityActions(nullptr)
    , m_pMoveActions(nullptr)
    , m_pActiveColorActions(nullptr)
    , m_pActiveOpacityActions(nullptr)
    , m_pActiveMoveActions(nullptr)
    , m_bHasColorActions(false)
    , m_bHasOpacityActions(false)
    , m_bHasMoveActions(false)
    , m_pDelegate(nullptr)
    , m_nTargetGroupID(0) {}

GJEffectManager* GJEffectManager::create() {
    GJEffectManager* ret = new GJEffectManager();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool GJEffectManager::init() {
    if (!cocos2d::CCNode::init()) return false;
    m_pColorActions = cocos2d::CCDictionary::create();
    m_pColorActions->retain();
    m_pOpacityActions = cocos2d::CCDictionary::create();
    m_pOpacityActions->retain();
    m_pMoveActions = cocos2d::CCDictionary::create();
    m_pMoveActions->retain();
    m_pActiveColorActions = cocos2d::CCArray::create();
    m_pActiveColorActions->retain();
    m_pActiveOpacityActions = cocos2d::CCArray::create();
    m_pActiveOpacityActions->retain();
    m_pActiveMoveActions = cocos2d::CCArray::create();
    m_pActiveMoveActions->retain();
    return true;
}

void GJEffectManager::update(float dt) {}
void GJEffectManager::runColorAction(int channelID, cocos2d::_ccColor3B color, float duration, int easing, float easingRate) {}
void GJEffectManager::runOpacityAction(int channelID, float opacity, float duration, int easing, float easingRate) {}
void GJEffectManager::runMoveAction(int groupID, int target, float duration, float offset, int easing, float easingRate) {}
void GJEffectManager::resetAllActions() {}
cocos2d::_ccColor3B GJEffectManager::getColorForChannel(int channelID) { return cocos2d::ccc3(255, 255, 255); }
float GJEffectManager::getOpacityForChannel(int channelID) { return 1.0f; }
void GJEffectManager::setColorForChannel(int channelID, cocos2d::_ccColor3B color) {}
void GJEffectManager::setOpacityForChannel(int channelID, float opacity) {}
void GJEffectManager::processTrigger(EffectGameObject* trigger) {}
void GJEffectManager::updateColorAction(float dt) {}
void GJEffectManager::updateOpacityAction(float dt) {}
void GJEffectManager::updateMoveAction(float dt) {}

GJEffectManager::~GJEffectManager() {
    CC_SAFE_RELEASE(m_pColorActions);
    CC_SAFE_RELEASE(m_pOpacityActions);
    CC_SAFE_RELEASE(m_pMoveActions);
    CC_SAFE_RELEASE(m_pActiveColorActions);
    CC_SAFE_RELEASE(m_pActiveOpacityActions);
    CC_SAFE_RELEASE(m_pActiveMoveActions);
}
