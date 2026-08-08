// ============================================================
// FriendsProfilePage.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef FRIENDSPROFILEPAGE_H_
#define FRIENDSPROFILEPAGE_H_

#include "cocos2d.h"

class FriendsProfilePage {
public:
    virtual ~FriendsProfilePage();
    virtual ~FriendsProfilePage();
    virtual ~FriendsProfilePage();

    void keyBackClicked();
    void forceReloadList(UserListType);
    void userListChanged(cocos2d::CCArray*, UserListType);
    void getUserListFailed(UserListType, GJErrorCode);
    void setupUsersBrowser(cocos2d::CCArray*, UserListType);
    void getUserListFinished(cocos2d::CCArray*, UserListType);
    void registerWithTouchDispatcher();
    void init(UserListType);
    void create(UserListType);
    void onClose(cocos2d::CCObject*);
    void onUpdate(cocos2d::CCObject*);
    void onBlocked(cocos2d::CCObject*);

};

#endif // FRIENDSPROFILEPAGE_H_
