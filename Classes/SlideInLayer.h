
#ifndef SLIDEINLAYER_H_
#define SLIDEINLAYER_H_

#include "cocos2d.h"

class SlideInLayer {
public:
    virtual ~SlideInLayer();

    void enterLayer();
    void customSetup();
    void layerHidden();
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void layerVisible();
    void keyBackClicked();
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void enterAnimFinished();
    void registerWithTouchDispatcher();
    void draw();
    void init();
    void create();
    void enableUI();
    void disableUI();
    void exitLayer(cocos2d::CCObject*);
    void hideLayer(bool);
    void showLayer(bool);

};

#endif // SLIDEINLAYER_H_
