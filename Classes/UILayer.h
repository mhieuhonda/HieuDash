#ifndef HIEUDASH_UILAYER_H_
#define HIEUDASH_UILAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class UILayer : public cocos2d::CCLayer {
public:
    UILayer();
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    UILayer* create();
    void disableMenu();
    void draw();
    void enableMenu();
    float getClkTimer();
    bool init();
    void keyBackClicked();
    void onCheck();
    void onDeleteCheck();
    void onPause();
    void pCommand(cocos2d::CCNode*);
    void registerWithTouchDispatcher();
    void toggleCheckpointsMenu(bool);
    ~UILayer();
};

#endif // HIEUDASH_UILAYER_H_
