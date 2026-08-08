
#ifndef SECRETLAYER6_H_
#define SECRETLAYER6_H_

#include "cocos2d.h"

class SecretLayer6 : public cocos2d::CCLayer {
public:
    virtual ~SecretLayer6();

    void startGame01();
    void keyBackClicked();
    bool init();
    void scene();
    void create();
    void onBack(cocos2d::CCObject*);

};

#endif // SECRETLAYER6_H_
