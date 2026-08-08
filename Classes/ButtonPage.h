
#ifndef BUTTONPAGE_H_
#define BUTTONPAGE_H_

#include "cocos2d.h"

class ButtonPage {
public:
    virtual ~ButtonPage();

    void init(cocos2d::CCArray*, cocos2d::CCPoint, int, float);
    void create(cocos2d::CCArray*, cocos2d::CCPoint, int, float);

};

#endif // BUTTONPAGE_H_
