// ============================================================
// CCControlButton.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_EXTENSION_CCCONTROLBUTTON_H_
#define COCOS2D_EXTENSION_CCCONTROLBUTTON_H_

#include "cocos2d.h"
#include <string>

namespace cocos2d {
namespace extension {

class CCControlButton {
public:
    CCControlButton();
    CCControlButton();

    virtual ~CCControlButton();
    virtual ~CCControlButton();
    virtual ~CCControlButton();

    void getOpacity();
    void setEnabled(bool);
    void setMargins(int, int);
    void setOpacity(unsigned char);
    void needsLayout();
    void setSelected(bool);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void setHighlighted(bool);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void getPreferredSize();
    void getTitleForState(unsigned int);
    void setPreferredSize(cocos2d::CCSize);
    void setTitleForState(cocos2d::CCString*, unsigned int);
    void getZoomOnTouchDown();
    void setZoomOnTouchDown(bool);
    void getLabelAnchorPoint();
    void getTitleTTFForState(unsigned int);
    void setLabelAnchorPoint(cocos2d::CCPoint);
    void setTitleTTFForState(char const*, unsigned int);
    void getTitleColorForState(unsigned int);
    void getTitleLabelForState(unsigned int);
    void setTitleColorForState(cocos2d::_ccColor3B, unsigned int);
    void setTitleLabelForState(cocos2d::CCNode*, unsigned int);
    void getTitleBMFontForState(unsigned int);
    void setTitleBMFontForState(char const*, unsigned int);
    void getTitleTTFSizeForState(unsigned int);
    void setTitleTTFSizeForState(float, unsigned int);
    void initWithBackgroundSprite(cocos2d::extension::CCScale9Sprite*);
    void setAdjustBackgroundImage(bool);
    void doesAdjustBackgroundImage();
    void getBackgroundSpriteForState(unsigned int);
    void setBackgroundSpriteForState(cocos2d::extension::CCScale9Sprite*, unsigned int);
    void initWithLabelAndBackgroundSprite(cocos2d::CCNode*, cocos2d::extension::CCScale9Sprite*);
    void setBackgroundSpriteFrameForState(cocos2d::CCSpriteFrame*, unsigned int);
    void initWithTitleAndFontNameAndFontSize(std::string, char const*, float);
    void init();
    void create(cocos2d::extension::CCScale9Sprite*);
    void create(cocos2d::CCNode*, cocos2d::extension::CCScale9Sprite*);
    void create(std::string, char const*, float);
    void create();
    void getColor();
    void setColor(cocos2d::_ccColor3B const&);

protected:
    cocos2d::_ccColor3B m_color;
    bool m_enabled;
    cocos2d::CCPoint m_labelAnchorPoint;
    cocos2d::_ccColor3B m_titleColorForState;

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCCONTROLBUTTON_H_
