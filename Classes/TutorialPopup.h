#ifndef HIEUDASH_TUTORIALPOPUP_H_
#define HIEUDASH_TUTORIALPOPUP_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class TutorialPopup : public cocos2d::CCNode {
public:
    TutorialPopup();
    void animateMenu();
    void closeTutorial();
    TutorialPopup* create(char const*);
    bool init(char const*);
    void keyBackClicked();
    registerForCallback(void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCNode*);
    void show();
    ~TutorialPopup();
};

#endif // HIEUDASH_TUTORIALPOPUP_H_
