#ifndef _MENULAYER_H_
#define _MENULAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class MenuLayer {
public:
    FLAlert_Clicked(FLAlertLayer*, bool);
    MenuLayer();
    endGame();
    init();
    keyBackClicked();
    node();
    onAchievements();
    onCreator();
    onGameCenter();
    onGarage();
    onMoreGames();
    onOptions();
    onPlay();
    onRobTop();
    onStats();
    scene();
    showGCQuestion();
    ~MenuLayer();
};

#endif // _MENULAYER_H_
