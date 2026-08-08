// ============================================================
// DialogLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef DIALOGLAYER_H_
#define DIALOGLAYER_H_

#include "cocos2d.h"

class DialogLayer {
public:
    virtual ~DialogLayer();
    virtual ~DialogLayer();
    virtual ~DialogLayer();

    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void addToMainScene();
    void keyBackClicked();
    void animateInDialog();
    void handleDialogTap();
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void createDialogLayer(DialogObject*, cocos2d::CCArray*, int);
    void createWithObjects(cocos2d::CCArray*, int);
    void displayNextObject();
    void fadeInTextFinished(TextArea*);
    void animateInRandomSide();
    void displayDialogObject(DialogObject*);
    void updateChatPlacement(DialogChatPlacement);
    void updateNavButtonFrame();
    void finishCurrentAnimation();
    void registerWithTouchDispatcher();
    void init(DialogObject*, cocos2d::CCArray*, int);
    void create(DialogObject*, int);
    void keyDown(cocos2d::enumKeyCodes, double);
    void onClose();
    void onEnter();
    void animateIn(DialogAnimationType);

};

#endif // DIALOGLAYER_H_
