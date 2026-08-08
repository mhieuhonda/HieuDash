// ============================================================
// CCLabelBMFont.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCLABELBMFONT_H_
#define COCOS2D_CCLABELBMFONT_H_

#include "cocos2d.h"

namespace cocos2d {

class CCLabelBMFont {
public:
    CCLabelBMFont();
    CCLabelBMFont();

    virtual ~CCLabelBMFont();
    virtual ~CCLabelBMFont();
    virtual ~CCLabelBMFont();

    void getFntFile();
    void getOpacity();
    void setCString(char const*);
    void setFntFile(char const*);
    void setOpacity(unsigned char);
    void updateLabel();
    void setAlignment(cocos2d::CCTextAlignment);
    void createBatched(char const*, char const*, cocos2d::CCArray*, int);
    void initWithString(char const*, char const*, float, cocos2d::CCTextAlignment, cocos2d::CCPoint);
    void setAnchorPoint(cocos2d::CCPoint const&);
    void createFontChars();
    void limitLabelWidth(float, float, float);
    void purgeCachedData();
    void getDisplayedColor();
    void getLetterPosXLeft(cocos2d::CCSprite*, float, bool);
    void getLetterPosXRight(cocos2d::CCSprite*, float, bool);
    void isOpacityModifyRGB();
    void getDisplayedOpacity();
    void setOpacityModifyRGB(bool);
    void updateDisplayedColor(cocos2d::_ccColor3B const&);
    void isCascadeColorEnabled();
    void kerningAmountForFirst(unsigned short, unsigned short);
    void setCascadeColorEnabled(bool);
    void updateDisplayedOpacity(unsigned char);
    void isCascadeOpacityEnabled();
    void setCascadeOpacityEnabled(bool);
    void setLineBreakWithoutSpace(bool);
    void init();
    void create(char const*, char const*);
    void create(char const*, char const*, float);
    void create(char const*, char const*, float, cocos2d::CCTextAlignment);
    void create(char const*, char const*, float, cocos2d::CCTextAlignment, cocos2d::CCPoint);
    void create();
    void getColor();
    void setColor(cocos2d::_ccColor3B const&);
    void setScale(float);
    void setWidth(float);
    void getString();
    void setScaleX(float);
    void setScaleY(float);
    void setString(char const*);
    void setString(char const*, bool);
    void setString(unsigned short*, bool);
    void getConfiguration()) const;

};

} // namespace cocos2d

#endif // COCOS2D_CCLABELBMFONT_H_
