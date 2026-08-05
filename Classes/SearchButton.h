#ifndef HIEUDASH_SEARCHBUTTON_H_
#define HIEUDASH_SEARCHBUTTON_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class SearchButton : public cocos2d::CCMenuItemSprite {
public:
    SearchButton();
    SearchButton* create(char const*, char const*, float, char const*);
    int getLabel();
    int getSprite();
    bool init(char const*, char const*, float, char const*);
    ~SearchButton();
};

#endif // HIEUDASH_SEARCHBUTTON_H_
