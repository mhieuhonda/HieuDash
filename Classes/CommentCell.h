#ifndef HIEUDASH_COMMENTCELL_H_
#define HIEUDASH_COMMENTCELL_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Comment list cell

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "TableViewCell.h"

class CommentCell : public TableViewCell {
public:
    CommentCell();

    GJComment* m_pComment;
    SimplePlayer* m_pPlayerIcon;
    cocos2d::CCLabelBMFont* m_pCommentLabel;
    cocos2d::CCLabelBMFont* m_pUserNameLabel;
    cocos2d::CCLabelBMFont* m_pLikesLabel;
    cocos2d::CCLabelBMFont* m_pDateLabel;

    static CommentCell* create(char const*, float, float);
    bool init(char const*, float, float);
    void loadFromComment(GJComment*);
    void onLike(cocos2d::CCObject*);
    void updateBGColor(int);

    ~CommentCell();
};

#endif // HIEUDASH_COMMENTCELL_H_
