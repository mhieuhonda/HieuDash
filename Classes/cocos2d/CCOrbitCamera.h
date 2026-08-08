// ============================================================
// CCOrbitCamera.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCORBITCAMERA_H_
#define COCOS2D_CCORBITCAMERA_H_

#include "cocos2d.h"

namespace cocos2d {

class CCOrbitCamera {
public:
    virtual ~CCOrbitCamera();
    virtual ~CCOrbitCamera();
    virtual ~CCOrbitCamera();

    void copyWithZone(cocos2d::CCZone*);
    void sphericalRadius(float*, float*, float*);
    void startWithTarget(cocos2d::CCNode*);
    void initWithDuration(float, float, float, float, float, float, float);
    void create(float, float, float, float, float, float, float);
    void update(float);

};

} // namespace cocos2d

#endif // COCOS2D_CCORBITCAMERA_H_
