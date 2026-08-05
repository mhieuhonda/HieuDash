#ifndef _MULTILINEBITMAPFONT_H_
#define _MULTILINEBITMAPFONT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class MultilineBitmapFont {
public:
    MultilineBitmapFont();
    createWithFont(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, float, float, cocos2d::CCPoint, int);
    getSizeWidth();
    getTextHeight();
    getTextPos();
    getTextWidth();
    initWithFont(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, float, float, cocos2d::CCPoint, int);
    readColorInfo(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    setOpacity(unsigned char);
    stringWithMaxWidth(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, float, float);
    ~MultilineBitmapFont();
};

#endif // _MULTILINEBITMAPFONT_H_
