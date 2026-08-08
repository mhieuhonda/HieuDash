
#ifndef SETUPTELEPORTPOPUP_H_
#define SETUPTELEPORTPOPUP_H_

#include "cocos2d.h"

class SetupTeleportPopup {
public:
    virtual ~SetupTeleportPopup();

    void valueDidChange(int, float);
    void onTeleportGravity(cocos2d::CCObject*);
    void determineStartValues();
    void updateDefaultTriggerValues();
    void updateTeleportGravityState(int);
    void init(TeleportPortalObject*, cocos2d::CCArray*, int, bool);
    void create(TeleportPortalObject*, cocos2d::CCArray*, int, bool);

};

#endif // SETUPTELEPORTPOPUP_H_
