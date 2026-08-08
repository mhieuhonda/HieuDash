
#ifndef SETUPPLATFORMERENDPOPUP_H_
#define SETUPPLATFORMERENDPOPUP_H_

#include "cocos2d.h"

class SetupPlatformerEndPopup {
public:
    virtual ~SetupPlatformerEndPopup();

    void init(EndTriggerGameObject*, cocos2d::CCArray*);
    void create(EndTriggerGameObject*, cocos2d::CCArray*);

};

#endif // SETUPPLATFORMERENDPOPUP_H_
