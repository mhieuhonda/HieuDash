
#ifndef SETUPSFXEDITPOPUP_H_
#define SETUPSFXEDITPOPUP_H_

#include "cocos2d.h"

class SetupSFXEditPopup {
public:
    virtual ~SetupSFXEditPopup();

    void init(SFXTriggerGameObject*, cocos2d::CCArray*, bool);
    void create(SFXTriggerGameObject*, cocos2d::CCArray*, bool);

};

#endif // SETUPSFXEDITPOPUP_H_
