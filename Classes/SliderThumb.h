#ifndef _SLIDERTHUMB_H_
#define _SLIDERTHUMB_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class SliderThumb {
public:
    SliderThumb();
    create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*);
    getValue();
    init(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*);
    setValue(float);
    ~SliderThumb();
};

#endif // _SLIDERTHUMB_H_
