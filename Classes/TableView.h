
#ifndef TABLEVIEW_H_
#define TABLEVIEW_H_

#include "cocos2d.h"

class TableView {
public:
    TableView(cocos2d::CCRect);
    TableView(cocos2d::CCRect);

    virtual ~TableView();

    void claimTouch(cocos2d::CCTouch*);
    void reloadData();
    void scrollWheel(float, float);
    void touchFinish(cocos2d::CCTouch*);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void cellForTouch(cocos2d::CCTouch*);
    void checkLastCell(TableViewCell*);
    void checkFirstCell(TableViewCell*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void scrollToIndexPath(CCIndexPath&);
    void initTableViewCells();
    bool cancelAndStoleTouch(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void checkBoundaryOfCell(TableViewCell*);
    void checkBoundaryOfCell(cocos2d::CCPoint&, float);
    void deleteTableViewCell(TableViewCell*);
    bool isDuplicateIndexPath(CCIndexPath&);
    void cellForRowAtIndexPath(CCIndexPath&);
    void scrollViewTouchMoving(CCScrollLayerExt*);
    void checkBoundaryOfContent(float);
    void scrollViewDidEndMoving(CCScrollLayerExt*);
    void registerWithTouchDispatcher();
    void scrollViewDidEndDecelerating(CCScrollLayerExt*);
    bool isDuplicateInVisibleCellArray(CCIndexPath*);
    void scrllViewWillBeginDecelerating(CCScrollLayerExt*);
    void dequeueReusableCellWithIdentifier(char const*);
    void removeIndexPathFromPathAddedArray(CCIndexPath&);
    void create(TableViewDelegate*, TableViewDataSource*, TableViewCellDelegate*, cocos2d::CCRect);
    void onExit();
    void onEnter();

};

#endif // TABLEVIEW_H_
