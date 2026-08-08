
#ifndef SETUPSTATICCAMERAPOPUP_H_
#define SETUPSTATICCAMERAPOPUP_H_

#include "cocos2d.h"

class SetupStaticCameraPopup {
public:
    virtual ~SetupStaticCameraPopup();

    void updateState();
    void valueDidChange(int, float);
    void onCustomToggleTriggerValue(cocos2d::CCObject*);
    void init(CameraTriggerGameObject*, cocos2d::CCArray*);
    void create(CameraTriggerGameObject*, cocos2d::CCArray*);

};

#endif // SETUPSTATICCAMERAPOPUP_H_
