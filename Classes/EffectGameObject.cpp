#include "EffectGameObject.h"

EffectGameObject::EffectGameObject()
    : m_fDuration(0.0f)
    , m_nTargetGroupID(0)
    , m_fDelay(0.0f)
    , m_nEasing(0)
    , m_fEasingRate(2.0f)
    , m_nTargetCenterID(0)
    , m_nTargetColorID(0)
    , m_fOpacity(1.0f)
    , m_nTargetParticleID(0)
    , m_nSpawnDelay(0)
    , m_nEdge(0) {}

EffectGameObject* EffectGameObject::create(char const* frame) {
    EffectGameObject* ret = new EffectGameObject();
    if (ret && ret->init(frame)) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool EffectGameObject::init(char const* frame) {
    return GameObject::init(frame);
}

void EffectGameObject::triggerObject(float dt) {}
void EffectGameObject::spawnXPosition() {}
void EffectGameObject::getSaveString() {}
void EffectGameObject::customSetup() { GameObject::customSetup(); }
void EffectGameObject::activateObject() { GameObject::activateObject(); }
void EffectGameObject::deactivateObject() { GameObject::deactivateObject(); }

EffectGameObject::~EffectGameObject() {}
