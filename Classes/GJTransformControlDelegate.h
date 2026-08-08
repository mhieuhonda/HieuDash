// ============================================================
// GJTransformControlDelegate.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJTRANSFORMCONTROLDELEGATE_H_
#define GJTRANSFORMCONTROLDELEGATE_H_

#include "cocos2d.h"

class GJTransformControlDelegate {
public:
    void anchorPointMoved(cocos2d::CCPoint);
    void getTransformNode();
    void transformChangeBegin();
    void transformChangeEnded();
    void transformSkewXChanged(float);
    void transformSkewYChanged(float);
    void transformResetRotation();
    void transformScaleXChanged(float);
    void transformScaleYChanged(float);
    void updateTransformControl();
    void transformScaleXYChanged(float, float);
    void transformRestoreRotation();
    void transformRotationChanged(float);
    void transformRotationXChanged(float);
    void transformRotationYChanged(float);
    void getUI();

};

#endif // GJTRANSFORMCONTROLDELEGATE_H_
