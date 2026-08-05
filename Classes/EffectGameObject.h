#ifndef HIEUDASH_EFFECTGAMEOBJECT_H_
#define HIEUDASH_EFFECTGAMEOBJECT_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Trigger object with duration, opacity, target group, easing, etc.

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "GameObject.h"

class EffectGameObject : public GameObject {
public:
    EffectGameObject();

    float m_fDuration;
    int m_nTargetGroupID;
    float m_fDelay;
    int m_nEasing;
    float m_fEasingRate;
    int m_nTargetCenterID;
    int m_nTargetColorID;
    float m_fOpacity;
    int m_nTargetParticleID;
    int m_nSpawnDelay;
    int m_nEdge;

    static EffectGameObject* create(char const* frame);
    bool init(char const* frame);
    void triggerObject(float);
    void spawnXPosition();
    void getSaveString();
    void customSetup();
    void activateObject();
    void deactivateObject();

    ~EffectGameObject();
};

#endif // HIEUDASH_EFFECTGAMEOBJECT_H_
