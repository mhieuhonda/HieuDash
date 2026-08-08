// ============================================================
// FriendRequestPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef FRIENDREQUESTPOPUP_H_
#define FRIENDREQUESTPOPUP_H_

#include "cocos2d.h"

class FriendRequestPopup {
public:
    virtual ~FriendRequestPopup();
    virtual ~FriendRequestPopup();
    virtual ~FriendRequestPopup();

    void onClosePopup(UploadActionPopup*);
    void keyBackClicked();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void uploadActionFailed(int, int);
    void uploadActionFinished(int, int);
    void loadFromGJFriendRequest(GJFriendRequest*);
    void init(GJFriendRequest*);
    void create(GJFriendRequest*);
    void onBlock(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onAccept(cocos2d::CCObject*);
    void onRemove(cocos2d::CCObject*);
    void blockUser();

};

#endif // FRIENDREQUESTPOPUP_H_
