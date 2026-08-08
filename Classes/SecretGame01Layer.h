
#ifndef SECRETGAME01LAYER_H_
#define SECRETGAME01LAYER_H_

#include "cocos2d.h"

class SecretGame01Layer {
public:
    virtual ~SecretGame01Layer();

    void gameStep01();
    void gameStep02();
    void showGameWon();
    void scaleOutGame(bool);
    void showGameOver();
    void onSelectButton(cocos2d::CCObject*);
    void resetGameTimer();
    void getRowsForDifficulty(int);
    void getTimeForDifficulty(int);
    void getCountForDifficulty(int);
    void getFrameForDifficulty(int);
    void didSelectCorrectObject(CCMenuItemSpriteExtra*);
    void init();
    void create();
    void update(float);
    void resetGame();

protected:
    int m_countForDifficulty;

};

#endif // SECRETGAME01LAYER_H_
