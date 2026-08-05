#ifndef _LOADINGCIRCLE_H_
#define _LOADINGCIRCLE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class LoadingCircle {
public:
    LoadingCircle();
    ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    create();
    draw();
    fadeAndRemove();
    getCircle();
    getDarkOverlay();
    getTargetScene();
    init();
    registerWithTouchDispatcher();
    setDarkOverlay(bool);
    setTargetScene(cocos2d::CCNode*);
    show();
    ~LoadingCircle();
};

#endif // _LOADINGCIRCLE_H_
