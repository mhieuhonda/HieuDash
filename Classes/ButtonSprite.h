#ifndef _BUTTONSPRITE_H_
#define _BUTTONSPRITE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class ButtonSprite {
public:
    ButtonSprite();
    create(char const*);
    create(char const*, float);
    create(char const*, int, int, float, bool);
    create(char const*, int, int, float, bool, char const*, char const*);
    create(char const*, int, int, float, bool, char const*, char const*, float);
    create(cocos2d::CCSprite*);
    create(cocos2d::CCSprite*, int, int, float, float, bool);
    create(cocos2d::CCSprite*, int, int, float, float, bool, char const*);
    init(char const*, int, int, float, bool, char const*, char const*, float);
    init(cocos2d::CCSprite*, int, int, float, float, bool, char const*);
    setColor(cocos2d::_ccColor3B);
    setString(char const*);
    updateBGImage(char const*);
    updateSpriteBGSize();
    ~ButtonSprite();
};

#endif // _BUTTONSPRITE_H_
