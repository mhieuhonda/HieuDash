
#ifndef SETUPFORCEBLOCKPOPUP_H_
#define SETUPFORCEBLOCKPOPUP_H_

#include "cocos2d.h"

class SetupForceBlockPopup {
public:
    virtual ~SetupForceBlockPopup();

    void valueDidChange(int, float);
    void init(ForceBlockGameObject*, cocos2d::CCArray*);
    void create(ForceBlockGameObject*, cocos2d::CCArray*);

};

#endif // SETUPFORCEBLOCKPOPUP_H_
