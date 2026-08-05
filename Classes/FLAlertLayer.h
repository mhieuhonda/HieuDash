#ifndef _FLALERTLAYER_H_
#define _FLALERTLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class FLAlertLayer {
public:
    FLAlertLayer();
    ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    create(FLAlertLayerProtocol*, char const*, char const*, char const*, char const*);
    create(FLAlertLayerProtocol*, char const*, char const*, char const*, char const*, float);
    getInternalLayer();
    getPParent();
    getReverseKeyBack();
    getTargetScene();
    init(FLAlertLayerProtocol*, char const*, char const*, char const*, char const*, float);
    keyBackClicked();
    onBtn1();
    onBtn2();
    registerWithTouchDispatcher();
    setPParent(FLAlertLayerProtocol*);
    setReverseKeyBack(bool);
    setTargetScene(cocos2d::CCNode*);
    show();
    ~FLAlertLayer();
};

#endif // _FLALERTLAYER_H_
