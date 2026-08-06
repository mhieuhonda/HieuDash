#ifndef HIEUDASH_TEXTAREA_H_
#define HIEUDASH_TEXTAREA_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class TextArea : public cocos2d::CCNode {
public:
    TextArea();
    void colorAllCharactersTo(cocos2d::_ccColor3B);
    static TextArea* create(char const*, float, int, cocos2d::CCPoint, char const*);
    static TextArea* create(char const*, float, int, cocos2d::CCPoint, char const*, float);
    void draw();
    void fadeIn(float, bool);
    void fadeOut(float);
    void fadeOutAndRemove();
    void finishFade();
    int getAlign();
    int getFadeInFinished();
    int getLineSpace();
    int getOnTimer();
    int getOrder();
    int getSizeWidth();
    int getTextHeight();
    int getTextPosition();
    int getTextWidth();
    void hideAll();
    bool init(char const*, float, int, cocos2d::CCPoint, char const*, float);
    void setAlign(cocos2d::CCPoint);
    void setFadeInFinished(bool);
    void setLineSpace(float);
    void setOnTimer(bool);
    void setOpacity(unsigned char);
    void setOrder(int);
    void setString(char const*);
    void showAll();
    void stopAllCharacterActions();
    ~TextArea();
};

#endif // HIEUDASH_TEXTAREA_H_
