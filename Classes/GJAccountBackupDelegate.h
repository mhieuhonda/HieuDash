#ifndef HIEUDASH_GJACCOUNTBACKUPDELEGATE_H_
#define HIEUDASH_GJACCOUNTBACKUPDELEGATE_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Account backup callback delegate

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJAccountBackupDelegate {
public:
    virtual ~GJAccountBackupDelegate() {}
    virtual void onBackupSuccess() {}
    virtual void onBackupFailed(BackupAccountError) {}
};

#endif // HIEUDASH_GJACCOUNTBACKUPDELEGATE_H_
