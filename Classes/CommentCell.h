
#ifndef COMMENTCELL_H_
#define COMMENTCELL_H_

#include "cocos2d.h"

class CommentCell : public cocos2d::CCNode {
public:
    static CommentCell* create();
    CommentCell(char const*, float, float);
    CommentCell(char const*, float, float);

    virtual ~CommentCell();

    void onUndelete();
    void onGoToLevel(cocos2d::CCObject*);
    void onViewProfile(cocos2d::CCObject*);
    void updateBGColor(int);
    void incrementLikes();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void loadFromComment(GJComment*);
    void onConfirmDelete(cocos2d::CCObject*);
    void incrementDislikes();
    void updateLabelValues();
    void draw() override;
    bool init() override;
    void onLike(cocos2d::CCObject*);
    void onDelete();
    void onUnhide(cocos2d::CCObject*);
    void likedItem(LikeItemType, int, bool);

};

#endif // COMMENTCELL_H_
