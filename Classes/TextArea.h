// ============================================================
// TextArea.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef TEXTAREA_H_
#define TEXTAREA_H_

#include "cocos2d.h"
#include <string>

class TextArea {
public:
    virtual ~TextArea();
    virtual ~TextArea();
    virtual ~TextArea();

    void finishFade();
    void setOpacity(unsigned char);
    void colorAllLabels(cocos2d::_ccColor3B);
    void fadeInCharacters(float, float, bool, TextFadeInStyle);
    void fadeOutAndRemove();
    void setIgnoreColorCode(bool);
    void colorAllCharactersTo(cocos2d::_ccColor3B);
    void stopAllCharacterActions();
    void draw();
    void init(std::string, char const*, float, float, cocos2d::CCPoint, float, bool);
    void create(std::string, char const*, float, float, cocos2d::CCPoint, float, bool);
    void fadeIn(float, bool);
    void update(float);
    void fadeOut(float);
    void hideAll();
    void showAll();
    void setString(std::string);

};

#endif // TEXTAREA_H_
