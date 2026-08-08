// ============================================================
// EnterEffectInstance.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef ENTEREFFECTINSTANCE_H_
#define ENTEREFFECTINSTANCE_H_

#include "cocos2d.h"

class EnterEffectInstance : public cocos2d::CCObject {
public:
    static EnterEffectInstance* create();
    virtual ~EnterEffectInstance();
    virtual ~EnterEffectInstance();

    void animateValue(int, float, float, float, int, float, int);
    void loadTransitions(EnterEffectObject*, float);
    void updateTransitions(float, GJBaseGameLayer*);
    void loadValuesFromObject(EnterEffectObject*);
    void getValue(int);
    void setValue(int, float);

};

#endif // ENTEREFFECTINSTANCE_H_
