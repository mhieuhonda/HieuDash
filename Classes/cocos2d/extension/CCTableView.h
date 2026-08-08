// ============================================================
// CCTableView.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_EXTENSION_CCTABLEVIEW_H_
#define COCOS2D_EXTENSION_CCTABLEVIEW_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCTableView {
public:
    CCTableView();
    CCTableView();

    virtual ~CCTableView();
    virtual ~CCTableView();
    virtual ~CCTableView();

    void reloadData();
    void cellAtIndex(unsigned int);
    void dequeueCell();
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void _indexFromOffset(cocos2d::CCPoint);
    void _offsetFromIndex(unsigned int);
    void _setIndexForCell(unsigned int, cocos2d::extension::CCTableViewCell*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void initWithViewSize(cocos2d::CCSize, cocos2d::CCNode*);
    void __indexFromOffset(cocos2d::CCPoint);
    void __offsetFromIndex(unsigned int);
    void insertCellAtIndex(unsigned int);
    void removeCellAtIndex(unsigned int);
    void scrollViewDidZoom(cocos2d::extension::CCScrollView*);
    void updateCellAtIndex(unsigned int);
    void _updateContentSize();
    void _addCellIfNecessary(cocos2d::extension::CCTableViewCell*);
    void _moveCellOutOfSight(cocos2d::extension::CCTableViewCell*);
    void scrollViewDidScroll(cocos2d::extension::CCScrollView*);
    void _updateCellPositions();
    void getVerticalFillOrder();
    void setVerticalFillOrder(cocos2d::extension::CCTableViewVerticalFillOrder);
    void unregisterAllScriptHandler();
    void create(cocos2d::extension::CCTableViewDataSource*, cocos2d::CCSize);
    void create(cocos2d::extension::CCTableViewDataSource*, cocos2d::CCSize, cocos2d::CCNode*);

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCTABLEVIEW_H_
