// ============================================================
// CCSize.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCSIZE_H_
#define COCOS2D_CCSIZE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCSize {
public:
    CCSize(cocos2d::CCPoint const&);
    CCSize(cocos2d::CCSize const&);
    CCSize(float, float);
    CCSize();
    CCSize(cocos2d::CCPoint const&);
    CCSize(cocos2d::CCSize const&);
    CCSize(float, float);
    CCSize();

    void setSize(float, float);
    void equals(cocos2d::CCSize const&)) const;

    // Operators
    operator=(cocos2d::CCPoint const&);
    operator=(cocos2d::CCSize const&);
    operator/(float) const;
    operator-(cocos2d::CCSize const&) const;
    operator*(float) const;
    operator+(cocos2d::CCSize const&) const;

};

} // namespace cocos2d

#endif // COCOS2D_CCSIZE_H_
