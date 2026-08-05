#ifndef _GJGARAGELAYER_H_
#define _GJGARAGELAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class GJGarageLayer {
public:
    FLAlert_Clicked(FLAlertLayer*, bool);
    GJGarageLayer();
    checkColor(int, bool);
    checkIcon(int);
    descriptionForUnlock(int, UnlockType);
    init();
    keyBackClicked();
    node();
    onBack();
    onPlayerColor1(cocos2d::CCNode*);
    onPlayerColor2(cocos2d::CCNode*);
    onPlayerIcon(cocos2d::CCNode*);
    scene();
    setupColorSelect();
    setupPlayerSelect();
    showUnlockPopup(int, UnlockType);
    textChanged(CCTextInputNode*);
    textInputClosed(CCTextInputNode*);
    textInputOpened(CCTextInputNode*);
    updatePlayerColors();
    updatePlayerName(char const*);
    updateRate();
    ~GJGarageLayer();
};

#endif // _GJGARAGELAYER_H_
