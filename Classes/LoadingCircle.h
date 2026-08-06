#ifndef HIEUDASH_LOADINGCIRCLE_H_
#define HIEUDASH_LOADINGCIRCLE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LoadingCircle : public cocos2d::CCLayer {
public:
    LoadingCircle();
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    static LoadingCircle* create();
    void draw();
    void fadeAndRemove();
    int getCircle();
    int getDarkOverlay();
    int getTargetScene();
    bool init();
    void registerWithTouchDispatcher();
    void setDarkOverlay(bool);
    void setTargetScene(cocos2d::CCNode*);
    void show();
    ~LoadingCircle();
};

#endif // HIEUDASH_LOADINGCIRCLE_H_
