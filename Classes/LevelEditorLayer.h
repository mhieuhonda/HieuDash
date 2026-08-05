#ifndef HIEUDASH_LEVELEDITORLAYER_H_
#define HIEUDASH_LEVELEDITORLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "GJBaseGameLayer.h"

class LevelEditorLayer : public GJBaseGameLayer {
public:
    LevelEditorLayer();

    // --- Editor state ---
    EditorUI* m_pEditorUI;
    GJGameLevel* m_pLevel;
    GJGroundLayer* m_pGround;
    bool m_bTwoPlayer;
    float m_fTime;

    // --- Methods ---
    void addToRedoList(UndoObject*);
    void addToSection(GameObject*);
    void addToUndoList(UndoObject*);
    LevelEditorLayer* create(GJGameLevel*);
    void createObject(char const*, cocos2d::CCPoint);
    void createObjectsFromSetup(std::string);
    PlayLayer* getGameLayer();
    GJGameLevel* getLevel();
    int getLevelDistance();
    int getLevelSettings();
    int getLevelString();
    int getObjectCount();
    int getSectionCount();
    bool init(GJGameLevel*);
    void levelSettingsUpdated();
    void objectAtPosition(cocos2d::CCPoint);
    void objectsInRect(cocos2d::CCRect);
    void redoLastAction();
    void removeAllObjects();
    void removeObject(GameObject*);
    void removeObjectFromSection(GameObject*);
    void reorderObjectSection(GameObject*);
    cocos2d::CCScene* scene(GJGameLevel*);
    int sectionForPos(cocos2d::CCPoint);
    void setObjectCount(int);
    void typeExistsAtPosition(std::string, cocos2d::CCPoint, bool, bool, float);
    void undoLastAction();
    ~LevelEditorLayer();
};

#endif // HIEUDASH_LEVELEDITORLAYER_H_
