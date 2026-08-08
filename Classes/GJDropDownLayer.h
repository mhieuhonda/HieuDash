
#ifndef GJDROPDOWNLAYER_H_
#define GJDROPDOWNLAYER_H_

#include "cocos2d.h"

class GJDropDownLayer {
public:
    virtual ~GJDropDownLayer();

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
    void init(char const*);
    void init(char const*, float, bool);
    void create(char const*);
    void create(char const*, float, bool);
    void enableUI();
    void disableUI();
    void exitLayer(cocos2d::CCObject*);
    void hideLayer(bool);
    void showLayer(bool);

};

#endif // GJDROPDOWNLAYER_H_
