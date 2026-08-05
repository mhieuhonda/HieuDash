#ifndef HIEUDASH_GJACCOUNTSETTINGSDELEGATE_H_
#define HIEUDASH_GJACCOUNTSETTINGSDELEGATE_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Account settings callback delegate

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJAccountSettingsDelegate {
public:
    virtual ~GJAccountSettingsDelegate() {}
    virtual void onAccountSettingsUpdated() {}
    virtual void onAccountSettingsFailed() {}
};

#endif // HIEUDASH_GJACCOUNTSETTINGSDELEGATE_H_
