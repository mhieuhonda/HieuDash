#ifndef HIEUDASH_GJACCOUNTREGISTERDELEGATE_H_
#define HIEUDASH_GJACCOUNTREGISTERDELEGATE_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Account register callback delegate

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJAccountRegisterDelegate {
public:
    virtual ~GJAccountRegisterDelegate() {}
    virtual void onRegisterSuccess() {}
    virtual void onRegisterFailed(AccountError) {}
};

#endif // HIEUDASH_GJACCOUNTREGISTERDELEGATE_H_
