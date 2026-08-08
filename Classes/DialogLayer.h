
#ifndef DIALOGLAYER_H_
#define DIALOGLAYER_H_

#include "cocos2d.h"

class DialogLayer : public cocos2d::CCLayer {
public:
    virtual ~DialogLayer();

    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) override;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) override;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) override;
    void addToMainScene();
    void keyBackClicked() override;
    void animateInDialog();
    void handleDialogTap();
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) override;
    void createDialogLayer(DialogObject*, cocos2d::CCArray*, int);
    void createWithObjects(cocos2d::CCArray*, int);
    void displayNextObject();
    void fadeInTextFinished(TextArea*);
    void animateInRandomSide();
    void displayDialogObject(DialogObject*);
    void updateChatPlacement(DialogChatPlacement);
    void updateNavButtonFrame();
    void finishCurrentAnimation();
    void registerWithTouchDispatcher() override;
    void init(DialogObject*, cocos2d::CCArray*, int) override;
    void create(DialogObject*, int);
    void keyDown(cocos2d::enumKeyCodes, double);
    void onClose();
    void onEnter() override;
    void animateIn(DialogAnimationType);

};

#endif // DIALOGLAYER_H_
