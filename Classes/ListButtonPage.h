
#ifndef LISTBUTTONPAGE_H_
#define LISTBUTTONPAGE_H_

#include "cocos2d.h"

class ListButtonPage {
public:
    virtual ~ListButtonPage();

    void init(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float);
    void create(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float);

};

#endif // LISTBUTTONPAGE_H_
