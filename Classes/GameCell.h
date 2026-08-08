// ============================================================
// GameCell.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GAMECELL_H_
#define GAMECELL_H_

#include "cocos2d.h"
#include <string>

class GameCell {
public:
    GameCell(char const*, float, float);
    GameCell(char const*, float, float);

    virtual ~GameCell();
    virtual ~GameCell();
    virtual ~GameCell();

    void updateBGColor(int);
    void loadFromString(std::string);
    void draw();
    void init();
    void onTouch(cocos2d::CCObject*);

};

#endif // GAMECELL_H_
