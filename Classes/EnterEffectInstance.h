
#ifndef ENTEREFFECTINSTANCE_H_
#define ENTEREFFECTINSTANCE_H_

#include "cocos2d.h"

class EnterEffectInstance : public cocos2d::CCObject {
public:
    static EnterEffectInstance* create();
    virtual ~EnterEffectInstance();

    void animateValue(int, float, float, float, int, float, int);
    void loadTransitions(EnterEffectObject*, float);
    void updateTransitions(float, GJBaseGameLayer*);
    void loadValuesFromObject(EnterEffectObject*);
    void getValue(int);
    void setValue(int, float);

};

#endif // ENTEREFFECTINSTANCE_H_
