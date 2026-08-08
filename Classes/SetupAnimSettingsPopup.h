
#ifndef SETUPANIMSETTINGSPOPUP_H_
#define SETUPANIMSETTINGSPOPUP_H_

#include "cocos2d.h"

class SetupAnimSettingsPopup {
public:
    virtual ~SetupAnimSettingsPopup();

    void updateAnimSettings();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPANIMSETTINGSPOPUP_H_
