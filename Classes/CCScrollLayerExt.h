#ifndef _CCSCROLLLAYEREXT_H_
#define _CCSCROLLLAYEREXT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCScrollLayerExt {
public:
    CCScrollLayerExt(cocos2d::CCRect);
    ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    constraintContent();
    getBottomPadding();
    getClipsToBounds();
    getContentLayer();
    getHorizontalScrollIndicator();
    getIsScrolling();
    getIsTouch();
    getLockHorizontal();
    getLockVertical();
    getMaxOffsetBottom();
    getMaxOffsetTop();
    getMaxY();
    getMinY();
    getScrollDelegate();
    getShowsHorizontalScrollIndicator();
    getShowsVerticalScrollIndicator();
    getTopPadding();
    getTouchDispatch();
    getVerticalScrollIndicator();
    moveToTop();
    moveToTopWithOffset(float);
    postVisit();
    preVisitWithClippingRect(cocos2d::CCRect);
    registerWithTouchDispatcher();
    scrollingEnd();
    setBottomPadding(float);
    setClipsToBounds(bool);
    setContentLayer(cocos2d::CCLayerColor*);
    setContentLayerSize(cocos2d::CCSize);
    setContentOffset(cocos2d::CCPoint, bool);
    setHorizontalScrollIndicator(cocos2d::CCLayerColor*);
    setIsScrolling(bool);
    setIsTouch(bool);
    setLockHorizontal(bool);
    setLockVertical(bool);
    setMaxOffsetBottom(float);
    setMaxOffsetTop(float);
    setScrollDelegate(CCScrollLayerExtDelegate*);
    setShowsHorizontalScrollIndicator(bool);
    setShowsVerticalScrollIndicator(bool);
    setTopPadding(float);
    setTouchDispatch(bool);
    setVerticalScrollIndicator(cocos2d::CCLayerColor*);
    updateIndicators(float);
    visit();
    ~CCScrollLayerExt();
};

#endif // _CCSCROLLLAYEREXT_H_
