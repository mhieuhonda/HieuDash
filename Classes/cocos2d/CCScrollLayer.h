// ============================================================
// CCScrollLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCSCROLLLAYER_H_
#define COCOS2D_CCSCROLLLAYER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCScrollLayer {
public:
    virtual ~CCScrollLayer();
    virtual ~CCScrollLayer();
    virtual ~CCScrollLayer();

    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void initWithLayers(cocos2d::CCArray*, int);
    void nodeWithLayers(cocos2d::CCArray*, int);
    void setMaximumScrollHeight(float);

};

} // namespace cocos2d

#endif // COCOS2D_CCSCROLLLAYER_H_
