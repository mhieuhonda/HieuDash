#ifndef HIEUDASH_SLIDERTHUMB_H_
#define HIEUDASH_SLIDERTHUMB_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class SliderThumb : public cocos2d::CCNode {
public:
    SliderThumb();
    create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*);
    int getValue();
    init(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*);
    void setValue(float);
    ~SliderThumb();
};

#endif // HIEUDASH_SLIDERTHUMB_H_
