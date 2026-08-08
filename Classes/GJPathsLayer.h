
#ifndef GJPATHSLAYER_H_
#define GJPATHSLAYER_H_

#include "cocos2d.h"

class GJPathsLayer : public cocos2d::CCLayer {
public:
    virtual ~GJPathsLayer();

    void nameForPath(int);
    void darkenButtons(bool);
    void keyBackClicked();
    void registerWithTouchDispatcher();
    bool init();
    void show();
    void create();
    void onExit();
    void onPath(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);

};

#endif // GJPATHSLAYER_H_
