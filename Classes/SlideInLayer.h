#ifndef _SLIDEINLAYER_H_
#define _SLIDEINLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class SlideInLayer {
public:
    SlideInLayer();
    ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    create();
    customSetup();
    disableUI();
    draw();
    enableUI();
    enterAnimFinished();
    enterLayer();
    exitLayer();
    getDelegate();
    getRemoveOnExit();
    hideLayer(bool);
    init();
    keyBackClicked();
    layerHidden();
    layerVisible();
    registerWithTouchDispatcher();
    setDelegate(SlideInLayerDelegate*);
    setRemoveOnExit(bool);
    showLayer(bool);
    ~SlideInLayer();
};

#endif // _SLIDEINLAYER_H_
