#ifndef _UILAYER_H_
#define _UILAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class UILayer {
public:
    UILayer();
    ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    create();
    disableMenu();
    draw();
    enableMenu();
    getClkTimer();
    init();
    keyBackClicked();
    onCheck();
    onDeleteCheck();
    onPause();
    pCommand(cocos2d::CCNode*);
    registerWithTouchDispatcher();
    toggleCheckpointsMenu(bool);
    ~UILayer();
};

#endif // _UILAYER_H_
