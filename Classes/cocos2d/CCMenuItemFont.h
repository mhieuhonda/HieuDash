// ============================================================
// CCMenuItemFont.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCMENUITEMFONT_H_
#define COCOS2D_CCMENUITEMFONT_H_

#include "cocos2d.h"

namespace cocos2d {

class CCMenuItemFont {
public:
    virtual ~CCMenuItemFont();
    virtual ~CCMenuItemFont();
    virtual ~CCMenuItemFont();

    void fontNameObj();
    void fontSizeObj();
    void setFontName(char const*);
    void setFontSize(unsigned int);
    void recreateLabel();
    void initWithString(char const*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void setFontNameObj(char const*);
    void setFontSizeObj(unsigned int);
    void create(char const*);
    void create(char const*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void fontName();
    void fontSize();

};

} // namespace cocos2d

#endif // COCOS2D_CCMENUITEMFONT_H_
