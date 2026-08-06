#ifndef HIEUDASH_SLIDER_H_
#define HIEUDASH_SLIDER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class Slider : public cocos2d::CCNode {
public:
    Slider();
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, char const*, char const*);
    int getLiveDragging();
    int getThumb();
    int getValue();
    init(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, char const*, char const*);
    void setBarVisibility(bool);
    void setLiveDragging(bool);
    void setValue(float);
    void updateBar();
    ~Slider();
};

#endif // HIEUDASH_SLIDER_H_
