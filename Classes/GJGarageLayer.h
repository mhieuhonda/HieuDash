#ifndef HIEUDASH_GJGARAGELAYER_H_
#define HIEUDASH_GJGARAGELAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJGarageLayer : public cocos2d::CCLayer {
public:
    virtual void FLAlert_Clicked(FLAlertLayer*, bool);
    GJGarageLayer();
    void checkColor(int, bool);
    void checkIcon(int);
    void descriptionForUnlock(int, UnlockType);
    bool init();
    void keyBackClicked();
    void node();
    void onBack();
    void onPlayerColor1(cocos2d::CCNode*);
    void onPlayerColor2(cocos2d::CCNode*);
    void onPlayerIcon(cocos2d::CCNode*);
    cocos2d::CCScene* scene();
    void setupColorSelect();
    void setupPlayerSelect();
    void showUnlockPopup(int, UnlockType);
    void textChanged(CCTextInputNode*);
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void updatePlayerColors();
    void updatePlayerName(char const*);
    void updateRate();
    ~GJGarageLayer();
};

#endif // HIEUDASH_GJGARAGELAYER_H_
