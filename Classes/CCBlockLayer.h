#ifndef HIEUDASH_CCBLOCKLAYER_H_
#define HIEUDASH_CCBLOCKLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCBlockLayer : public cocos2d::CCLayerColor {
public:
    CCBlockLayer();
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    CCBlockLayer* create();
    void customSetup();
    void disableUI();
    void draw();
    void enableUI();
    void enterAnimFinished();
    void enterLayer();
    void exitLayer();
    int getRemoveOnExit();
    void hideLayer(bool);
    bool init();
    void keyBackClicked();
    void layerHidden();
    void layerVisible();
    void registerWithTouchDispatcher();
    void setRemoveOnExit(bool);
    void showLayer(bool);
    ~CCBlockLayer();
};

#endif // HIEUDASH_CCBLOCKLAYER_H_
