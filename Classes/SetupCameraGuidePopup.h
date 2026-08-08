
#ifndef SETUPCAMERAGUIDEPOPUP_H_
#define SETUPCAMERAGUIDEPOPUP_H_

#include "cocos2d.h"

class SetupCameraGuidePopup {
public:
    virtual ~SetupCameraGuidePopup();

    void init(CameraTriggerGameObject*, cocos2d::CCArray*);
    void create(CameraTriggerGameObject*, cocos2d::CCArray*);

};

#endif // SETUPCAMERAGUIDEPOPUP_H_
