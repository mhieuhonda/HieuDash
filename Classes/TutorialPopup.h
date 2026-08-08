// ============================================================
// TutorialPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef TUTORIALPOPUP_H_
#define TUTORIALPOPUP_H_

#include "cocos2d.h"
#include <string>

class TutorialPopup {
public:
    virtual ~TutorialPopup();
    virtual ~TutorialPopup();
    virtual ~TutorialPopup();

    void animateMenu();
    void closeTutorial(cocos2d::CCObject*);
    void keyBackClicked();
    void registerForCallback(void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCNode*);
    void init(std::string);
    void show();
    void create(std::string);

};

#endif // TUTORIALPOPUP_H_
