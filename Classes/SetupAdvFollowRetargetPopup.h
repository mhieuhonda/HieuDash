
#ifndef SETUPADVFOLLOWRETARGETPOPUP_H_
#define SETUPADVFOLLOWRETARGETPOPUP_H_

#include "cocos2d.h"

class SetupAdvFollowRetargetPopup {
public:
    virtual ~SetupAdvFollowRetargetPopup();

    void valueDidChange(int, float);
    void updateDefaultTriggerValues();
    void init(AdvancedFollowEditObject*, cocos2d::CCArray*);
    void create(AdvancedFollowEditObject*, cocos2d::CCArray*);

};

#endif // SETUPADVFOLLOWRETARGETPOPUP_H_
