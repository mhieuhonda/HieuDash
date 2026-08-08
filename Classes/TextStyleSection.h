// ============================================================
// TextStyleSection.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef TEXTSTYLESECTION_H_
#define TEXTSTYLESECTION_H_

#include "cocos2d.h"

class TextStyleSection {
public:
    virtual ~TextStyleSection();
    virtual ~TextStyleSection();
    virtual ~TextStyleSection();

    void createDelaySection(int, float);
    void createShakeSection(int, int, int, int);
    void createColoredSection(cocos2d::_ccColor3B, int, int);
    void createInstantSection(int, int, float);
    void init(int, int, TextStyleType);
    void create(int, int, TextStyleType);

};

#endif // TEXTSTYLESECTION_H_
