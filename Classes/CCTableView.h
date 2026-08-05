#ifndef _CCTABLEVIEW_H_
#define _CCTABLEVIEW_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCTableView {
public:
    CCTableView(cocos2d::CCRect);
    cancelAndStoleTouch(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    cellForRowAtIndexPath(CCIndexPath&);
    cellForTouch(cocos2d::CCTouch*);
    checkBoundaryOfCell(CCTableViewCell*);
    checkBoundaryOfCell(cocos2d::CCPoint&, float);
    checkBoundaryOfContent(float);
    checkFirstCell(CCTableViewCell*);
    checkLastCell(CCTableViewCell*);
    claimTouch(cocos2d::CCTouch*);
    create(CCTableViewDelegate*, CCTableViewDataSource*, cocos2d::CCRect);
    deleteCCTableViewCell(CCTableViewCell*);
    dequeueReusableCellWithIdentifier(char const*);
    getBeginLocation();
    getBeginTouch();
    getCellRemovedArray();
    getCellVisibleArray();
    getCheckLocation();
    getClipsToBounds();
    getDataSource();
    getDelegate();
    getEditable();
    getIsScheduled();
    getIsTouch();
    getLastCellPos();
    getScrollingToIndexPath();
    getStealTouches();
    getTouchCell();
    getTouchDispatch();
    getindexPathAddedArray();
    initCCTableViewCells();
    isDuplicateInVisibleCellArray(CCIndexPath*);
    isDuplicateIndexPath(CCIndexPath&);
    onEnter();
    onExit();
    registerWithTouchDispatcher();
    reloadData();
    removeIndexPathFromPathAddedArray(CCIndexPath&);
    scrllViewWillBeginDecelerating(CCScrollLayerExt*);
    scrollToIndexPath(CCIndexPath&);
    scrollViewDidEndDecelerating(CCScrollLayerExt*);
    scrollViewDidEndMoving(CCScrollLayerExt*);
    scrollViewTouchMoving(CCScrollLayerExt*);
    setBeginLocation(cocos2d::CCPoint);
    setBeginTouch(cocos2d::CCTouch*);
    setCellRemovedArray(cocos2d::CCArray*);
    setCellVisibleArray(cocos2d::CCArray*);
    setCheckLocation(cocos2d::CCPoint);
    setClipsToBounds(bool);
    setDataSource(CCTableViewDataSource*);
    setDelegate(CCTableViewDelegate*);
    setEditable(bool);
    setIsScheduled(bool);
    setIsTouch(bool);
    setLastCellPos(cocos2d::CCPoint);
    setScrollingToIndexPath(CCIndexPath*);
    setStealTouches(bool);
    setTouchCell(CCTableViewCell*);
    setTouchDispatch(bool);
    setindexPathAddedArray(cocos2d::CCArray*);
    touchFinish(cocos2d::CCTouch*);
    ~CCTableView();
};

#endif // _CCTABLEVIEW_H_
