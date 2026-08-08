// ============================================================
// CCRect.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCRECT_H_
#define COCOS2D_CCRECT_H_

#include "cocos2d.h"

namespace cocos2d {

class CCRect {
public:
    CCRect(cocos2d::CCRect const&);
    CCRect(float, float, float, float);
    CCRect();
    CCRect(cocos2d::CCRect const&);
    CCRect(float, float, float, float);
    CCRect();

    void setRect(float, float, float, float);
    void containsPoint(cocos2d::CCPoint const&)) const;
    void intersectsRect(cocos2d::CCRect const&)) const;
    void equals(cocos2d::CCRect const&)) const;
    void getMaxX()) const;
    void getMaxY()) const;
    void getMidX()) const;
    void getMidY()) const;
    void getMinX()) const;
    void getMinY()) const;

    // Operators
    operator=(cocos2d::CCRect const&);

};

} // namespace cocos2d

#endif // COCOS2D_CCRECT_H_
