#ifndef HIEUDASH_GJEFFECTMANAGER_H_
#define HIEUDASH_GJEFFECTMANAGER_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Manages color/opacity actions and trigger effects

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJEffectManager : public cocos2d::CCNode {
public:
    GJEffectManager();

    cocos2d::CCDictionary* m_pColorActions;
    cocos2d::CCDictionary* m_pOpacityActions;
    cocos2d::CCDictionary* m_pMoveActions;
    cocos2d::CCArray* m_pActiveColorActions;
    cocos2d::CCArray* m_pActiveOpacityActions;
    cocos2d::CCArray* m_pActiveMoveActions;
    bool m_bHasColorActions;
    bool m_bHasOpacityActions;
    bool m_bHasMoveActions;
    TriggerEffectDelegate* m_pDelegate;
    int m_nTargetGroupID;

    static GJEffectManager* create();
    bool init();
    void update(float);
    void runColorAction(int, cocos2d::_ccColor3B, float, int, float);
    void runOpacityAction(int, float, float, int, float);
    void runMoveAction(int, int, float, float, int, float);
    void resetAllActions();
    cocos2d::_ccColor3B getColorForChannel(int);
    float getOpacityForChannel(int);
    void setColorForChannel(int, cocos2d::_ccColor3B);
    void setOpacityForChannel(int, float);
    void processTrigger(EffectGameObject*);
    void updateColorAction(float);
    void updateOpacityAction(float);
    void updateMoveAction(float);

    ~GJEffectManager();
};

#endif // HIEUDASH_GJEFFECTMANAGER_H_
