// ============================================================
// SetupOptionsTriggerPopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPOPTIONSTRIGGERPOPUP_H_
#define SETUPOPTIONSTRIGGERPOPUP_H_

#include "cocos2d.h"
#include <string>

class SetupOptionsTriggerPopup {
public:
    virtual ~SetupOptionsTriggerPopup();
    virtual ~SetupOptionsTriggerPopup();
    virtual ~SetupOptionsTriggerPopup();

    void onCustomToggleTriggerValue(cocos2d::CCObject*);
    void init(GameOptionsTrigger*, cocos2d::CCArray*);
    void create(GameOptionsTrigger*, cocos2d::CCArray*);
    void addOption(int, std::string);

};

#endif // SETUPOPTIONSTRIGGERPOPUP_H_
