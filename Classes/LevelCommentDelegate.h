#ifndef HIEUDASH_LEVELCOMMENTDELEGATE_H_
#define HIEUDASH_LEVELCOMMENTDELEGATE_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Comment loading callback delegate

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LevelCommentDelegate {
public:
    virtual ~LevelCommentDelegate() {}
    virtual void onLevelCommentsLoaded(cocos2d::CCArray*, bool) {}
    virtual void onLevelCommentLoadFailed() {}
};

#endif // HIEUDASH_LEVELCOMMENTDELEGATE_H_
