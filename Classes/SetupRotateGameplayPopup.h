
#ifndef SETUPROTATEGAMEPLAYPOPUP_H_
#define SETUPROTATEGAMEPLAYPOPUP_H_

#include "cocos2d.h"

class SetupRotateGameplayPopup {
public:
    virtual ~SetupRotateGameplayPopup();

    void onPlusButton(cocos2d::CCObject*);
    void valueDidChange(int, float);
    void init(RotateGameplayGameObject*, cocos2d::CCArray*);
    void create(RotateGameplayGameObject*, cocos2d::CCArray*);

};

#endif // SETUPROTATEGAMEPLAYPOPUP_H_
