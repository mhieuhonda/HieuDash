#ifndef HIEUDASH_BUTTONSPRITE_H_
#define HIEUDASH_BUTTONSPRITE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class ButtonSprite : public cocos2d::CCSprite {
public:
    ButtonSprite();

    // --- Button properties ---
    ButtonType m_eButtonType;
    float m_fAbsoluteWidth;
    cocos2d::CCLabelBMFont* m_pLabel;
    cocos2d::CCSprite* m_pBackgroundImage;
    cocos2d::CCPoint m_obSpriteOffset;
    std::string m_sString;

    // --- Methods ---
    ButtonSprite* create(char const*);
    ButtonSprite* create(char const*, float);
    ButtonSprite* create(char const*, int, int, float, bool);
    ButtonSprite* create(char const*, int, int, float, bool, char const*, char const*);
    ButtonSprite* create(char const*, int, int, float, bool, char const*, char const*, float);
    ButtonSprite* create(cocos2d::CCSprite*);
    ButtonSprite* create(cocos2d::CCSprite*, int, int, float, float, bool);
    ButtonSprite* create(cocos2d::CCSprite*, int, int, float, float, bool, char const*);
    bool init(char const*, int, int, float, bool, char const*, char const*, float);
    bool init(cocos2d::CCSprite*, int, int, float, float, bool, char const*);
    void setColor(cocos2d::_ccColor3B);
    void setString(char const*);
    void updateBGImage(char const*);
    void updateSpriteBGSize();
    ~ButtonSprite();
};

#endif // HIEUDASH_BUTTONSPRITE_H_
