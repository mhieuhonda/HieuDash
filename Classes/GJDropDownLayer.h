#ifndef _GJDROPDOWNLAYER_H_
#define _GJDROPDOWNLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class GJDropDownLayer {
public:
    GJDropDownLayer();
    ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    create(char const*);
    create(char const*, float);
    customSetup();
    disableUI();
    draw();
    enableUI();
    enterAnimFinished();
    enterLayer();
    exitLayer();
    getInternalLayer();
    getRemoveOnExit();
    hideLayer(bool);
    init(char const*);
    init(char const*, float);
    keyBackClicked();
    layerHidden();
    layerVisible();
    registerWithTouchDispatcher();
    setRemoveOnExit(bool);
    showLayer(bool);
    ~GJDropDownLayer();
};

#endif // _GJDROPDOWNLAYER_H_
