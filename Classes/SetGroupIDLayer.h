#ifndef HIEUDASH_SETGROUPIDLAYER_H_
#define HIEUDASH_SETGROUPIDLAYER_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Object group editor popup

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "FLAlertLayer.h"

class SetGroupIDLayer : public FLAlertLayer {
public:
    SetGroupIDLayer();

    GameObject* m_pGameObject;
    int m_nGroupID;
    int m_nTargetGroupID;
    cocos2d::CCArray* m_pGroups;
    bool m_bMultiGroup;

    static SetGroupIDLayer* create(GameObject*, int);
    bool init(GameObject*, int);
    void onGroupIDChanged(int);
    void onTargetGroupChanged(int);
    void onOK(cocos2d::CCObject*);
    void updateGroupID(int);

    ~SetGroupIDLayer();
};

#endif // HIEUDASH_SETGROUPIDLAYER_H_
