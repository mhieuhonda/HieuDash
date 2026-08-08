// ============================================================
// CCBlockLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef CCBLOCKLAYER_H_
#define CCBLOCKLAYER_H_

#include "cocos2d.h"

class CCBlockLayer {
public:
    virtual ~CCBlockLayer();
    virtual ~CCBlockLayer();
    virtual ~CCBlockLayer();

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
    void decrementForcePrio();
    void incrementForcePrio();
    void registerWithTouchDispatcher();
    void draw();
    void init();
    void create();
    void enableUI();
    void disableUI();
    void exitLayer();
    void hideLayer(bool);
    void showLayer(bool);

};

#endif // CCBLOCKLAYER_H_
