
#ifndef SETUPDASHRINGPOPUP_H_
#define SETUPDASHRINGPOPUP_H_

#include "cocos2d.h"

class SetupDashRingPopup {
public:
    virtual ~SetupDashRingPopup();

    void init(DashRingObject*, cocos2d::CCArray*);
    void create(DashRingObject*, cocos2d::CCArray*);

};

#endif // SETUPDASHRINGPOPUP_H_
