#ifndef HIEUDASH_BOOMSCROLLLAYER_H_
#define HIEUDASH_BOOMSCROLLLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class BoomScrollLayer : public cocos2d::CCLayer {
public:
    BoomScrollLayer();
    void addPage(cocos2d::CCLayer*);
    void addPage(cocos2d::CCLayer*, int);
    void cancelAndStoleTouch(cocos2d::CCTouch*, cocos2d::CCEvent*);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void claimTouch(cocos2d::CCTouch*);
    BoomScrollLayer* create(cocos2d::CCArray*, int, bool);
    int getCurrentScreen();
    int getDelegate();
    int getInternalLayer();
    int getMarginOffset();
    int getMinTouchSpeed();
    int getMinimumTouchLengthToChangePage();
    int getMinimumTouchLengthToSlide();
    int getMovingToPage();
    int getPage(int);
    int getPagesIndicatorNormalColor();
    int getPagesIndicatorSelectedColor();
    int getPagesWidthOffset();
    int getRelativePageForNum(int);
    int getRelativePosForPage(int);
    int getScrollArea();
    int getShowPagesIndicator();
    int getStealTouches();
    int getTotalPages();
    int getTouchSpeedFast();
    int getTouchSpeedMid();
    int getpages();
    bool init(cocos2d::CCArray*, int, bool);
    void instantMoveToPage(int);
    void moveToPage(int);
    void moveToPageEnded();
    void pageNumberForPosition(cocos2d::CCPoint);
    void positionForPageWithNumber(int);
    void quickUpdate();
    void registerWithTouchDispatcher();
    void removePage(cocos2d::CCLayer*);
    void removePageWithNumber(int);
    void repositionPagesLooped();
    void selectPage(int);
    void setDelegate(BoomScrollLayerDelegate*);
    void setMarginOffset(float);
    void setMinTouchSpeed(float);
    void setMinimumTouchLengthToChangePage(float);
    void setMinimumTouchLengthToSlide(float);
    void setPageSetup(cocos2d::CCArray*);
    void setPagesIndicatorNormalColor(cocos2d::_ccColor4B);
    void setPagesIndicatorPosition(cocos2d::CCPoint);
    void setPagesIndicatorSelectedColor(cocos2d::_ccColor4B);
    void setPagesWidthOffset(float);
    void setScrollArea(cocos2d::CCRect);
    void setShowPagesIndicator(bool);
    void setStealTouches(bool);
    void setTouchSpeedFast(float);
    void setTouchSpeedMid(float);
    void updateDots();
    void updatePages();
    void visit();
    ~BoomScrollLayer();
};

#endif // HIEUDASH_BOOMSCROLLLAYER_H_
