// ============================================================
// CCPointArray.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCPOINTARRAY_H_
#define COCOS2D_CCPOINTARRAY_H_

#include "cocos2d.h"
#include <vector>

namespace cocos2d {

class CCPointArray {
public:
    CCPointArray();
    CCPointArray();

    virtual ~CCPointArray();
    virtual ~CCPointArray();
    virtual ~CCPointArray();

    void copyWithZone(cocos2d::CCZone*);
    void reverseInline();
    void addControlPoint(cocos2d::CCPoint);
    void getControlPoints();
    void initWithCapacity(unsigned int);
    void setControlPoints(std::vector<cocos2d::CCPoint*>*);
    void insertControlPoint(cocos2d::CCPoint&, unsigned int);
    void replaceControlPoint(cocos2d::CCPoint&, unsigned int);
    void getControlPointAtIndex(unsigned int);
    void removeControlPointAtIndex(unsigned int);
    void count();
    void create(unsigned int);
    void reverse();

protected:
    int m_controlPointAtIndex;
    cocos2d::CCPoint m_controlPoints;

};

} // namespace cocos2d

#endif // COCOS2D_CCPOINTARRAY_H_
