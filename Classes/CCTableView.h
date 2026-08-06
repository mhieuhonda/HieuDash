#ifndef HIEUDASH_CCTABLEVIEW_H_
#define HIEUDASH_CCTABLEVIEW_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCTableView : public cocos2d::CCLayer {
public:
    CCTableView(cocos2d::CCRect);
    void cancelAndStoleTouch(cocos2d::CCTouch*, cocos2d::CCEvent*);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void cellForRowAtIndexPath(CCIndexPath&);
    void cellForTouch(cocos2d::CCTouch*);
    void checkBoundaryOfCell(CCTableViewCell*);
    void checkBoundaryOfCell(cocos2d::CCPoint&, float);
    void checkBoundaryOfContent(float);
    void checkFirstCell(CCTableViewCell*);
    void checkLastCell(CCTableViewCell*);
    void claimTouch(cocos2d::CCTouch*);
    CCTableView* create(CCTableViewDelegate*, CCTableViewDataSource*, cocos2d::CCRect);
    void deleteCCTableViewCell(CCTableViewCell*);
    void dequeueReusableCellWithIdentifier(char const*);
    int getBeginLocation();
    int getBeginTouch();
    int getCellRemovedArray();
    int getCellVisibleArray();
    int getCheckLocation();
    int getClipsToBounds();
    int getDataSource();
    int getDelegate();
    int getEditable();
    bool getIsScheduled();
    bool getIsTouch();
    int getLastCellPos();
    int getScrollingToIndexPath();
    int getStealTouches();
    int getTouchCell();
    int getTouchDispatch();
    int getindexPathAddedArray();
    void initCCTableViewCells();
    bool isDuplicateInVisibleCellArray(CCIndexPath*);
    bool isDuplicateIndexPath(CCIndexPath&);
    void onEnter();
    void onExit();
    void registerWithTouchDispatcher();
    void reloadData();
    void removeIndexPathFromPathAddedArray(CCIndexPath&);
    void scrllViewWillBeginDecelerating(CCScrollLayerExt*);
    void scrollToIndexPath(CCIndexPath&);
    void scrollViewDidEndDecelerating(CCScrollLayerExt*);
    void scrollViewDidEndMoving(CCScrollLayerExt*);
    void scrollViewTouchMoving(CCScrollLayerExt*);
    void setBeginLocation(cocos2d::CCPoint);
    void setBeginTouch(cocos2d::CCTouch*);
    void setCellRemovedArray(cocos2d::CCArray*);
    void setCellVisibleArray(cocos2d::CCArray*);
    void setCheckLocation(cocos2d::CCPoint);
    void setClipsToBounds(bool);
    void setDataSource(CCTableViewDataSource*);
    void setDelegate(CCTableViewDelegate*);
    void setEditable(bool);
    void setIsScheduled(bool);
    void setIsTouch(bool);
    void setLastCellPos(cocos2d::CCPoint);
    void setScrollingToIndexPath(CCIndexPath*);
    void setStealTouches(bool);
    void setTouchCell(CCTableViewCell*);
    void setTouchDispatch(bool);
    void setindexPathAddedArray(cocos2d::CCArray*);
    void touchFinish(cocos2d::CCTouch*);
    ~CCTableView();
};

#endif // HIEUDASH_CCTABLEVIEW_H_
