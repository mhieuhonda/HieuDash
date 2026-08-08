// ============================================================
// CCAccelerometer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCACCELEROMETER_H_
#define COCOS2D_CCACCELEROMETER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCAccelerometer {
public:
    CCAccelerometer();
    CCAccelerometer();

    virtual ~CCAccelerometer();
    virtual ~CCAccelerometer();

    void setDelegate(cocos2d::CCAccelerometerDelegate*);
    void setAccelerometerInterval(float);
    void update(float, float, float, long);

};

} // namespace cocos2d

#endif // COCOS2D_CCACCELEROMETER_H_
