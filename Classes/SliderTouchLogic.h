#ifndef _SLIDERTOUCHLOGIC_H_
#define _SLIDERTOUCHLOGIC_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class SliderTouchLogic {
public:
    SliderTouchLogic();
    ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*);
    getLiveDragging();
    getSliderDelegate();
    getThumb();
    init(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*);
    setLiveDragging(bool);
    setSliderDelegate(Slider*);
    ~SliderTouchLogic();
};

#endif // _SLIDERTOUCHLOGIC_H_
