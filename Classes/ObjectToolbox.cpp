#include "ObjectToolbox.h"

static ObjectToolbox* s_sharedObjectToolbox = nullptr;

ObjectToolbox::ObjectToolbox()
    : m_pFrameDict(nullptr)
    , m_pParticleDict(nullptr)
    , m_pObjectParentDict(nullptr)
    , m_pObjectRectDict(nullptr)
    , m_pObjectZLayerDict(nullptr)
    , m_nMaxObjectCount(0) {}

ObjectToolbox* ObjectToolbox::sharedState() {
    if (!s_sharedObjectToolbox) {
        s_sharedObjectToolbox = new ObjectToolbox();
        s_sharedObjectToolbox->init();
    }
    return s_sharedObjectToolbox;
}

bool ObjectToolbox::init() {
    if (!cocos2d::CCNode::init()) return false;
    m_pFrameDict = cocos2d::CCDictionary::create();
    m_pFrameDict->retain();
    m_pParticleDict = cocos2d::CCDictionary::create();
    m_pParticleDict->retain();
    m_pObjectParentDict = cocos2d::CCDictionary::create();
    m_pObjectParentDict->retain();
    m_pObjectRectDict = cocos2d::CCDictionary::create();
    m_pObjectRectDict->retain();
    m_pObjectZLayerDict = cocos2d::CCDictionary::create();
    m_pObjectZLayerDict->retain();
    return true;
}

cocos2d::CCSpriteFrame* ObjectToolbox::intToFrame(int id) { return nullptr; }
int ObjectToolbox::frameToInt(cocos2d::CCSpriteFrame* frame) { return 0; }
std::string ObjectToolbox::intToParticle(int id) { return ""; }
int ObjectToolbox::particleToInt(std::string name) { return 0; }
int ObjectToolbox::getObjectParent(int id) { return 0; }
cocos2d::CCRect ObjectToolbox::getObjectRect(int id) { return cocos2d::CCRectZero; }
int ObjectToolbox::getObjectZLayer(int id) { return 0; }
void ObjectToolbox::loadFrameDict() {}
void ObjectToolbox::loadParticleDict() {}
void ObjectToolbox::loadObjectParentDict() {}
void ObjectToolbox::loadObjectRectDict() {}
void ObjectToolbox::loadObjectZLayerDict() {}

ObjectToolbox::~ObjectToolbox() {
    CC_SAFE_RELEASE(m_pFrameDict);
    CC_SAFE_RELEASE(m_pParticleDict);
    CC_SAFE_RELEASE(m_pObjectParentDict);
    CC_SAFE_RELEASE(m_pObjectRectDict);
    CC_SAFE_RELEASE(m_pObjectZLayerDict);
}
