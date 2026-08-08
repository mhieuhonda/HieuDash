
#ifndef SETUPADVFOLLOWEDITPHYSICSPOPUP_H_
#define SETUPADVFOLLOWEDITPHYSICSPOPUP_H_

#include "cocos2d.h"

class SetupAdvFollowEditPhysicsPopup {
public:
    virtual ~SetupAdvFollowEditPhysicsPopup();

    void valueDidChange(int, float);
    void init(AdvancedFollowEditObject*, cocos2d::CCArray*);
    void create(AdvancedFollowEditObject*, cocos2d::CCArray*);

};

#endif // SETUPADVFOLLOWEDITPHYSICSPOPUP_H_
