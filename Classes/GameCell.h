#ifndef _GAMECELL_H_
#define _GAMECELL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class GameCell {
public:
    GameCell(char const*, float, float);
    draw();
    init();
    loadFromString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    onTouch();
    updateBGColor(int);
    ~GameCell();
};

#endif // _GAMECELL_H_
