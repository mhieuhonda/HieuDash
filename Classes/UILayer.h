
#ifndef UILAYER_H_
#define UILAYER_H_

#include "cocos2d.h"

class UILayer {
public:
    virtual ~UILayer();

    void enableMenu();
    void disableMenu();
    void refreshDpad();
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onDeleteCheck(cocos2d::CCObject*);
    void editorPlaytest(bool);
    void handleKeypress(cocos2d::enumKeyCodes, bool, double);
    void keyBackClicked();
    void updateDualMode(bool);
    void resetAllButtons();
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void enableEditorMode();
    void resetUINodeState();
    void updateCheckState();
    void processUINodeTouch(GJUITouchEvent, int, cocos2d::CCPoint, GJUINode*, double);
    bool isJumpButtonPressed(bool);
    bool isJumpButtonPressed();
    void processUINodesTouch(GJUITouchEvent, cocos2d::CCTouch*);
    void toggleMenuVisibility(bool);
    void togglePlatformerMode(bool);
    void toggleCheckpointsMenu(bool);
    void updateUINodeVisibility(bool);
    void registerWithTouchDispatcher();
    void draw();
    void init(GJBaseGameLayer*);
    void keyUp(cocos2d::enumKeyCodes, double);
    void create(GJBaseGameLayer*);
    void doPause();
    void keyDown(cocos2d::enumKeyCodes, double);
    void onCheck(cocos2d::CCObject*);
    void onPause(cocos2d::CCObject*);

};

#endif // UILAYER_H_
