// ============================================================
// SliderThumb.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SLIDERTHUMB_H_
#define SLIDERTHUMB_H_

#include "cocos2d.h"

class SliderThumb {
public:
    virtual ~SliderThumb();
    virtual ~SliderThumb();
    virtual ~SliderThumb();

    void setRotated(bool);
    void setMaxOffset(float);
    void init(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*);
    void create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*);
    void getValue();
    void setValue(float);

};

#endif // SLIDERTHUMB_H_
