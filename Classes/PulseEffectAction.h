// ============================================================
// PulseEffectAction.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef PULSEEFFECTACTION_H_
#define PULSEEFFECTACTION_H_

#include "cocos2d.h"

class PulseEffectAction : public cocos2d::CCObject {
public:
    static PulseEffectAction* create();
    void isFinished();
    void valueForDelta(float, float, float, float);
    void step(float);

};

#endif // PULSEEFFECTACTION_H_
