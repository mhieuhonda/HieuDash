#ifndef HIEUDASH_SLIDERTOUCHLOGIC_H_
#define HIEUDASH_SLIDERTOUCHLOGIC_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class SliderTouchLogic : public cocos2d::CCNode {
public:
    SliderTouchLogic();
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*);
    int getLiveDragging();
    int getSliderDelegate();
    int getThumb();
    init(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*);
    void setLiveDragging(bool);
    void setSliderDelegate(Slider*);
    ~SliderTouchLogic();
};

#endif // HIEUDASH_SLIDERTOUCHLOGIC_H_
