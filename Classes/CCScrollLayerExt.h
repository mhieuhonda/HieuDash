// ============================================================
// CCScrollLayerExt.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef CCSCROLLLAYEREXT_H_
#define CCSCROLLLAYEREXT_H_

#include "cocos2d.h"

class CCScrollLayerExt {
public:
    CCScrollLayerExt(cocos2d::CCRect);
    CCScrollLayerExt(cocos2d::CCRect);

    virtual ~CCScrollLayerExt();
    virtual ~CCScrollLayerExt();
    virtual ~CCScrollLayerExt();

    void scrollLayer(float);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void scrollingEnd();
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void setContentOffset(cocos2d::CCPoint, bool);
    void updateIndicators(float);
    void constraintContent();
    void doConstraintContent(bool);
    void moveToTopWithOffset(float);
    void setContentLayerSize(cocos2d::CCSize);
    void preVisitWithClippingRect(cocos2d::CCRect);
    void registerWithTouchDispatcher();
    void visit();
    void getMaxY();
    void getMinY();
    void moveToTop();
    void postVisit();

};

#endif // CCSCROLLLAYEREXT_H_
