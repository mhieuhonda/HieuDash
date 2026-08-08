
#ifndef GJPATHREWARDPOPUP_H_
#define GJPATHREWARDPOPUP_H_

#include "cocos2d.h"

class GJPathRewardPopup {
public:
    virtual ~GJPathRewardPopup();

    void closePopup();
    void keyBackClicked();
    void init(int);
    void create(int);
    void onClaim(cocos2d::CCObject*);

};

#endif // GJPATHREWARDPOPUP_H_
