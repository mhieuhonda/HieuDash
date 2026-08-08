// ============================================================
// CCPoint.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCPOINT_H_
#define COCOS2D_CCPOINT_H_

#include "cocos2d.h"

namespace cocos2d {

class CCPoint {
public:
    CCPoint(cocos2d::CCSize const&);
    CCPoint(cocos2d::CCPoint const&);
    CCPoint(float, float);
    CCPoint();
    CCPoint(cocos2d::CCSize const&);
    CCPoint(cocos2d::CCPoint const&);
    CCPoint(float, float);
    CCPoint();

    void setPoint(float, float);
    void fuzzyEquals(cocos2d::CCPoint const&, float)) const;
    void rotateByAngle(cocos2d::CCPoint const&, float)) const;
    void equals(cocos2d::CCPoint const&)) const;
    void isZero()) const;
    void getAngle(cocos2d::CCPoint const&)) const;

    // Operators
    operator=(cocos2d::CCSize const&);
    operator=(cocos2d::CCPoint const&);
    operator/(float) const;
    operator-(cocos2d::CCPoint const&) const;
    operator*(float) const;
    operator-() const;
    operator+(cocos2d::CCPoint const&) const;

};

} // namespace cocos2d

#endif // COCOS2D_CCPOINT_H_
