
#ifndef SETUPAUDIOTRIGGERPOPUP_H_
#define SETUPAUDIOTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupAudioTriggerPopup {
public:
    virtual ~SetupAudioTriggerPopup();

    void onProxMode(cocos2d::CCObject*);
    void valueDidChange(int, float);
    void addTimeControls(int, float);
    void addProxVolControls(int);
    void updateSpecialGroup();

};

#endif // SETUPAUDIOTRIGGERPOPUP_H_
