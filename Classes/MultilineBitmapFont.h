#ifndef HIEUDASH_MULTILINEBITMAPFONT_H_
#define HIEUDASH_MULTILINEBITMAPFONT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class MultilineBitmapFont : public cocos2d::CCLabelBMFont {
public:
    MultilineBitmapFont();

    // --- Font width array ---
    float m_fFontWidth[256];

    // --- Text arrays ---
    cocos2d::CCArray* m_pColouredTextArray;
    cocos2d::CCArray* m_pInstantTextArray;
    cocos2d::CCArray* m_pDelayedTextArray;

    // --- Methods ---
    void createWithFont(char const*, std::string, float, float, cocos2d::CCPoint, int);
    int getSizeWidth();
    int getTextHeight();
    int getTextPos();
    int getTextWidth();
    bool initWithFont(char const*, std::string, float, float, cocos2d::CCPoint, int);
    void readColorInfo(std::string);
    void setOpacity(unsigned char);
    void stringWithMaxWidth(std::string, float, float);
    ~MultilineBitmapFont();
};

#endif // HIEUDASH_MULTILINEBITMAPFONT_H_
