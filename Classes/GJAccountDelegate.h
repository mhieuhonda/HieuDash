#ifndef HIEUDASH_GJACCOUNTDELEGATE_H_
#define HIEUDASH_GJACCOUNTDELEGATE_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Account status callback delegate

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJAccountDelegate {
public:
    virtual ~GJAccountDelegate() {}
    virtual void onAccountStatusChanged(bool) {}
    virtual void onAccountLoginFailed(AccountError) {}
};

#endif // HIEUDASH_GJACCOUNTDELEGATE_H_
