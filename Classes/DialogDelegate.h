#ifndef HIEUDASH_DIALOGDELEGATE_H_
#define HIEUDASH_DIALOGDELEGATE_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Dialog closed callback delegate

#include "cocos2d.h"
#include "HieuDashEnums.h"

class DialogDelegate {
public:
    virtual ~DialogDelegate() {}
    virtual void onDialogClosed(DialogLayer*) {}
    virtual void onDialogNext(DialogLayer*) {}
};

#endif // HIEUDASH_DIALOGDELEGATE_H_
