// ============================================================
// EnterEffectInstance.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef ENTEREFFECTINSTANCE_H_
#define ENTEREFFECTINSTANCE_H_

class EnterEffectInstance {
public:
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
