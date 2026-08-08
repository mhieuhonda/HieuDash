// ============================================================
// GJScaleControlDelegate.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GJSCALECONTROLDELEGATE_H_
#define GJSCALECONTROLDELEGATE_H_

#include "cocos2d.h"

class GJScaleControlDelegate {
public:
    void scaleXChanged(float, bool);
    void scaleYChanged(float, bool);
    void scaleXYChanged(float, float, bool);
    void anchorPointMoved(cocos2d::CCPoint);
    void scaleChangeBegin();
    void scaleChangeEnded();
    void updateScaleControl();

};

#endif // GJSCALECONTROLDELEGATE_H_
