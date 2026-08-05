#ifndef HIEUDASH_LIKEITEMDELEGATE_H_
#define HIEUDASH_LIKEITEMDELEGATE_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Like item callback delegate

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LikeItemDelegate {
public:
    virtual ~LikeItemDelegate() {}
    virtual void onLikeItemLiked(int, bool) {}
    virtual void onLikeItemFailed() {}
};

#endif // HIEUDASH_LIKEITEMDELEGATE_H_
