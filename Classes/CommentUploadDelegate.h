#ifndef HIEUDASH_COMMENTUPLOADDELEGATE_H_
#define HIEUDASH_COMMENTUPLOADDELEGATE_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Comment upload callback delegate

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CommentUploadDelegate {
public:
    virtual ~CommentUploadDelegate() {}
    virtual void onCommentUploadSuccess() {}
    virtual void onCommentUploadFailed() {}
};

#endif // HIEUDASH_COMMENTUPLOADDELEGATE_H_
