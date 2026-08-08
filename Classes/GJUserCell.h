
#ifndef GJUSERCELL_H_
#define GJUSERCELL_H_

#include "cocos2d.h"

class GJUserCell : public cocos2d::CCNode {
public:
    GJUserCell(char const*, float, float);
    GJUserCell(char const*, float, float);

    virtual ~GJUserCell();

    void onClosePopup(UploadActionPopup*);
    void loadFromScore(GJUserScore*);
    void onSendMessage(cocos2d::CCObject*);
    void onUnblockUser(cocos2d::CCObject*);
    void onViewProfile(cocos2d::CCObject*);
    void updateBGColor(int);
    void onRemoveFriend(cocos2d::CCObject*);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void uploadActionFailed(int, int);
    void onViewFriendRequest(cocos2d::CCObject*);
    void uploadActionFinished(int, int);
    void onCancelFriendRequest(cocos2d::CCObject*);
    void draw();
    bool init();

};

#endif // GJUSERCELL_H_
