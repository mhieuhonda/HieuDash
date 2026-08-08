
#ifndef BOOMSCROLLLAYER_H_
#define BOOMSCROLLLAYER_H_

#include "cocos2d.h"

class BoomScrollLayer {
public:
    virtual ~BoomScrollLayer();

    void claimTouch(cocos2d::CCTouch*);
    void moveToPage(int);
    void removePage(cocos2d::CCLayer*);
    void selectPage(int);
    void updateDots(float);
    void quickUpdate();
    void setDotScale(float);
    void updatePages();
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void getTotalPages();
    void moveToPageEnded();
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void instantMoveToPage(int);
    void cancelAndStoleTouch(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void removePageWithNumber(int);
    void togglePageIndicators(bool);
    void getRelativePageForNum(int);
    void getRelativePosForPage(int);
    void pageNumberForPosition(cocos2d::CCPoint);
    void repositionPagesLooped();
    void setupDynamicScrolling(cocos2d::CCArray*, DynamicScrollDelegate*);
    void positionForPageWithNumber(int);
    void setPagesIndicatorPosition(cocos2d::CCPoint);
    void registerWithTouchDispatcher();
    void init(cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*);
    void visit();
    void create(cocos2d::CCArray*, int, bool);
    void create(cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*);
    void addPage(cocos2d::CCLayer*);
    void addPage(cocos2d::CCLayer*, int);
    void getPage(int);

protected:
    float m_dotScale;
    cocos2d::CCPoint m_pagesIndicatorPosition;

};

#endif // BOOMSCROLLLAYER_H_
