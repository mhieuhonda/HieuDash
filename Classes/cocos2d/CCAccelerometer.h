// ============================================================
// CCAccelerometer.h — Reconstructed from libcocos2dcpp.so symbols
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
