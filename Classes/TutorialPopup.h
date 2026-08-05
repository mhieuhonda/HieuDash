#ifndef _TUTORIALPOPUP_H_
#define _TUTORIALPOPUP_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class TutorialPopup {
public:
    TutorialPopup();
    animateMenu();
    closeTutorial();
    create(char const*);
    init(char const*);
    keyBackClicked();
    registerForCallback(void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCNode*);
    show();
    ~TutorialPopup();
};

#endif // _TUTORIALPOPUP_H_
