#include "SetIDLayer.h"
#include "GameObject.h"

SetIDLayer::SetIDLayer()
    : m_nObjectID(0)
    , m_nTargetID(0)
    , m_pGameObject(nullptr) {}

SetIDLayer* SetIDLayer::create(GameObject* obj, int id) {
    SetIDLayer* ret = new SetIDLayer();
    if (ret && ret->init(obj, id)) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool SetIDLayer::init(GameObject* obj, int id) {
    m_pGameObject = obj;
    m_nObjectID = id;
    return true;
}

void SetIDLayer::onIDChanged(int id) { m_nObjectID = id; }
void SetIDLayer::onOK(cocos2d::CCObject* sender) {}

SetIDLayer::~SetIDLayer() {}
