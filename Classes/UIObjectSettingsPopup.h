
#ifndef UIOBJECTSETTINGSPOPUP_H_
#define UIOBJECTSETTINGSPOPUP_H_

#include "cocos2d.h"

class UIObjectSettingsPopup {
public:
    virtual ~UIObjectSettingsPopup();

    void onCustomToggleTriggerValue(cocos2d::CCObject*);
    void init(UISettingsGameObject*, cocos2d::CCArray*);
    void create(UISettingsGameObject*, cocos2d::CCArray*);

};

#endif // UIOBJECTSETTINGSPOPUP_H_
