
#ifndef SECRETLAYER3_H_
#define SECRETLAYER3_H_

#include "cocos2d.h"

class SecretLayer3 {
public:
    virtual ~SecretLayer3();

    void animateEyes();
    void revealStep1();
    void revealStep2();
    void revealStep3();
    void revealStep4();
    void revealStep5();
    void dialogClosed(DialogLayer*);
    void keyBackClicked();
    void showUnlockDialog();
    void firstInteractionStep1();
    void firstInteractionStep2();
    void firstInteractionStep3();
    void firstInteractionStep4();
    void init();
    void scene();
    void create();
    void onBack(cocos2d::CCObject*);
    void onExit();
    void onClick(cocos2d::CCObject*);
    void onChest01(cocos2d::CCObject*);
    void onChest02(cocos2d::CCObject*);

};

#endif // SECRETLAYER3_H_
