#ifndef HIEUDASH_TRIGGEREFFECTDELEGATE_H_
#define HIEUDASH_TRIGGEREFFECTDELEGATE_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Trigger effect callback delegate

#include "cocos2d.h"
#include "HieuDashEnums.h"

class TriggerEffectDelegate {
public:
    virtual ~TriggerEffectDelegate() {}
    virtual void OnTriggerEffect(EffectGameObject*) {}
    virtual void onResetEffect(int) {}
};

#endif // HIEUDASH_TRIGGEREFFECTDELEGATE_H_
