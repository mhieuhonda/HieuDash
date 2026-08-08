
#ifndef LISTBUTTONBAR_H_
#define LISTBUTTONBAR_H_

#include "cocos2d.h"

class ListButtonBar {
public:
    virtual ~ListButtonBar();

    void init(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int);
    void create(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int);
    void onLeft(cocos2d::CCObject*);
    void getPage();
    void onRight(cocos2d::CCObject*);
    void goToPage(int);

};

#endif // LISTBUTTONBAR_H_
