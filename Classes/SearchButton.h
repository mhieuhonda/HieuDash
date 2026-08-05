#ifndef _SEARCHBUTTON_H_
#define _SEARCHBUTTON_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class SearchButton {
public:
    SearchButton();
    create(char const*, char const*, float, char const*);
    getLabel();
    getSprite();
    init(char const*, char const*, float, char const*);
    ~SearchButton();
};

#endif // _SEARCHBUTTON_H_
