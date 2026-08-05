#ifndef HIEUDASH_SETIDLAYER_H_
#define HIEUDASH_SETIDLAYER_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Custom object ID editor popup

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "FLAlertLayer.h"

class SetIDLayer : public FLAlertLayer {
public:
    SetIDLayer();

    int m_nObjectID;
    int m_nTargetID;
    GameObject* m_pGameObject;

    static SetIDLayer* create(GameObject*, int);
    bool init(GameObject*, int);
    void onIDChanged(int);
    void onOK(cocos2d::CCObject*);

    ~SetIDLayer();
};

#endif // HIEUDASH_SETIDLAYER_H_
