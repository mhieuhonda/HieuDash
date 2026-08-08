// ============================================================
// OBB2D.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef OBB2D_H_
#define OBB2D_H_

#include "cocos2d.h"

class OBB2D {
public:
    virtual ~OBB2D();
    virtual ~OBB2D();
    virtual ~OBB2D();

    void computeAxes();
    void orderCorners();
    void overlaps1Way(OBB2D*);
    void getBoundingRect();
    void calculateWithCenter(cocos2d::CCPoint, float, float, float);
    void init(cocos2d::CCPoint, float, float, float);
    void create(cocos2d::CCPoint, float, float, float);
    void overlaps(OBB2D*);

};

#endif // OBB2D_H_
