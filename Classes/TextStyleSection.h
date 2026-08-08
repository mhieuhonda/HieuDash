
#ifndef TEXTSTYLESECTION_H_
#define TEXTSTYLESECTION_H_

#include "cocos2d.h"

class TextStyleSection {
public:
    virtual ~TextStyleSection();

    TextStyleSection* createDelaySection(int, float);
    TextStyleSection* createShakeSection(int, int, int, int);
    TextStyleSection* createColoredSection(cocos2d::_ccColor3B, int, int);
    TextStyleSection* createInstantSection(int, int, float);
    void init(int, int, TextStyleType);
    void create(int, int, TextStyleType);

};

#endif // TEXTSTYLESECTION_H_
