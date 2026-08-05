#ifndef _LEVELEDITORLAYER_H_
#define _LEVELEDITORLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class LevelEditorLayer {
public:
    LevelEditorLayer();
    addToRedoList(UndoObject*);
    addToSection(GameObject*);
    addToUndoList(UndoObject*);
    create(GJGameLevel*);
    createObject(char const*, cocos2d::CCPoint);
    createObjectsFromSetup(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    getGameLayer();
    getLevel();
    getLevelDistance();
    getLevelSettings();
    getLevelString();
    getObjectCount();
    getSectionCount();
    init(GJGameLevel*);
    levelSettingsUpdated();
    objectAtPosition(cocos2d::CCPoint);
    objectsInRect(cocos2d::CCRect);
    redoLastAction();
    removeAllObjects();
    removeObject(GameObject*);
    removeObjectFromSection(GameObject*);
    reorderObjectSection(GameObject*);
    scene(GJGameLevel*);
    sectionForPos(cocos2d::CCPoint);
    setObjectCount(int);
    typeExistsAtPosition(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, cocos2d::CCPoint, bool, bool, float);
    undoLastAction();
    ~LevelEditorLayer();
};

#endif // _LEVELEDITORLAYER_H_
