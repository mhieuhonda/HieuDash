#ifndef _TEXTAREA_H_
#define _TEXTAREA_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class TextArea {
public:
    TextArea();
    colorAllCharactersTo(cocos2d::_ccColor3B);
    create(char const*, float, int, cocos2d::CCPoint, char const*);
    create(char const*, float, int, cocos2d::CCPoint, char const*, float);
    draw();
    fadeIn(float, bool);
    fadeOut(float);
    fadeOutAndRemove();
    finishFade();
    getAlign();
    getFadeInFinished();
    getLineSpace();
    getOnTimer();
    getOrder();
    getSizeWidth();
    getTextHeight();
    getTextPosition();
    getTextWidth();
    hideAll();
    init(char const*, float, int, cocos2d::CCPoint, char const*, float);
    setAlign(cocos2d::CCPoint);
    setFadeInFinished(bool);
    setLineSpace(float);
    setOnTimer(bool);
    setOpacity(unsigned char);
    setOrder(int);
    setString(char const*);
    showAll();
    stopAllCharacterActions();
    ~TextArea();
};

#endif // _TEXTAREA_H_
