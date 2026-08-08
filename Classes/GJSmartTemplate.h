
#ifndef GJSMARTTEMPLATE_H_
#define GJSMARTTEMPLATE_H_

#include "cocos2d.h"
#include <string>
#include <vector>

class GJSmartTemplate : public cocos2d::CCNode {
public:
    virtual ~GJSmartTemplate();

    void dataLoaded(DS_Dictionary*);
    void getPrefabs(std::string);
    void savePrefab(std::string, std::string);
    bool isUnrequired(std::string);
    void offsetForDir(GJSmartDirection, int);
    void removePrefab(std::string, int);
    void flipBlockType(SmartBlockType, bool, bool);
    void offsetForType(SmartBlockType);
    void scanForPrefab(std::string);
    void flipBlockTypeX(SmartBlockType);
    void flipBlockTypeY(SmartBlockType);
    std::string getNoCornerKey(std::string);
    GJSmartTemplate* createWithCoder(DS_Dictionary*);
    void encodeWithCoder(DS_Dictionary*);
    void getPrefabWithID(std::string, int);
    void getRandomPrefab(std::string);
    void offsetForObject(SmartGameObject*);
    void rotateBlockType(SmartBlockType, int);
    void saveRemapToDict(std::string, std::string, cocos2d::CCDictionary*);
    std::string getSimplifiedKey(std::string);
    void getTemplateState(std::vector<SmartPrefabResult>&);
    void keyFromNeighbors(SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType);
    void keyFromNeighbors(cocos2d::CCPoint, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*);
    void generateRemapDict();
    void getSimplifiedType(SmartBlockType, bool&);
    void logTemplateStatus(bool);
    void rotateBlockType90(SmartBlockType);
    void smartObjectToType(SmartGameObject*, cocos2d::CCPoint);
    void keyFromNeighborsOld(bool, bool, bool, bool, bool, bool, bool, bool);
    void resetScannedPrefabs();
    bool shouldDiscardObject(SmartBlockType, GJSmartDirection);
    std::string getVerySimplifiedKey(std::string);
    void smartTypeToObjectKey(SmartBlockType);
    void getTotalChanceForPrefab(std::string);
    void applyTransformationsForType(SmartBlockType, cocos2d::CCSprite*);
    bool init();
    void create();
    void flipKey(std::string, bool, bool);
    bool canEncode();
    void getPrefab(cocos2d::CCPoint, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*);
    void getPrefab(std::string, bool, bool);
    void rotateKey(std::string, int);
    void saveRemap(std::string);

protected:
    std::string m_noCornerKey;
    int m_prefabWithID;
    std::string m_simplifiedKey;
    std::string m_verySimplifiedKey;

};

#endif // GJSMARTTEMPLATE_H_
