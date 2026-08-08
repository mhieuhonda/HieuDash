// ============================================================
// FriendRequestDelegate.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef FRIENDREQUESTDELEGATE_H_
#define FRIENDREQUESTDELEGATE_H_

#include "cocos2d.h"
#include <string>

class FriendRequestDelegate {
public:
    void setupPageInfo(std::string, char const*);
    void forceReloadRequests(bool);
    void loadFRequestsFailed(char const*, GJErrorCode);
    void loadFRequestsFinished(cocos2d::CCArray*, char const*);

};

#endif // FRIENDREQUESTDELEGATE_H_
