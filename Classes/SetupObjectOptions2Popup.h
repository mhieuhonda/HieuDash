
#ifndef SETUPOBJECTOPTIONS2POPUP_H_
#define SETUPOBJECTOPTIONS2POPUP_H_

#include "cocos2d.h"

class SetupObjectOptions2Popup {
public:
    virtual ~SetupObjectOptions2Popup();

    void onPlusButton(cocos2d::CCObject*);
    void init(GameObject*, cocos2d::CCArray*);
    void create(GameObject*, cocos2d::CCArray*);

};

#endif // SETUPOBJECTOPTIONS2POPUP_H_
