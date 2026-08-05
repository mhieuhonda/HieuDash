#ifndef HIEUDASH_EDITORUI_H_
#define HIEUDASH_EDITORUI_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class EditorUI : public cocos2d::CCLayer {
public:
    EditorUI();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void applyOffset(GameObject*);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void clickOnPosition(cocos2d::CCPoint);
    void colorSelectClosed(cocos2d::_ccColor3B);
    void constrainGameLayerPosition();
    EditorUI* create(LevelEditorLayer*);
    void createMoveMenu();
    void deselectAll();
    void deselectObject();
    void disableButton(CCMenuItemSpriteExtra*);
    void draw();
    void editObject();
    void enableButton(CCMenuItemSpriteExtra*);
    getButton(char const*, int, void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCMenu*);
    int getCreateBtn(char const*, int);
    bool getEditMode();
    int getGridSnappedPos(cocos2d::CCPoint);
    int getModeBtn(char const*, int);
    int getRelativeOffset(GameObject*);
    getSpriteButton(char const*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCMenu*, float);
    int getTouchPoint(cocos2d::CCTouch*, cocos2d::CCEvent*);
    int getXMin();
    bool init(LevelEditorLayer*);
    void moveObject(GameObject*, cocos2d::CCPoint);
    void moveObjectCall(cocos2d::CCNode*);
    void offsetForFrame(char const*);
    void onCreate();
    void onCreateButton(cocos2d::CCNode*);
    void onCreateObject(char const*);
    void onDelete();
    void onDeleteAll();
    void onPause();
    void onSettings();
    void redoLastAction();
    void registerWithTouchDispatcher();
    void removeOffset(GameObject*);
    void resetUI();
    void selectObject(GameObject*);
    void selectObjectsInRect(cocos2d::CCRect);
    void setEditMode(EditMode);
    void setupCreateMenu();
    void setupDeleteMenu();
    void setupEditMenu();
    void showDeleteConfirmation();
    void showMaxError();
    void sliderChanged(SliderThumb*);
    void toggleMode(cocos2d::CCNode*);
    void toggleSwipe();
    void transformObject(GameObject*, EditCommand);
    void transformObjectCall(cocos2d::CCNode*);
    void undoLastAction();
    void updateCreateMenu();
    void updateDeleteMenu();
    void updateEditMenu();
    void updateSlider();
    void valueFromXPos(float);
    void xPosFromValue(float);
    void zoomGameLayer(bool);
    void zoomIn();
    void zoomOut();
    ~EditorUI();
};

#endif // HIEUDASH_EDITORUI_H_
