// ============================================================
// MultilineBitmapFont.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef MULTILINEBITMAPFONT_H_
#define MULTILINEBITMAPFONT_H_

#include "cocos2d.h"
#include <string>

class MultilineBitmapFont {
public:
    virtual ~MultilineBitmapFont();
    virtual ~MultilineBitmapFont();
    virtual ~MultilineBitmapFont();

    void setOpacity(unsigned char);
    void initWithFont(char const*, std::string, float, float, cocos2d::CCPoint, int, bool);
    void readColorInfo(std::string);
    void createWithFont(char const*, std::string, float, float, cocos2d::CCPoint, int, bool);
    void stringWithMaxWidth(std::string, float, float);
    void moveSpecialDescriptors(int, int);

};

#endif // MULTILINEBITMAPFONT_H_
