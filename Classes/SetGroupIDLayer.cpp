#include "SetGroupIDLayer.h"
#include "GameObject.h"

SetGroupIDLayer::SetGroupIDLayer()
    : m_pGameObject(nullptr)
    , m_nGroupID(0)
    , m_nTargetGroupID(0)
    , m_pGroups(nullptr)
    , m_bMultiGroup(false) {}

SetGroupIDLayer* SetGroupIDLayer::create(GameObject* obj, int groupID) {
    SetGroupIDLayer* ret = new SetGroupIDLayer();
    if (ret && ret->init(obj, groupID)) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool SetGroupIDLayer::init(GameObject* obj, int groupID) {
    m_pGameObject = obj;
    m_nGroupID = groupID;
    return true;
}

void SetGroupIDLayer::onGroupIDChanged(int id) { m_nGroupID = id; }
void SetGroupIDLayer::onTargetGroupChanged(int id) { m_nTargetGroupID = id; }
void SetGroupIDLayer::onOK(cocos2d::CCObject* sender) {}
void SetGroupIDLayer::updateGroupID(int id) {}

SetGroupIDLayer::~SetGroupIDLayer() {}
