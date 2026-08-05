#ifndef _EDITORUI_H_
#define _EDITORUI_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class EditorUI {
public:
    EditorUI();
    FLAlert_Clicked(FLAlertLayer*, bool);
    applyOffset(GameObject*);
    ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    clickOnPosition(cocos2d::CCPoint);
    colorSelectClosed(cocos2d::_ccColor3B);
    constrainGameLayerPosition();
    create(LevelEditorLayer*);
    createMoveMenu();
    deselectAll();
    deselectObject();
    disableButton(CCMenuItemSpriteExtra*);
    draw();
    editObject();
    enableButton(CCMenuItemSpriteExtra*);
    getButton(char const*, int, void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCMenu*);
    getCreateBtn(char const*, int);
    getEditMode();
    getGridSnappedPos(cocos2d::CCPoint);
    getModeBtn(char const*, int);
    getRelativeOffset(GameObject*);
    getSpriteButton(char const*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCMenu*, float);
    getTouchPoint(cocos2d::CCTouch*, cocos2d::CCEvent*);
    getXMin();
    init(LevelEditorLayer*);
    moveObject(GameObject*, cocos2d::CCPoint);
    moveObjectCall(cocos2d::CCNode*);
    offsetForFrame(char const*);
    onCreate();
    onCreateButton(cocos2d::CCNode*);
    onCreateObject(char const*);
    onDelete();
    onDeleteAll();
    onPause();
    onSettings();
    redoLastAction();
    registerWithTouchDispatcher();
    removeOffset(GameObject*);
    resetUI();
    selectObject(GameObject*);
    selectObjectsInRect(cocos2d::CCRect);
    setEditMode(EditMode);
    setupCreateMenu();
    setupDeleteMenu();
    setupEditMenu();
    showDeleteConfirmation();
    showMaxError();
    sliderChanged(SliderThumb*);
    toggleMode(cocos2d::CCNode*);
    toggleSwipe();
    transformObject(GameObject*, EditCommand);
    transformObjectCall(cocos2d::CCNode*);
    undoLastAction();
    updateCreateMenu();
    updateDeleteMenu();
    updateEditMenu();
    updateSlider();
    valueFromXPos(float);
    xPosFromValue(float);
    zoomGameLayer(bool);
    zoomIn();
    zoomOut();
    ~EditorUI();
};

#endif // _EDITORUI_H_
