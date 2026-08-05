#ifndef _BOOMSCROLLLAYER_H_
#define _BOOMSCROLLLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class BoomScrollLayer {
public:
    BoomScrollLayer();
    addPage(cocos2d::CCLayer*);
    addPage(cocos2d::CCLayer*, int);
    cancelAndStoleTouch(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    claimTouch(cocos2d::CCTouch*);
    create(cocos2d::CCArray*, int, bool);
    getCurrentScreen();
    getDelegate();
    getInternalLayer();
    getMarginOffset();
    getMinTouchSpeed();
    getMinimumTouchLengthToChangePage();
    getMinimumTouchLengthToSlide();
    getMovingToPage();
    getPage(int);
    getPagesIndicatorNormalColor();
    getPagesIndicatorSelectedColor();
    getPagesWidthOffset();
    getRelativePageForNum(int);
    getRelativePosForPage(int);
    getScrollArea();
    getShowPagesIndicator();
    getStealTouches();
    getTotalPages();
    getTouchSpeedFast();
    getTouchSpeedMid();
    getpages();
    init(cocos2d::CCArray*, int, bool);
    instantMoveToPage(int);
    moveToPage(int);
    moveToPageEnded();
    pageNumberForPosition(cocos2d::CCPoint);
    positionForPageWithNumber(int);
    quickUpdate();
    registerWithTouchDispatcher();
    removePage(cocos2d::CCLayer*);
    removePageWithNumber(int);
    repositionPagesLooped();
    selectPage(int);
    setDelegate(BoomScrollLayerDelegate*);
    setMarginOffset(float);
    setMinTouchSpeed(float);
    setMinimumTouchLengthToChangePage(float);
    setMinimumTouchLengthToSlide(float);
    setPageSetup(cocos2d::CCArray*);
    setPagesIndicatorNormalColor(cocos2d::_ccColor4B);
    setPagesIndicatorPosition(cocos2d::CCPoint);
    setPagesIndicatorSelectedColor(cocos2d::_ccColor4B);
    setPagesWidthOffset(float);
    setScrollArea(cocos2d::CCRect);
    setShowPagesIndicator(bool);
    setStealTouches(bool);
    setTouchSpeedFast(float);
    setTouchSpeedMid(float);
    updateDots();
    updatePages();
    visit();
    ~BoomScrollLayer();
};

#endif // _BOOMSCROLLLAYER_H_
