#include "GJBaseGameLayer.h"
#include "GameObject.h"
#include "LevelSettingsObject.h"

GJBaseGameLayer::GJBaseGameLayer()
    : m_pObjects(nullptr)
    , m_pSections(nullptr)
    , m_pGroupDict(nullptr)
    , m_pEffectManagerDict(nullptr)
    , m_pBatchNode(nullptr)
    , m_pBatchNodeAdd(nullptr)
    , m_pActiveObjects(nullptr)
    , m_pStaticObjects(nullptr)
    , m_pColorActions(nullptr)
    , m_pLevelSettings(nullptr)
    , m_obCameraPos(cocos2d::CCPointZero)
    , m_fSectionWidth(0.0f)
    , m_nSectionCount(0)
    , m_bTwoPlayerMode(false)
    , m_fTime(0.0f) {}

void GJBaseGameLayer::addToSection(GameObject* obj) {}
void GJBaseGameLayer::createObjectsFromSetup(std::string setup) {}
void GJBaseGameLayer::removeObjectFromSection(GameObject* obj) {}
void GJBaseGameLayer::reorderObjectSection(GameObject* obj) {}
int GJBaseGameLayer::sectionForPos(cocos2d::CCPoint pos) { return 0; }
void GJBaseGameLayer::update(float dt) {}
void GJBaseGameLayer::addObjectToGroup(int groupID, GameObject* obj) {}
cocos2d::CCArray* GJBaseGameLayer::groupForID(int groupID) { return nullptr; }
void GJBaseGameLayer::resetGroupForID(int groupID) {}
void GJBaseGameLayer::triggerObject(GameObject* obj) {}
void GJBaseGameLayer::spawnObject(GameObject* obj) {}
void GJBaseGameLayer::addToActiveObjects(GameObject* obj) {}
void GJBaseGameLayer::removeFromActiveObjects(GameObject* obj) {}
void GJBaseGameLayer::processListActions() {}

GJBaseGameLayer::~GJBaseGameLayer() {}
