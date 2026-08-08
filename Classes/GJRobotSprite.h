// ============================================================
// GJRobotSprite.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJROBOTSPRITE_H_
#define GJROBOTSPRITE_H_

#include "cocos2d.h"
#include <string>

class GJRobotSprite {
public:
    virtual ~GJRobotSprite();
    virtual ~GJRobotSprite();
    virtual ~GJRobotSprite();

    void setOpacity(unsigned char);
    void updateFrame(int);
    void updateColors();
    void hideSecondary();
    void updateColor01(cocos2d::_ccColor3B);
    void updateColor02(cocos2d::_ccColor3B);
    void updateGlowColor(cocos2d::_ccColor3B, bool);
    void init(int);
    void init(int, std::string);
    void create(int);
    void hideGlow();
    void showGlow();

};

#endif // GJROBOTSPRITE_H_
