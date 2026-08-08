// ============================================================
// ButtonSprite.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef BUTTONSPRITE_H_
#define BUTTONSPRITE_H_

#include "cocos2d.h"
#include <string>

class ButtonSprite {
public:
    virtual ~ButtonSprite();
    virtual ~ButtonSprite();
    virtual ~ButtonSprite();

    void updateBGImage(char const*);
    void updateSpriteBGSize();
    void updateSpriteOffset(cocos2d::CCPoint);
    void init(char const*, int, int, float, bool, char const*, char const*, float);
    void init(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool);
    void create(char const*);
    void create(char const*, float);
    void create(char const*, int, int, float, bool);
    void create(char const*, int, int, float, bool, char const*, char const*);
    void create(char const*, int, int, float, bool, char const*, char const*, float);
    void create(cocos2d::CCSprite*);
    void create(cocos2d::CCSprite*, int, int, float, float, bool);
    void create(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool);
    void setColor(cocos2d::_ccColor3B);
    void setString(char const*);

protected:
    cocos2d::_ccColor3B m_color;
    std::string m_string;

};

#endif // BUTTONSPRITE_H_
