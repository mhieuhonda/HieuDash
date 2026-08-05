#ifndef HIEUDASH_GJBASEGAMELAYER_H_
#define HIEUDASH_GJBASEGAMELAYER_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Base class for PlayLayer and LevelEditorLayer with batch nodes, groups, objects

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJBaseGameLayer : public cocos2d::CCLayer {
public:
    GJBaseGameLayer();

    cocos2d::CCArray* m_pObjects;
    cocos2d::CCArray* m_pSections;
    cocos2d::CCDictionary* m_pGroupDict;
    cocos2d::CCDictionary* m_pEffectManagerDict;
    cocos2d::CCSpriteBatchNode* m_pBatchNode;
    cocos2d::CCSpriteBatchNode* m_pBatchNodeAdd;
    cocos2d::CCArray* m_pActiveObjects;
    cocos2d::CCArray* m_pStaticObjects;
    cocos2d::CCDictionary* m_pColorActions;
    LevelSettingsObject* m_pLevelSettings;
    cocos2d::CCPoint m_obCameraPos;
    float m_fSectionWidth;
    int m_nSectionCount;
    bool m_bTwoPlayerMode;
    float m_fTime;

    void addToSection(GameObject*);
    void createObjectsFromSetup(std::string);
    void removeObjectFromSection(GameObject*);
    void reorderObjectSection(GameObject*);
    int sectionForPos(cocos2d::CCPoint);
    void update(float);
    void addObjectToGroup(int, GameObject*);
    cocos2d::CCArray* groupForID(int);
    void resetGroupForID(int);
    void triggerObject(GameObject*);
    void spawnObject(GameObject*);
    void addToActiveObjects(GameObject*);
    void removeFromActiveObjects(GameObject*);
    void processListActions();

    ~GJBaseGameLayer();
};

#endif // HIEUDASH_GJBASEGAMELAYER_H_
