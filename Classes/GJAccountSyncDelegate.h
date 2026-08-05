#ifndef HIEUDASH_GJACCOUNTSYNCDELEGATE_H_
#define HIEUDASH_GJACCOUNTSYNCDELEGATE_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Account sync callback delegate

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJAccountSyncDelegate {
public:
    virtual ~GJAccountSyncDelegate() {}
    virtual void onSyncSuccess() {}
    virtual void onSyncFailed(BackupAccountError) {}
};

#endif // HIEUDASH_GJACCOUNTSYNCDELEGATE_H_
