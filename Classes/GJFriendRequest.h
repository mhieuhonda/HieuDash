
#ifndef GJFRIENDREQUEST_H_
#define GJFRIENDREQUEST_H_

#include "cocos2d.h"

class GJFriendRequest : public cocos2d::CCNode {
public:
    virtual ~GJFriendRequest();

    bool init();
    void create(cocos2d::CCDictionary*);
    void create();

};

#endif // GJFRIENDREQUEST_H_
