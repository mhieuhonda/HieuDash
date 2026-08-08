// ============================================================
// CCLabelTTF.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCLABELTTF_H_
#define COCOS2D_CCLABELTTF_H_

#include "cocos2d.h"

namespace cocos2d {

class CCLabelTTF {
public:
    CCLabelTTF();
    CCLabelTTF();

    virtual ~CCLabelTTF();
    virtual ~CCLabelTTF();
    virtual ~CCLabelTTF();

    void description();
    void getFontName();
    void getFontSize();
    void setFontName(char const*);
    void setFontSize(float);
    void enableShadow(cocos2d::CCSize const&, float, float, bool);
    void enableStroke(cocos2d::_ccColor3B const&, float, bool);
    void disableShadow(bool);
    void disableStroke(bool);
    void getDimensions();
    void setDimensions(cocos2d::CCSize const&);
    void updateTexture();
    void initWithString(char const*, char const*, float);
    void initWithString(char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment);
    void initWithString(char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment, cocos2d::CCVerticalTextAlignment);
    void setFontFillColor(cocos2d::_ccColor3B const&, bool);
    void getTextDefinition();
    void setTextDefinition(cocos2d::_ccFontDefinition*);
    void getVerticalAlignment();
    void setVerticalAlignment(cocos2d::CCVerticalTextAlignment);
    void _prepareTextDefinition(bool);
    void getHorizontalAlignment();
    void setHorizontalAlignment(cocos2d::CCTextAlignment);
    void createWithFontDefinition(char const*, cocos2d::_ccFontDefinition&);
    void _updateWithTextDefinition(cocos2d::_ccFontDefinition&, bool);
    void initWithStringAndTextDefinition(char const*, cocos2d::_ccFontDefinition&);
    void init();
    void create(char const*, char const*, float);
    void create(char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment);
    void create(char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment, cocos2d::CCVerticalTextAlignment);
    void create();
    void getString();
    void setString(char const*);

};

} // namespace cocos2d

#endif // COCOS2D_CCLABELTTF_H_
