#ifndef HIEUDASH_OBJECTTOOLBOX_H_
#define HIEUDASH_OBJECTTOOLBOX_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Object ID to sprite frame mapping singleton

#include "cocos2d.h"
#include "HieuDashEnums.h"

class ObjectToolbox : public cocos2d::CCNode {
public:
    ObjectToolbox();

    cocos2d::CCDictionary* m_pFrameDict;
    cocos2d::CCDictionary* m_pParticleDict;
    cocos2d::CCDictionary* m_pObjectParentDict;
    cocos2d::CCDictionary* m_pObjectRectDict;
    cocos2d::CCDictionary* m_pObjectZLayerDict;
    int m_nMaxObjectCount;

    static ObjectToolbox* sharedState();
    bool init();
    cocos2d::CCSpriteFrame* intToFrame(int);
    int frameToInt(cocos2d::CCSpriteFrame*);
    std::string intToParticle(int);
    int particleToInt(std::string);
    int getObjectParent(int);
    cocos2d::CCRect getObjectRect(int);
    int getObjectZLayer(int);
    void loadFrameDict();
    void loadParticleDict();
    void loadObjectParentDict();
    void loadObjectRectDict();
    void loadObjectZLayerDict();

    ~ObjectToolbox();
};

#endif // HIEUDASH_OBJECTTOOLBOX_H_
