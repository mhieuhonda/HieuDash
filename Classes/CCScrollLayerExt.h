#ifndef HIEUDASH_CCSCROLLLAYEREXT_H_
#define HIEUDASH_CCSCROLLLAYEREXT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCScrollLayerExt : public cocos2d::CCLayer {
public:
    CCScrollLayerExt(cocos2d::CCRect);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void constraintContent();
    int getBottomPadding();
    int getClipsToBounds();
    int getContentLayer();
    int getHorizontalScrollIndicator();
    bool getIsScrolling();
    bool getIsTouch();
    int getLockHorizontal();
    int getLockVertical();
    int getMaxOffsetBottom();
    int getMaxOffsetTop();
    int getMaxY();
    int getMinY();
    int getScrollDelegate();
    int getShowsHorizontalScrollIndicator();
    int getShowsVerticalScrollIndicator();
    int getTopPadding();
    int getTouchDispatch();
    int getVerticalScrollIndicator();
    void moveToTop();
    void moveToTopWithOffset(float);
    void postVisit();
    void preVisitWithClippingRect(cocos2d::CCRect);
    void registerWithTouchDispatcher();
    void scrollingEnd();
    void setBottomPadding(float);
    void setClipsToBounds(bool);
    void setContentLayer(cocos2d::CCLayerColor*);
    void setContentLayerSize(cocos2d::CCSize);
    void setContentOffset(cocos2d::CCPoint, bool);
    void setHorizontalScrollIndicator(cocos2d::CCLayerColor*);
    void setIsScrolling(bool);
    void setIsTouch(bool);
    void setLockHorizontal(bool);
    void setLockVertical(bool);
    void setMaxOffsetBottom(float);
    void setMaxOffsetTop(float);
    void setScrollDelegate(CCScrollLayerExtDelegate*);
    void setShowsHorizontalScrollIndicator(bool);
    void setShowsVerticalScrollIndicator(bool);
    void setTopPadding(float);
    void setTouchDispatch(bool);
    void setVerticalScrollIndicator(cocos2d::CCLayerColor*);
    void updateIndicators(float);
    void visit();
    ~CCScrollLayerExt();
};

#endif // HIEUDASH_CCSCROLLLAYEREXT_H_
