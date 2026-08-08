
#ifndef GJREQUESTCELL_H_
#define GJREQUESTCELL_H_

#include "cocos2d.h"

class GJRequestCell : public cocos2d::CCNode {
public:
    GJRequestCell(char const*, float, float);
    GJRequestCell(char const*, float, float);

    virtual ~GJRequestCell();

    void markAsRead();
    void onClosePopup(UploadActionPopup*);
    void updateToggle();
    void loadFromScore(GJUserScore*);
    void onViewProfile(cocos2d::CCObject*);
    void updateBGColor(int);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void onDeleteRequest(cocos2d::CCObject*);
    void uploadActionFailed(int, int);
    void onViewFriendRequest(cocos2d::CCObject*);
    void uploadActionFinished(int, int);
    void draw();
    bool init();
    void onToggle(cocos2d::CCObject*);

};

#endif // GJREQUESTCELL_H_
