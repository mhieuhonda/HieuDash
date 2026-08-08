// ============================================================
// CCScrollView.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_EXTENSION_CCSCROLLVIEW_H_
#define COCOS2D_EXTENSION_CCSCROLLVIEW_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCScrollView {
public:
    CCScrollView();
    CCScrollView();

    virtual ~CCScrollView();
    virtual ~CCScrollView();
    virtual ~CCScrollView();

    void beforeDraw();
    void getViewRect();
    void setViewSize(cocos2d::CCSize);
    void updateInset();
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void getContainer();
    void getZoomScale();
    void setContainer(cocos2d::CCNode*);
    void setDirection(cocos2d::extension::CCScrollViewDirection);
    void setZoomScale(float);
    void setZoomScale(float, bool);
    void isNodeVisible(cocos2d::CCNode*);
    void setContentSize(cocos2d::CCSize const&);
    void setTouchEnabled(bool);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void getContentOffset();
    void getScriptHandler(int);
    void initWithViewSize(cocos2d::CCSize, cocos2d::CCNode*);
    void setContentOffset(cocos2d::CCPoint, bool);
    void relocateContainer(bool);
    void maxContainerOffset();
    void minContainerOffset();
    void deaccelerateScrolling(float);
    void registerScriptHandler(int, int);
    void stoppedAnimatedScroll(cocos2d::CCNode*);
    void setZoomScaleInDuration(float, float);
    void performedAnimatedScroll(float);
    void unregisterScriptHandler(int);
    void setContentOffsetInDuration(cocos2d::CCPoint, float);
    void registerWithTouchDispatcher();
    void init();
    void pause(cocos2d::CCObject*);
    void visit();
    void create(cocos2d::CCSize, cocos2d::CCNode*);
    void create();
    void resume(cocos2d::CCObject*);
    void addChild(cocos2d::CCNode*);
    void addChild(cocos2d::CCNode*, int);
    void addChild(cocos2d::CCNode*, int, int);
    void afterDraw();
    void getContentSize()) const;

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCSCROLLVIEW_H_
