
#ifndef TUTORIALLAYER_H_
#define TUTORIALLAYER_H_

#include "cocos2d.h"

class TutorialLayer : public cocos2d::CCLayer {
public:
    virtual ~TutorialLayer();

    void keyBackClicked();
    void removeTutorialTexture();
    bool init();
    void create();
    void onNext(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void loadPage(int);

};

#endif // TUTORIALLAYER_H_
