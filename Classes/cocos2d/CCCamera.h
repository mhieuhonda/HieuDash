// ============================================================
// CCCamera.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCCAMERA_H_
#define COCOS2D_CCCAMERA_H_

#include "cocos2d.h"

namespace cocos2d {

class CCCamera {
public:
    CCCamera();
    CCCamera();

    virtual ~CCCamera();
    virtual ~CCCamera();
    virtual ~CCCamera();

    void description();
    void getCenterXYZ(float*, float*, float*);
    void setCenterXYZ(float, float, float);
    void init();
    void locate();
    void getZEye();
    void restore();
    void getUpXYZ(float*, float*, float*);
    void setUpXYZ(float, float, float);
    void getEyeXYZ(float*, float*, float*);
    void setEyeXYZ(float, float, float);

};

} // namespace cocos2d

#endif // COCOS2D_CCCAMERA_H_
