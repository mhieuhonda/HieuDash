// ============================================================
// UserListDelegate.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef USERLISTDELEGATE_H_
#define USERLISTDELEGATE_H_

#include "cocos2d.h"

class UserListDelegate {
public:
    void forceReloadList(UserListType);
    void userListChanged(cocos2d::CCArray*, UserListType);
    void getUserListFailed(UserListType, GJErrorCode);
    void getUserListFinished(cocos2d::CCArray*, UserListType);

};

#endif // USERLISTDELEGATE_H_
